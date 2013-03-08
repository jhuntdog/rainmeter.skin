;--------------------------------------------------------------------------------------------
; WEATHER

[StyleWeatherImage]
X=24
Y=r
W=64
H=64
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
Y=-12R

[StyleWeatherText]
StringAlign=Left
FontColor=#colorWhite#
FontFace=#fontMain#
FontSize=16
AntiAlias=1
ClipString=0
X=96
Y=R

[StyleTempText]
StringStyle=Bold

[StyleWeatherCity]
FontSize=12
X=96
Y=-10R

[StyleWeatherDesc]
FontSize=10
X=96
Y=-6R

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
; Weather

[MeterResetTopPosition]
Meter=Image
MeterStyle=PaneResetTop

[Icon]
Meter=IMAGE
MeterStyle=StyleWeatherImage
MeasureName=MeasureWeatherIcon



[MeterResetTopPosition2]
Meter=Image
MeterStyle=PaneResetTop


[Temp]
Meter=STRING
MeasureName=MeasureWeatherTemp
MeterStyle=StyleWeatherText | StyleTempText
Text=%1 °F

[City]
Meter=STRING
MeasureName=MeasureWeatherCity
MeterStyle=StyleWeatherText | StyleWeatherCity


[WeatherDesc]
Meter=STRING
MeasureName=MeasureWeatherDesc
MeterStyle=StyleWeatherText | StyleWeatherDesc

[TempHighLow]
Meter=String
MeasureName=MeasureWeatherDay2Low
MeasureName2=MeasureWeatherDay2High
MeterStyle=StyleWeatherText | StyleWeatherDesc
Text=%1° / %2°



;-----------------------

