;--------------------------------------------------------------------------------------------
; hdd



;---------------------------------------------------------------------
; STYLES



;---------------------------------------------------------------------
; MEASURES

[MeasureNetIn]
Measure=NetIn

[MeasureNetOut]
Measure=NetOut

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
MeterStyle=StyleGraphFrameOutline | StyleGraphFrameNet

[GraphFrameInner]
Meter=Image
MeterStyle=StyleGraphFrameInner



;-----------------------
; GRAPH

[MeterNetworkLine]
Meter=Line
MeasureName=MeasureNetOut
MeasureName2=MeasureNetIn
MeterStyle=StyleSystemGraphLine
LineCount=2
LineColor=#colorOrange#
LineColor2=#colorBrown#
AutoScale=1
AntiAlias=1


;-----------------------
; TEXT STATS

[LabelNet]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatLabel
Text="Net"

[TextNetValue1]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatValue | StyleLabelNet
FontColor=#colorOrange#
MeasureName=MeasureNetOut
AutoScale=1
Text="Send %1"

[TextNetValue2]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatValue | StyleLabelNet
FontColor=#colorBrown#
MeasureName=MeasureNetIn
AutoScale=1
Text="Receive %1"


