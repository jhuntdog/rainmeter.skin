;--------------------------------------------------------------------------------------------
; WEATHER

[StyleWeatherHeading]
StringAlign=right
FontColor=#colorWhite#
FontFace=#fontMain#
StringStyle=Bold
FontSize=11
AntiAlias=1
ClipString=0
X=R
Y=5R

[StyleTempText]
StringAlign=right
FontColor=#colorWhite#
FontFace=#fontMain#
FontSize=14
AntiAlias=1
ClipString=0
X=r
Y=R

;---------------------------------------------------------------------
; MEASURES

[mWeather]
Measure=Plugin
Plugin=WebParser.dll
UpdateRate=2400
Url=#WeatherURL#
RegExp="(?siU)<tmp>(.*)</tmp>.*<t>(.*)</t>.*<icon>(.*)</icon>.*<day d="0" t="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<part p="n">.*<t>(.*)</t>.*<day d="1" t="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<t>(.*)</t>.*<day d="2" t="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<t>(.*)</t>"

[mCurrent.Temp]
Measure=Plugin
Plugin=WebParser.dll
Url=[mWeather]
StringIndex=1
Substitute="":"0"


;---------------------------------------------------------------------
; METERS

;-----------------------
; FRAME

[BoundingTop]
Meter=Image
MeterStyle=StyleBoundingTop

[Outline]
Meter=Image
MeterStyle=StylePaneOutline
H=(#WeatherPaneHeight#+4)

[Background]
Meter=IMAGE
MeterStyle=StylePaneBackground
H=#WeatherPaneHeight#
;SolidColor=#colorBlue#, 125

[ContentArea]
Meter=IMAGE
MeterStyle=StylePaneContentArea
H=(#WeatherPaneHeight#-4)

;-----------------------
; TEXT

[MeterResetTopPosition]
Meter=Image
MeterStyle=PaneResetTop


;-----------------------
; Weather

[MeterCity]
Meter=STRING
MeterStyle=StyleWeatherHeading
Text=#City#

[MeterTemp]
Meter=STRING
MeterStyle=StyleTempText
MeasureName=mCurrent.Temp
Text=%1
Postfix="°"

;-----------------------

[BorderBottom]
Meter=IMAGE
MeterStyle=StyleWeatherBorder | StyleWeatherBorderBottom