;--------------------------------------------------------------------------------------------
; NOTES

[Variables]
CurrentNote=1


;---------------------------------------------------------------------
; STYLES

[StyleNotesIcon]
ImageName=#@#Images\NotesIcon.png
X=r
Y=2r
W=25
H=25
;ImageAlpha=128
;AntiAlias=1

[StyleNotesTitle]
FontFace=#fontMain#
FontColor=#colorWhite#
FontSize=10
StringStyle=BOLD
StringAlign=LeftTop
AntiAlias=1
ToolTipWidth=(#SidebarWidth#-40)
X=R
Y=2r


[StyleNotesHeaderBar]
;BarColor=#colorGrayDark#
SolidColor=#colorSemiTransparent#
BarOrientation=HORIZONTAL

[StyleNotesText]
FontFace=#fontMain#
FontColor=#colorWhite#
FontSize=7
StringAlign=LEFT
StringStyle=NORMAL
AntiAlias=1
ClipString=1
ToolTipWidth=#SidebarWidth#
X=8r
Y=4R
W=(#SidebarWidth#-26)
H=#NoteHeight#
DynamicVariables=1


;---------------------------------------------------------------------
; MEASURES

[MeasureActivateTabs]
Measure=Script
ScriptFile=#@#Measures\Tabs.lua
UpdateDivider=-1
Type=Notes
TotalTabs=8

[MeasureNote]
Measure=Script
ScriptFile="#@#Measures\Notes.lua"
UpdateDivider=10
NotePath=#NotesFile1#
ContentDivider=<donotshow>

[MeasureActive1]
Measure=Calc
Formula=#CurrentNote#=1
DynamicVariables=1
Group=Tab2
Disabled=1

[MeasureActive2]
Measure=Calc
Formula=#CurrentNote#=2
DynamicVariables=1
Group=Tab2
Disabled=1

[MeasureActive3]
Measure=Calc
Formula=#CurrentNote#=3
DynamicVariables=1
Group=Tab3
Disabled=1

[MeasureActive4]
Measure=Calc
Formula=#CurrentNote#=4
DynamicVariables=1
Group=Tab4
Disabled=1

[MeasureActive5]
Measure=Calc
Formula=#CurrentNote#=5
DynamicVariables=1
Group=Tab5
Disabled=1

[MeasureActive6]
Measure=Calc
Formula=#CurrentNote#=6
DynamicVariables=1
Group=Tab6
Disabled=1

[MeasureActive7]
Measure=Calc
Formula=#CurrentNote#=7
DynamicVariables=1
Group=Tab7
Disabled=1

[MeasureActive8]
Measure=Calc
Formula=#CurrentNote#=8
DynamicVariables=1
Group=Tab8
Disabled=1

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
H=(#NotesPaneHeight#+4)

[Background]
Meter=IMAGE
MeterStyle=StylePaneBackground
H=#NotesPaneHeight#
;SolidColor=#colorBlue#, 125

[ContentArea]
Meter=IMAGE
MeterStyle=StylePaneContentArea
H=(#NotesPaneHeight#-4)

;-----------------------
; NotesPanel

[MeterResetTopPosition]
Meter=Image
MeterStyle=PaneResetTop

[Icon]
Meter=IMAGE
MeterStyle=StyleNotesIcon

[Title]
Meter=STRING
MeterStyle=StyleNotesTitle
Text=#Name#
LeftMouseUpAction=["#Path#"]
ToolTipTitle=Edit Notes
ToolTipText=#Path#
DynamicVariables=1

[MeterBar]
Meter=Image
MeterStyle=StyleNotesHeaderBar
X=([MeterResetTopPosition:X])
Y=4R
W=#SidePaneContentWidth#
H=2
DynamicVariables=1

[Notes]
Meter=STRING
MeterStyle=StyleNotesText
Text=#Content#
LeftMouseUpAction=["#Path#"]
ToolTipTitle=Edit Notes
ToolTipText=#Path#
DynamicVariables=1