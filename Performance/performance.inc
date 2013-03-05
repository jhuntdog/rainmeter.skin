;--------------------------------------------------------------------------------------------
; Performance

[StyleTextStat]
StringAlign=left
FontColor=#colorWhite#
FontFace=#fontMain#
FontSize=10
StringStyle=bold
AntiAlias=1
ClipString=0


[StyleTextStatLabel]
StringAlign=left
FontColor=#colorWhite#
FontFace=#fontMain#
FontSize=10
StringStyle=bold
AntiAlias=1
ClipString=0
X=r
Y=R


[StyleTextStatValue]
StringAlign=left
FontColor=#colorWhite#
FontFace=#fontMain#
FontSize=10
AntiAlias=1
ClipString=0
X=r
Y=R

;---------------------------------------------------------------------
; MEASURES

[MeasureAverageCPU]
Measure=CPU

[MeasureRAM]
Measure=PhysicalMemory

[MeasureHD]
Measure=FreeDiskSpace
Drive=#Drive1#:
IgnoreRemovable=0
UpdateDivider=60

[MeasurePower]
Measure=Plugin
Plugin=PowerPlugin
PowerState=PERCENT

[MeasureCore1Floating]
Measure=CPU
Processor=1

[MeasureCore1Percent]
Measure=Calc
Formula=MeasureCore1Floating / 100

[MeasureCore2Floating]
Measure=CPU
Processor=2

[MeasureCore2Percent]
Measure=Calc
Formula=MeasureCore2Floating / 100


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
H=(#PerformancePaneHeight#+4)

[Background]
Meter=IMAGE
MeterStyle=StylePaneBackground
H=#PerformancePaneHeight#
;SolidColor=#colorBlue#, 125

[ContentArea]
Meter=IMAGE
MeterStyle=StylePaneContentArea
H=(#PerformancePaneHeight#-4)


;-----------------------
; SystemPanel

[MeterResetLeftPosition]
Meter=Image
MeterStyle=PaneResetLeft

[MeterResetTopPosition]
Meter=Image
MeterStyle=PaneResetTop



[LabelCpu]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatLabel
Text="CPU"



[LabelRam]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatLabel
Text="RAM"


[LabelHdd]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatLabel
Text="HDD"

[LabelNet]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatLabel
Text="NET"


[TextCpuValue1]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatValue
MeasureName=MeasureAverageCPU
Text="%1%"