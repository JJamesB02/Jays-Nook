; ---------------------------------------------------------------------------- ;
;                                   Function                                   ;
; ---------------------------------------------------------------------------- ;

[Variables]
SingleRowHeight=180
BoxW=((#W#-(25*2+4*10)*#scale#)/5)
ImgW=Clamp(#BoxW#-30*#scale#,0,48*#Scale#)


[SingleBoxSubtitle]
Meter=String
X=(25*#Scale#)
Y=(25*#Scale#)r
MeterStyle=RegularText
Text=Pinned applications
StringAlign=LeftCenter
FontColor=#Dark_Color#,200

[SingleBoxEditButton]
Meter=String
X=(5*#Scale#)R
Y=(1)r
FontSize=(8*#Scale#)
MeterStyle=RegularText
Text=[\xe70f]
LeftMouseUpAction=[!WriteKeyValue Variables Skin.Name #ROOTCONFIG# "#SKINSPATH##JaxCore\@Resources\SecVar.inc"][!WriteKeyValue Variables Skin.Set_Page Modules "#SKINSPATH##JaxCore\@Resources\SecVar.inc"][!WriteKeyValue Variables Page.Page 2 "#ROOTCONFIGPATH#Core\Modules.inc"][!WriteKeyValue Variables Page.SubpageModule SingleRow "#ROOTCONFIGPATH#Core\Modules.inc"][!ActivateConfig "#JaxCore\Main" "Settings.ini"]
FontFace=Segoe Fluent Icons
FontColor=#Dark_Color#,200
StringAlign=LeftCenter
DynamicVariables=1

[BoxStyle]
X=(10*#Scale#+#BoxW#-(#BoxW#/2-#ImgW#/2))r
Y=(-#BoxW#/2+#ImgW#/2)r
Shape=Rectangle 0,0,#BoxW#,#BoxW#,(#R#*#Scale#) | StrokeWidth (#Stroke#*2) | Fill Color #Dark_Color#,(#Alpha#*0.3) | Extend This
This=Stroke Color #BoxBorder#,(#Alpha#*0.5)
MouseOverAction=[!SetOption #CURRENTSECTION# This "Stroke Color #Font_Color#,(#Alpha#*0.5)"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Stroke Color #BoxBorder#,(#Alpha#*0.5)"][!UpdateMeter #CURRENTSECTION#][!Redraw]
[IconStyle]
X=(#BoxW#/2-#ImgW#/2)r
Y=(#BoxW#/2-#ImgW#/2)r
W=(#ImgW#)
DynamicVariables=1
Group=Pinned
ImagePath=#SKINSPATH#..\CoreData\ValliStart\IconCache\

[SingleBox1]
X=(#W# >= 600 ? ((#W#)/2-(#BoxW#*5+10*4*#scale#)/2) : (25*#Scale#))
Y=(#scale#*30)r

@includeSingleRow=#SKINSPATH#..\CoreData\ValliStart\SingleRow.inc

[SingleRowAnchor]
Meter=String
Y=(100*#Scale#)r
DynamicVariables=1