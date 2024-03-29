[Variables]
PageList.Scroll=0

[DefaultStartActions]
Custom3=[!SetOption PageList.Achor Y [PageList.Achor:Y]][!EnableMeasure PageListAnchorChecker][!UpdateMeasure PageListAnchorChecker]

[PageListAnchorChecker]
Measure=Calc
Formula=(Clamp((#Set.H#-185*[Set.S])-[PageList.Achor:Y], -5000, 0))
IfCondition=PageListAnchorChecker=0
IfTrueAction=[!DisableMouseAction PageList.Container "MouseScrollUpAction|MouseScrollDownAction"][!UpdateMeterGroup PageList][!Redraw]
IfFalseAction=[!ShowMeter PageList.ScrollBar][!UpdateMeterGroup PageList][!Redraw]
IfConditionMode=1
DynamicVariables=1
Disabled=1

; ---------------------------------------------------------------------------- ;
;                                  MeterStyles                                 ;
; ---------------------------------------------------------------------------- ;

[PagecatOverride:S]
X=0
Container=PageList.Container
Group=PageList
[Page.Shape:S]
Y=(25*[Set.S])r
Shape=Rectangle 0,0,(#Set.L#-#Set.P#*2),(40*[Set.S]),(#Set.R#/2) | StrokeWidth 0 | Extend This
Shape2=Rectangle (5*[Set.S]),(5*[Set.S]),(30*[Set.S]),(30*[Set.S]),(#Set.R#) | StrokeWidth 0 | Extend Fill 
Fill=Fill Color [&Func:returnBool('Skin.Set_Page', '[&Func:trim('#CURRENTSECTION#', '.Shape', '')]', '#Set.Accent_Color#', '0,0,0,1')]
Leftmouseupaction=[!WriteKeyvalue Variables "Skin.Set_Page" "[&Func:trim('#CURRENTSECTION#', '.Shape', '')]" "#@#SecVar.inc"][!Refresh]
This=Fill Color 0,0,0,1
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #Set.Sec_Color#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color 0,0,0,1"][!UpdateMeter #CURRENTSECTION#][!Redraw]
OverColor=150
LeaveColor=0
DynamicVariables=1
Group=Set.SideButtons
Container=PageList.Container
Group=PageList
[Page.StringIcon:S]
X=(20*[Set.S])r
Y=(21*[Set.S])r
DynamicVariables=1
StringAlign=CenterCenter
FontSize=((16*[Set.S])*#FontSizeModifier#)
FontFace=Material Icons Round
Group=Set.SideButtons | Set.SideIcons
Container=PageList.Container
Group=PageList
[Page.String:S]
X=(25*[Set.S])r
Y=r
StringAlign=LeftCenter
;Text=[&Func:trim('#CURRENTSECTION#', '.String', '')]
;Above line is not used as to allow translations
FontColor=[&Func:returnBool('Skin.Set_page', '[&Func:trim('#CURRENTSECTION#', '.String', '')]', '#Set.Text_Color#', '#Set.SubText_Color#')]
FontSize=((10*[Set.S])*#FontSizeModifier#)
Group=Set.SideButtons
Container=PageList.Container
Group=PageList

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[PageList.Container]
Meter=Shape
X=(#Set.P#)
Y=(#Set.P#*2.5+#Set.TB#)
Shape=Rectangle (0),(0),(#Set.L#-#Set.P#*2),(#Set.H#-(#Set.P#*2.5+#Set.TB#)-185*[Set.S]),(#Set.R#/2) | StrokeWidth 0 | Fill Color 255,255,255
DynamicVariables=1
Group=PageList
MouseActionCursor=0
MouseScrollDownAction=[!SetVariable PageList.Scroll "(Clamp(#PageList.Scroll#-15,[PageListAnchorChecker],0))"][!UpdateMeterGroup PageList][!Redraw]
MouseScrollUpAction=[!SetVariable PageList.Scroll "(Clamp(#PageList.Scroll#+15,[PageListAnchorChecker],0))"][!UpdateMeterGroup PageList][!Redraw]

[PageList.General]
Meter=String
MeterStyle=Set.String:S | Pagecat:S | PagecatOverride:S
Text=GENERAL
Y=(#PageList.Scroll#)

[Info.Shape]
Meter=Shape
MeterStyle=Page.Shape:S
[Info.StringIcon]
Meter=String
Text="[\xe88e]"
MeterStyle=Set.String:S | Page.StringIcon:S
[Info.String]
Meter=String
Text=Info
MeterStyle=Set.String:S | Page.String:S

[DLC.Shape]
Meter=Shape
LeftMouseUpAction=[!WriteKeyvalue Variables page.page 0 "#SKINSPATH##Skin.Name#\Core\DLC.inc"][!WriteKeyvalue Variables "Skin.Set_Page" "[&Func:trim('#CURRENTSECTION#', '.Shape', '')]" "#@#SecVar.inc"][!Refresh]
MeterStyle=Page.Shape:S
[DLC.StringIcon]
Meter=String
Text="[\xe854]"
MeterStyle=Set.String:S | Page.StringIcon:S
[DLC.String]
Meter=String
Text=DLC
MeterStyle=Set.String:S | Page.String:S

[General.Shape]
Meter=Shape
LeftMouseUpAction=[!WriteKeyvalue Variables page.page 1 "#SKINSPATH##Skin.Name#\Core\General.inc"][!WriteKeyvalue Variables "Skin.Set_Page" "[&Func:trim('#CURRENTSECTION#', '.Shape', '')]" "#@#SecVar.inc"][!Refresh]
MeterStyle=Page.Shape:S
[General.StringIcon]
Meter=String
Text="[\xe8b8]"
MeterStyle=Set.String:S | Page.StringIcon:S
[General.String]
Meter=String
Text=General
MeterStyle=Set.String:S | Page.String:S

[Position.Shape]
Meter=Shape
MeterStyle=Page.Shape:S
[Position.StringIcon]
Meter=String
Text="[\xe871]"
MeterStyle=Set.String:S | Page.StringIcon:S
[Position.String]
Meter=String
Text=Position
MeterStyle=Set.String:S | Page.String:S

[NewMedia.Shape]
Meter=Shape
MeterStyle=Page.Shape:S
[NewMedia.StringIcon]
Meter=String
Text="[\xe405]"
MeterStyle=Set.String:S | Page.StringIcon:S
[NewMedia.String]
Meter=String
Text=Media
MeterStyle=Set.String:S | Page.String:S

[PageList.Modular]
Meter=String
MeterStyle=Set.String:S | Pagecat:S | PagecatOverride:S
Text=MODULAR
Container=PageList.Container

[Layout.Shape]
Meter=Shape
MeterStyle=Page.Shape:S
[Layout.StringIcon]
Meter=String
Text="[\xe936]"
MeterStyle=Set.String:S | Page.StringIcon:S
[Layout.String]
Meter=String
Text=Layout
MeterStyle=Set.String:S | Page.String:S

[Modules.Shape]
Meter=Shape
LeftMouseUpAction=[!WriteKeyvalue Variables page.page 1 "#SKINSPATH##Skin.Name#\Core\Modules.inc"][!WriteKeyvalue Variables "Skin.Set_Page" "[&Func:trim('#CURRENTSECTION#', '.Shape', '')]" "#@#SecVar.inc"][!Refresh]
MeterStyle=Page.Shape:S
[Modules.StringIcon]
Meter=String
Text="[\xe87b]"
MeterStyle=Set.String:S | Page.StringIcon:S
[Modules.String]
Meter=String
Text=Modules
MeterStyle=Set.String:S | Page.String:S

[HotApps.Shape]
Meter=Shape
MeterStyle=Page.Shape:S
[HotApps.StringIcon]
Meter=String
Text="[\xe5c3]"
MeterStyle=Set.String:S | Page.StringIcon:S
[HotApps.String]
Meter=String
Text=HotApps
MeterStyle=Set.String:S | Page.String:S

[PageList.FORM]
Meter=String
MeterStyle=Set.String:S | Pagecat:S | PagecatOverride:S
Text=FORM
Container=PageList.Container

[Appearance.Shape]
Meter=Shape
MeterStyle=Page.Shape:S
[Appearance.StringIcon]
Meter=String
Text="[\xe243]"
MeterStyle=Set.String:S | Page.StringIcon:S
[Appearance.String]
Meter=String
Text=Appearance
MeterStyle=Set.String:S | Page.String:S

[ColorScheme.Shape]
Meter=Shape
MeterStyle=Page.Shape:S
[ColorScheme.StringIcon]
Meter=String
Text="[\xe40a]"
MeterStyle=Set.String:S | Page.StringIcon:S
[ColorScheme.String]
Meter=String
Text=Color Scheme
MeterStyle=Set.String:S | Page.String:S

[PageList.Achor]
Meter=String
Container=PageList.Container
x=r
Y=R

[PageList.ScrollBar]
Meter=Shape
X=([PageList.Container:XW]+25*[Set.S])
Y=((#Set.P#*2.5+#Set.TB#)+(#PageList.Scroll#/([PageListAnchorChecker]+1)*([PageList.Container:H]-([PageList.Container:H]/([PageList.Container:H]-[PageListAnchorChecker])*[PageList.Container:H]))))
Shape=Line 0,0,0,([PageList.Container:H]/([PageList.Container:H]-[PageListAnchorChecker])*[PageList.Container:H]) | StrokeWidth (4*[Set.S]) | StrokeStartCap Round | StrokeEndCap Round | Extend Fill
Fill=Stroke Color #Set.Ter_Color#
DynamicVariables=1
Group=PageList
Hidden=1