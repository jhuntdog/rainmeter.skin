;--------------------------------------------------------------------------------------------
; Performance



;---------------------------------------------------------------------
; STYLES

[StyleTextStat]
StringAlign=left
FontFace=#fontMain#
FontSize=10
StringStyle=bold
AntiAlias=1
ClipString=0


[StyleTextStatLabel]
StringAlign=left
FontColor=#colorGrayLighter80#
FontSize=10
StringStyle=bold
AntiAlias=1
ClipString=0
X=12
Y=R


[StyleTextStatValue]
StringAlign=left
FontColor=#colorWhite#
FontSize=10
AntiAlias=1
ClipString=0
x=R
y=r

;---------------------------------------------------------------------
; MEASURES

[MeasureCpuAverage]
Measure=CPU

[MeasureCpuMhzFloating]
Measure=Plugin
Plugin=Plugins\PowerPlugin.dll
PowerState=MHZ

[MeasureCpuGhz]
Measure=Calc
Formula=MeasureCpuMhzFloating * 0.001

[MeasureRam]
Measure=PhysicalMemory

[MeasurePhysMemTotal]
Measure=PhysicalMemory
Total=1
UpdateDivider=3600

[MeasurePhysMemUsed]
Measure=PhysicalMemory
UpdateDivider=2



[MeasureHdd]
Measure=FreeDiskSpace
Drive=#Drive1#:
IgnoreRemovable=0
UpdateDivider=60

[MeasureTotalDiskSpace]
Measure=FreeDiskSpace
Drive=#Drive1#:
Total=1
UpdateDivider=5

[MeasureFreeDiskSpace]
Measure=FreeDiskSpace
Drive=#Drive1#:
UpdateDivider=5

[MeasureUsedDiskSpace]
Measure=FreeDiskSpace
Drive=#Drive1#:
InvertMeasure=1
UpdateDivider=5


[MeasureNetIn]
Measure=NetIn

[MeasureNetOut]
Measure=NetOut

[MeasureNetInFloating]
Measure=NetIn
MaxValue=1000000
MinValue=0

[MeasureNetInPercent]
Measure=Calc
Formula=MeasureNetInFloating / #NetworkMaxDownload#

[MeasureNetOutFloating]
Measure=NetOut
MaxValue=1000000
MinValue=0

[MeasureNetOutPercent]
Measure=Calc
Formula=MeasureNetOutFloating / #NetworkMaxUpload#




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


;--------------------------------
; SystemPanel

[MeterResetLeftPosition]
Meter=Image
MeterStyle=PaneResetLeft

[MeterResetTopPosition]
Meter=Image
MeterStyle=PaneResetTop


;------------
; CPU
[LabelCpu]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatLabel
Text="CPU"

[TextCpuValue1]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatValue
MeasureName=MeasureCpuAverage
Text="%1%"

[TextCpuValueMhz]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatValue
MeasureName=MeasureCpuGhz
NumOfDecimals=2
Text="%1 GHz"

;------------
; RAM
[LabelRam]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatLabel
Text="RAM"

[TextRamValue1]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatValue
MeasureName=MeasureRam
Percentual=1
AutoScale=1
Text="%1%"

[TextRamValue2]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatValue
MeasureName=MeasurePhysMemUsed
MeasureName2=MeasurePhysMemTotal
AutoScale=1
Text="(%1B / %2B)"

;------------
; HDD



[LabelHdd]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatLabel
Text="HDD"

[TextHdd]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatValue
MeasureName=MeasureFreeDiskSpace
MeasureName2=MeasureUsedDiskSpace
MeasureName3=MeasureTotalDiskSpace
AutoScale=1
NumOfDecimals=0
Text="%1B (%2B/%3B)"


;------------
; NET

[LabelNet]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatLabel
Text="NET"

[TextNet]
Meter=STRING
MeterStyle=StyleTextStat | StyleTextStatValue
MeasureName=MeasureNetOut
MeasureName2=MeasureNetIn
AutoScale=1
NumOfDecimals=1
Text="S: %1  R: %2"


