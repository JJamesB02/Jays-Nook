; ---------------------------------------------------------------------------- ;
;                                   Function                                   ;
; ---------------------------------------------------------------------------- ;

[Variables]
@includeModuleVariable=Vars\SearchBar.inc
SearchBarHeight=(40+#Pad#*2)

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[Searchbar.Shape]
Meter=shape
X=(25*#Scale#)
Y=(25*#scale#)r
Shape=Rectangle 0,0,(#W#-50*#Scale#),(40*#Scale#),(#R#*#Scale#) | StrokeWidth 2 | Extend This
This=Stroke color #Border#,#Alpha# | Fill Color #Pri_color#,#Alpha#
MouseOverAction=[!SetOption #CURRENTSECTION# This "Stroke color #BoxBorder# | Fill Color #BoxColor#,#Alpha#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Stroke color #Border#,#Alpha# | Fill Color #Pri_color#,#Alpha#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=["#@#Actions\Nircmd.exe" sendkeypress #SearchKey#]
[Searchbar.StringIcon]
Meter=String
FontFace=Segoe Fluent Icons
Text=[\xe721]
StringAlign=CenterCenter
X=(20*#Scale#)r
Y=(20*#Scale#)r
FontSize=((12*#Scale#)*#FontSizeModifier#)
MeterStyle=regularText
[Searchbar.String]
Meter=String
Text=Click here to search
StringAlign=LeftCenter
FontColor=#Dark_Color#
X=(20*#Scale#)r
Y=r
MeterStyle=regularText


[SearchBarAnchor]
Meter=String
Y=([SearchBar.Shape:YH]+#P#*#Divider#)
DynamicVariables=1