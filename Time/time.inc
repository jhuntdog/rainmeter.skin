;--------------------------------------------------------------------------------------------
; Clock

;---------------------------------------------------------------------
; MEASURES

[MeasureDate]
Measure=Time
Format=%x

[MeasureTime]
Measure=Time
Format=%H:%M:%S


[Measure24HrTime]
Measure=Time
Format=%H:%M

[MeasureMonth]
Measure=Time
Format= "%m"
MaxValue=12
MinValue=1

[MeasureDay]
Measure=Time
Format= "%d"
MaxValue=31
MinValue=1

[MeasureHours]
Measure=Time
Format= "%H"
MaxValue=24
MinValue=1

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
H=(#TimePanelHeight#+4)

[Background]
Meter=IMAGE
MeterStyle=StylePaneBackground
H=#TimePanelHeight#
;SolidColor=#colorBlue#, 125

[ContentArea]
Meter=IMAGE
MeterStyle=StylePaneContentArea
H=(#TimePanelHeight#-4)


;-----------------------
; Reset

[MeterResetTopPosition]
Meter=Image
MeterStyle=PaneResetTop


;-------------------------------------------------------------
; Date Time

[ShowTime]
Meter=String
MeasureName=MeasureTime
MeterStyle=StyleTime
y=20
Text=%1

[ShowDate]
Meter=String
MeasureName=MeasureDate
MeterStyle=StyleTime
x=r
y=R
Text=%1





