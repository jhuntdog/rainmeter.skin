;--------------------------------------------------------------------------------------------
; Clock

;---------------------------------------------------------------------
; MEASURES
[MeasureAlways1]
Measure=FreeDiskSpace
Drive=C:
Total=1
MaxValue=1
MinValue=0
UpdateDivider=86400

[MeasureTime]
Measure=Time

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
H=(#ClockPanelHeight#+4)

[Background]
Meter=IMAGE
MeterStyle=StylePaneBackground
H=#ClockPanelHeight#
;SolidColor=#colorBlue#, 125

[ContentArea]
Meter=IMAGE
MeterStyle=StylePaneContentArea
H=(#ClockPanelHeight#-4)

;-----------------------
; TEXT

[MeterResetTopPosition]
Meter=Image
MeterStyle=PaneResetTop


;-------------------------------------------------------------
; Clock

;-----------------------
; SUPERCLOCK CENTER POINT

[MeterClockCent]
Meter=ROUNDLINE
MeasureName=MeasureAlways1
MeterStyle=StyleClockCenter



[MeterClockCent3]
Meter=ROUNDLINE
MeasureName=MeasureAlways1
MeterStyle=StyleClockCenter


;-----------------------
; INNER ARCS

[MeterHoursBarBG]
Meter=ROUNDLINE
MeasureName=MeasureAlways1
MeterStyle=StyleArc | StyleClockRingHours | StyleClockRingBg

[MeterHoursBar]
Meter=ROUNDLINE
MeasureName=MeasureTime
MeterStyle=StyleArc | StyleClockRingHours | StyleClockRingActive
ValueReminder=43200

[MeterMinutesBarBG]
Meter=ROUNDLINE
MeasureName=MeasureAlways1
MeterStyle=StyleArc | StyleClockRingMinutes | StyleClockRingBg

[MeterMinutesBar]
Meter=ROUNDLINE
MeasureName=MeasureTime
MeterStyle=StyleArc | StyleClockRingMinutes | StyleClockRingActive
ValueReminder=3600

[MeterSecondsBarBG]
Meter=ROUNDLINE
MeasureName=MeasureAlways1
MeterStyle=StyleArc | StyleClockRingSeconds| StyleClockRingBg

[MeterSecondsBar]
Meter=ROUNDLINE
MeasureName=MeasureTime
MeterStyle=StyleArc | StyleClockRingSeconds | StyleClockRingActive
ValueReminder=60



;-----------------------
; ANALOG CLOCK

[MeterClockCent2]
Meter=ROUNDLINE
MeasureName=MeasureAlways1
MeterStyle=StyleClockCenter2

[MeterHours]
Meter=ROUNDLINE
MeasureName=MeasureTime
MeterStyle=StyleAnalog | StyleClockHours
ValueReminder=43200

[MeterHoursHighlight]
Meter=ROUNDLINE
MeasureName=MeasureTime
MeterStyle=StyleAnalog | StyleClockHours
LineColor=#colorWhite#,40
ValueReminder=43200

[MeterMinutes]
Meter=ROUNDLINE
MeasureName=MeasureTime
MeterStyle=StyleAnalog | StyleClockMinutes
ValueReminder=3600

[MeterMinutesHighlight]
Meter=ROUNDLINE
MeasureName=MeasureTime
MeterStyle=StyleAnalog | StyleClockMinutes
LineColor=#colorWhite#,40
ValueReminder=3600

[MeterSeconds]
Meter=ROUNDLINE
MeasureName=MeasureTime
MeterStyle=StyleAnalog | StyleClockSeconds
ValueReminder=60

[MeterSecondsHighlight]
Meter=ROUNDLINE
MeasureName=MeasureTime
MeterStyle=StyleAnalog | StyleClockSeconds
LineColor=#colorWhite#,40
ValueReminder=60