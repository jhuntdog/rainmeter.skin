;--------------------------------------------------------------------------------------------
; WEATHER

[StyleWeatherNormal]
X=12
Y=5R
W=48
H=48
ImageName=#@#Images\weather\%1.png

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
H=(#WeatherAppPaneHeight#+4)

[Background]
Meter=IMAGE
MeterStyle=StylePaneBackground
H=#WeatherAppPaneHeight#
;SolidColor=#colorBlue#, 125

[ContentArea]
Meter=IMAGE
MeterStyle=StylePaneContentArea
H=(#WeatherAppPaneHeight#-4)

;-----------------------
; TEXT

[MeterResetTopPosition]
Meter=Image
MeterStyle=PaneResetTop

;-----------------------
; DAY 1

[Icon]
Meter=IMAGE
MeterStyle=StyleWeatherNormal
MeasureName=MeasureWeatherIcon

;-----------------------
; Weather


;-----------------------

[BorderBottom]
Meter=IMAGE
MeterStyle=StyleWeatherBorder | StyleWeatherBorderBottom