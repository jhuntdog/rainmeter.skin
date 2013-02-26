[Rainmeter]
Group=Raingression
MiddleMouseUpAction=!Refresh
LeftMouseDoubleClickAction=!ActivateConfig #CURRENTCONFIG#
MouseOverAction=[!SetVariable SkinMouseOver 1][!HideMeterGroup RaingressionMouseout][!ShowMeterGroup RaingressionMouseover][!Redraw]
MouseLeaveAction=[!SetVariable SkinMouseOver 0][!HideMeterGroup RaingressionMouseover][!ShowMeterGroup RaingressionMouseout][!Redraw]
DynamicWindowSize=1

[Variables]
SkinMouseOver=0

SidePaneContentWidth=(#SidebarWidth#-24)

TodayPaneHeight=72
WeatherPaneHeight=60
WeatherAppPaneHeight=100
ClockPanelHeight=220
TimePanelHeight=72



[StylePaneBackground]
SolidColor=#colorBlueTrans#
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #colorBlue#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #colorBlueTrans#][!UpdateMeter #CURRENTSECTION#][!Redraw]
W=(#SidebarWidth#-20)
X=10
Y=2r

; Frames
; --------------------------------------------------
[StyleBoundingTop]
SolidColor=#colorTransparent#
Y=0
X=0
W=#SidebarWidth#
H=0

[StylePaneOutline]
SolidColor=#colorTransparent#
X=8
W=(#SidebarWidth#-16)

[StylePaneContentArea]
SolidColor=#colorTransparent#
X=2r
Y=2r
W=(#SidebarWidth#-24)


; PositionalResets
; --------------------------------------------------
[PaneResetTop]
SolidColor=#colorTransparent#
X=12
Y=4
W=(#SidebarWidth#-24)
H=0

