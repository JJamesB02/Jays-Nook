[Top.String:S]
Y=r
StringAlign=Right
Container=
Hidden=(#Sec.Page# = 0 ? 1 : 0)
FontSize=(14*[Set.S])

[BarClip]
Meter=Shape
Shape=Rectangle 0,0, #Set.W#, (110*[Set.S]), #Set.WinR# | StrokeWidth 0 | Extend Fill
Fill=Fill Color 0,0,0,1
MouseActionCursor=0
DynamicVariables=1

; ------------------------------------- e ------------------------------------ ;

[Class.Text1]
Meter=String
MeterStyle=Set.String:S | Top.String:S
Text=[&Func:returnBool('Sec.page', '0', 'Checking web content...', 'JaxOriginals')]
X=(#Set.P#)
Y=(#Set.P#)
Hidden=0
StringAlign=Left
LeftMouseUpAction=[!WriteKeyValue "Variables" "Sec.Page" "5"][!Refresh]

[Class.SideButton1]
Meter=String
MeterStyle=Set.String:S | Top.String:S
FontFace=Material Icons Round
Text=[\xe894]
FontSize=(22*[Set.S])
X=(#Set.W#-#Set.P#)
LeftMouseUpAction=[!WriteKeyvalue Variables Skin.Name """#JaxCore""" "#@#SecVar.inc"][!WriteKeyvalue Variables Skin.Set_Page Language "#@#SecVar.inc"][!ActivateConfig "#CURRENTCONFIG#" "Settings.ini"]

[Class.Side5]
Meter=String
MeterStyle=Set.String:S | Top.String:S
FontFace=Material Icons Round
Text=[\xe8b8]
FontSize=(22*[Set.S])
; Text=Settings
X=(-31*[Set.S]-[Class.SideButton1:W])r
LeftMouseUpAction=[!WriteKeyvalue Variables Skin.Name """#JaxCore""" "#@#SecVar.inc"][!WriteKeyvalue Variables Skin.Set_Page General "#@#SecVar.inc"][!ActivateConfig "#CURRENTCONFIG#" "Settings.ini"]

; [Class.Side4]
; Meter=String
; MeterStyle=Set.String:S | Top.String:S
; X=(-31*[Set.S]-[Class.Side5:W])r
; Text=Develop
; LeftMouseUpAction=[!WriteKeyValue "Variables" "Sec.Page" "4"][!Refresh]

[Class.Side3]
Meter=String
MeterStyle=Set.String:S | Top.String:S
X=(-31*[Set.S]-[Class.Side5:W])r
Text=Widgets
LeftMouseUpAction=[!WriteKeyValue "Variables" "Sec.Page" "3"][!Refresh]

[Class.Side2]
Meter=String
MeterStyle=Set.String:S | Top.String:S
X=(-31*[Set.S]-[Class.Side3:W])r
Text=Modules
LeftMouseUpAction=[!WriteKeyValue "Variables" "Sec.Page" "2"][!Refresh]

[Class.Side1]
Meter=String
MeterStyle=Set.String:S | Top.String:S
X=(-31*[Set.S]-[Class.Side3:W])r
Text=Home
LeftMouseUpAction=[!WriteKeyValue "Variables" "Sec.Page" "0"][!Refresh]

[Class.Side0]
Meter=String
