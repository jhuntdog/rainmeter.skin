

; ---------------------------
; CLOCK STYLES

[StyleAnalog]
X=r
Y=r
LineStart=0
StartAngle=4.7123889
RotationAngle=6.2831853
Solid=0
AntiAlias=1

[StyleArc]
X=r
Y=r
Solid=1
AntiAlias=1

; Arc Center Resets
;-------------------

[StyleClockCenter]
X=(#SidebarWidth#/2)
Y=(#ClockPanelHeight#/2)
StartAngle=4.7123889
RotationAngle=6.2831853
LineLength=4
LineStart=0
LineColor=#colorPrimaryFg1#
Solid=1
AntiAlias=1

[StyleClockCenter2]
X=(#SidebarWidth#/2)
Y=(#ClockPanelHeight#/2)
StartAngle=4.7123889
RotationAngle=6.2831853
LineLength=2
LineStart=0
LineColor=#colorPrimaryFg1#
Solid=1
AntiAlias=1



; Time Styles
; ---------------
[StyleTextTime]
StringAlign=Center
X=r
Y=-24r
FontFace=#fontText#
FontColor=#colorPrimary#
FontSize=12
AntiAlias=1
ClipString=0


; Analog Clock Styles
; -------------------

[StyleClockHours]
LineColor=#colorPurple#
LineWidth=5
LineLength=56
ValueReminder=43200

[StyleClockMinutes]
LineColor=#colorPurple#
LineWidth=3
LineLength=74
ValueReminder=3600

[StyleClockSeconds]
LineColor=#colorPurple#
LineWidth=2
LineLength=78
ValueReminder=60

; ---------------------
; INNER ARC TIME STYLES

[StyleClockRingBg]
LineColor=#colorGrayLighter#, 160

[StyleClockRingActive]
LineColor=#colorPurple#

[StyleClockRingHours]
LineWidth=10
StartAngle=4.7123889
RotationAngle=6.2831853
LineLength=50
LineStart=45

[StyleClockRingMinutes]
LineWidth=10
StartAngle=4.7123889
RotationAngle=6.2831853
LineLength=56
LineStart=51

[StyleClockRingSeconds]
LineWidth=10
StartAngle=4.7123889
RotationAngle=6.2831853
LineLength=61
LineStart=57


; ---------------------
; OUTER ARC TIME STYLES

[StyleClockOuterRingBg]
LineColor=#colorPrimaryBg2#

[StyleClockOuterRingActive]
LineColor=#colorPrimaryFg1#

[StyleClockRingHoursPerDay]
LineWidth=10
StartAngle=3.1415926
RotationAngle=3.1415926
LineLength=78
LineStart=73

[StyleClockRingDayBar]
LineWidth=10
StartAngle=3.1415926
RotationAngle=3.1415926
LineLength=84
LineStart=79

[StyleClockRingMonthBar]
LineWidth=2
StartAngle=1.5707963
RotationAngle=3.1415926
LineLength=94
LineStart=89
