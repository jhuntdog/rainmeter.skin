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

PerMonPaneHeight=54



[StylePaneBackground]
SolidColor=#colorWhiteTrans#
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #colorWhite#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #colorWhiteTrans#][!UpdateMeter #CURRENTSECTION#][!Redraw]
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
SolidColor=#colorGrayLight#
X=8
W=(#SidebarWidth#-16)

[StylePaneContentArea]
SolidColor=#colorTransparent#
;SolidColor=#colorPink#
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

[PaneResetRight]
SolidColor=#colorTransparent#
X=(#SidebarWidth#-12)
Y=4
W=0

[PaneResetBottom]
SolidColor=#colorTransparent#
X=12
W=(#SidebarWidth#-24)
H=0

[PaneResetLeft]
SolidColor=#colorTransparent#
X=12
Y=4
W=0


[PaneResetCenter]
SolidColor=#colorTransparent#
X=12
W=(#SidebarWidth#-24)
H=0
