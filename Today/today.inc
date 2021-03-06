;--------------------------------------------------------------------------------------------
; TODAY

[StyleWeekday]
StringAlign=Left
FontFace=#fontMain#
FontColor=#colorPrimary#
StringStyle=Bold
FontSize=14
AntiAlias=1
ClipString=0
X=12
Y=r
H=30

[StyleMonth]
StringAlign=Left
FontFace=#fontMain#
FontColor=#colorWhite#
FontSize=14
AntiAlias=1
ClipString=0
X=12r
Y=-6R

[StyleYear]
StringAlign=Left
FontFace=#fontMain#
FontColor=#colorWhite#
FontSize=22
AntiAlias=1
ClipString=0
X=R
Y=r
H=32

[StyleTodayBar]
;BarColor=#colorGrayDark#
SolidColor=#colorSemiTransparent#
BarOrientation=HORIZONTAL
X=R
Y=-14R
W=(#SidebarWidth#-22-[MeterBar:X])
H=2

[StyleDay]
StringAlign=Right
FontFace=#fontMain#
FontColor=#colorWhite#
FontSize=32
AntiAlias=1
ClipString=0
X=R
Y=-4r


[StyleTime]
StringAlign=right
FontColor=#colorWhite#
FontFace=#fontMain#
StringStyle=Bold
FontSize=11
AntiAlias=1
ClipString=0
X=2R
Y=R


;---------------------------------------------------------------------
; MEASURES
[MeasureWeekday]
Measure=Time
Format=%A

[MeasureMonth]
Measure=Time
Format=%b

[MeasureYear]
Measure=Time
Format=%Y

[MeasureDay]
Measure=Time
Format=%d

[MeasureTime]
Measure=Time
Format=%H:%M:%S

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
H=(#TodayPaneHeight#+4)

[Background]
Meter=IMAGE
MeterStyle=StylePaneBackground
H=#TodayPaneHeight#

[ContentArea]
Meter=IMAGE
MeterStyle=StylePaneContentArea
H=(#TodayPaneHeight#-4)

;-----------------------
; TEXT

[MeterResetTopPosition]
Meter=Image
MeterStyle=PaneResetTop

[MeterDay]
Meter=String
MeasureName=MeasureDay
MeterStyle=StyleDay
StringEffect=Shadow
Text="%1"

[MeterResetTopPosition2]
Meter=Image
MeterStyle=PaneResetTop

[MeterWeekday]
Meter=String
MeasureName=MeasureWeekday
MeterStyle=StyleWeekday
Text="%1"

[MeterMonth]
Meter=String
MeasureName=MeasureMonth
MeterStyle=StyleMonth
Text="%1"

[MeterYear]
Meter=String
MeasureName=MeasureYear
MeterStyle=StyleYear
Text="%1"

[MeterBar]
Meter=Image
MeterStyle=StyleTodayBar
DynamicVariables=1



[ShowTime]
Meter=String
MeasureName=MeasureTime
MeterStyle=StyleTime
Text=%1

[MeterResetBottomPosition]
Meter=Image
MeterStyle=PaneResetBottom
Y=(#TodayPaneHeight#-4)