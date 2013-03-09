;--------------------------------------------------------------------------------------------
; hdd



;---------------------------------------------------------------------
; STYLES



;---------------------------------------------------------------------
; MEASURES

[MeasureDiskReadAccess]
Measure=Plugin
Plugin=PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="C:"



[MeasureDiskWriteAccess]
Measure=Plugin
Plugin=PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="C:"




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
MeterStyle=StyleGraphFrameOutline | StyleGraphFrameHdd

[GraphFrameInner]
Meter=Image
MeterStyle=StyleGraphFrameInner



;-----------------------
; GRAPH

[MeterLineHddGraph]
Meter=Line
MeasureName=MeasureDiskReadAccess
MeasureName2=MeasureDiskWriteAccess
MeterStyle=StyleSystemGraphLine
LineCount=2
LineColor=#colorGreen#
LineColor2=#colorLime#
AutoScale=1
AntiAlias=1


;-----------------------
; TEXT STATS

[LabelHdd]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatLabel
Text="Disk"

[TextHddValue1]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatValue | StyleLabelHdd
FontColor=#colorGreen#
MeasureName=MeasureDiskReadAccess
AutoScale=1
Text="Read %1"

[TextHddValue2]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatValue | StyleLabelHdd
FontColor=#colorLime#
MeasureName=MeasureDiskWriteAccess
AutoScale=1
Text="Write %1"


