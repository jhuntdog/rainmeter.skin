;--------------------------------------------------------------------------------------------
; cpu



;---------------------------------------------------------------------
; STYLES



;---------------------------------------------------------------------
; MEASURES

[MeasureRam]
Measure=PhysicalMemory

[MeasurePhysMemTotal]
Measure=PhysicalMemory
Total=1
UpdateDivider=3600

[MeasurePhysMemUsed]
Measure=PhysicalMemory
UpdateDivider=2




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
H=(#PerMonPaneHeight#+4)

[Background]
Meter=IMAGE
MeterStyle=StylePaneBackground
H=#PerMonPaneHeight#
;SolidColor=#colorBlue#, 125

[ContentArea]
Meter=IMAGE
MeterStyle=StylePaneContentArea
H=(#PerMonPaneHeight#-4)


;--------------------------------
; SystemPanel

[MeterResetTopPosition]
Meter=Image
MeterStyle=PaneResetTop

;------------
; RAM

;-----------------------
; GRAPH FRAME

[GraphFrameOutline]
Meter=Image
MeterStyle=StyleGraphFrameOutline | StyleGraphFrameMemory

[GraphFrameInner]
Meter=Image
MeterStyle=StyleGraphFrameInner



;-----------------------
; GRAPH


[GraphMemory]
Meter=Histogram
MeterStyle=StyleSystemGraph | StyleSystemGraphMemory
MeasureName=MeasureRam
Autoscale=0



;-----------------------
; TEXT STATS
[LabelMemory]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatLabel | StyleLabelMemory
Text="RAM"

[TextMemoryValue1]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatValue | StyleLabelMemory
MeasureName=MeasureRam
Percentual=1
AutoScale=1
Text="%1%"

[TextMemoryValue2]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatValue2 | StyleLabelMemory
MeasureName=MeasurePhysMemUsed
MeasureName2=MeasurePhysMemTotal
AutoScale=1
Text="(%1B/%2B)"




