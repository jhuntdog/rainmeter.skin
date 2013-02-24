[Variables]

;SidePaneContentWidth=(#SidebarWidth#-24)

;TodayPaneHeight=72
;WeatherPaneHeight=60



;[StylePanelBackground]
;ImageName=#@#Images\SkinBackground.#ColorImage#.png
;ScaleMargins=12,12,12,12
;ImageAlpha=1
;MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha #SkinBackgroundAlpha#][!UpdateMeter #CURRENTSECTION#][!Redraw]
;MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha 1][!UpdateMeter #CURRENTSECTION#][!Redraw]
;W=#SidebarWidth#




; Backgrounds
; --------------------------------------------------
;[StylePaneBackground]
;SolidColor=#colorBlueTrans#
;MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #colorBlue#][!UpdateMeter #CURRENTSECTION#][!Redraw]
;MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor ][!UpdateMeter #CURRENTSECTION#][!Redraw]
;W=(#SidebarWidth#-20)
;X=10
;Y=2r