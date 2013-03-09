;--------------------------------------------------------------------------------------------
; cpu



;---------------------------------------------------------------------
; STYLES



;---------------------------------------------------------------------
; MEASURES

[MeasureCpu]
Measure=CPU

[MeasureCpuMhzFloating]
Measure=Plugin
Plugin=Plugins\PowerPlugin.dll
PowerState=MHZ

[MeasureCpuGhz]
Measure=Calc
Formula=MeasureCpuMhzFloating * 0.001

[MeasureCpuPercent]
Measure=Calc
Formula=MeasureCPU / 100




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
; CPU

;-----------------------
; GRAPH FRAME

[GraphFrameOutline]
Meter=Image
MeterStyle=StyleGraphFrameOutline | StyleGraphFrameCpu

[GraphFrameInner]
Meter=Image
MeterStyle=StyleGraphFrameInner



;-----------------------
; GRAPH

[CpuGraph]
Meter=Histogram
MeterStyle=StyleSystemGraph | StyleSystemGraphCpu
MeasureName=MeasureCpu
Autoscale=0


[CpuGraphLine]
Meter=Line
MeterStyle=StyleSystemGraphLine
LineColor=#colorBlue#
MeasureName=MeasureCpu



;-----------------------
; TEXT STATS

[LabelCpu]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatLabel
Text="CPU"

[TextCpuValue1]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatValue | StyleLabelCpu
MeasureName=MeasureCpu
Text="%1%"

[TextCpuValueMhz]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatValue2 | StyleLabelCpu
MeasureName=MeasureCpuGhz
NumOfDecimals=2
Text="%1 GHz"




