;--------------------------------------------------------------------------------------------
; SYSTEM

[StyleSystemText]
StringAlign=right
FontColor=#colorWhite#
FontFace=#fontMain#
FontSize=10
StringStyle=bold
AntiAlias=1
ClipString=0
X=r
Y=R

[StyleSystemStatText]
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

[MeasureUserName]
Measure=Plugin
Plugin=SysInfo
SysInfoType=USER_NAME
SysInfoData=1

[MeasureComputerName]
Measure=Plugin
Plugin=SysInfo
SysInfoType=COMPUTER_NAME
SysInfoData=1

[MeasureOSVersion]
Measure=Plugin
Plugin=SysInfo
SysInfoType=OS_VERSION
SysInfoData=1

[MeasureOSBits]
Measure=Plugin
Plugin=SysInfo
SysInfoType=OS_BITS
SysInfoData=1

[MeasureIPAddress]
Measure=Plugin
Plugin=WebParser.dll
Url=http://checkip.dyndns.org
UpdateRate=14400
RegExp="(?siU)Address: (.*)</body>"
StringIndex=1
Substitute="":"N/A"


[MeasureUpTime]
Measure=UpTime
Format="%3!i!h, %2!i!m %1!i!s"

[MeasureProcesses]
Measure=Plugin
Plugin=Perfmon
PerfMonObject="System"
PerfMonCounter="Processes"
PerfMonInstance=""
PerfMonDifference=0


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
H=(#SystemPaneHeight#+4)

[Background]
Meter=IMAGE
MeterStyle=StylePaneBackground
H=#SystemPaneHeight#
;SolidColor=#colorBlue#, 125

[ContentArea]
Meter=IMAGE
MeterStyle=StylePaneContentArea
H=(#SystemPaneHeight#-4)


;-----------------------
; SystemPanel

[MeterResetTopPosition]
Meter=Image
MeterStyle=PaneResetTop

[MeterUpTime]
Meter=String
MeasureName=MeasureUpTime
MeterStyle=StyleSystemStatText
Text=UpTime: %1

[MeterProcesses]
Meter=String
MeasureName=MeasureProcesses
MeterStyle=StyleSystemStatText
Text=Processes: %1



[MeterResetCenterPosition]
Meter=Image
MeterStyle=PaneResetCenter
Y=(#SystemPaneHeight#/2)

[SystemName]
Meter=String
MeasureName=MeasureUserName
MeasureName2=MeasureComputerName
MeterStyle=StyleSystemText
StringCase=lower
StringEffect=shadow
X=R
Text="%1@%2"

[SystemOS]
Meter=String
MeasureName=MeasureOSVersion
MeasureName2=MeasureOSBits
MeterStyle=StyleSystemText
Text=%1 (%2 Bit)

[SystemIPAddress]
Meter=String
MeasureName=MeasureIPAddress
MeterStyle=StyleSystemText
Text="%1"


[MeterResetBottomPosition]
Meter=Image
MeterStyle=PaneResetBottom
Y=(#SystemPaneHeight#-4)


