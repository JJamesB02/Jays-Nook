

[Sec.DirButton:S]
X=((26+5)*[Set.S])r
Y=r
Shape=Rectangle 0,0,26,26,3 | StrokeWidth 0 | Extend Fill | Scale [Set.S],[Set.S],0,0
Shape2=Path Arrow | StrokeWidth (2*[Set.S]) | StrokeStartCap Round | StrokeEndCap Round | Fill Color 0,0,0,1 | Stroke Color #Set.Text_Color# | Scale [Set.S],[Set.S],0,0 | Extend Rotation
Arrow=8,6 | LineTo 18,12 | LineTo 8,18
OverColor=[&Func:returnBool('AniDir', '#CURRENTSECTION#', '#Set.Accent_Color#', '#Set.Text_Color#')],200
LeaveColor=[&Func:returnBool('AniDir', '#CURRENTSECTION#', '#Set.Accent_Color#', '#Set.Text_Color#')],150
LeftMouseUpAction=[!WriteKeyValue Variables AniDir "#CURRENTSECTION#" #Sec.SaveLocation#][!UpdateMeasure Auto_Refresh:M][!Refresh]
Fill=Fill Color [&Func:LocalVar('#CURRENTSECTION#', 'LeaveColor')]
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "Fill Color [&Func:LocalVar('#CURRENTSECTION#', 'OverColor')]"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "Fill Color [&Func:LocalVar('#CURRENTSECTION#', 'LeaveColor')]"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Container=ContentContainer
DynamicVariables=1
Hidden=(#Animated# = 1 ? 0 : 1)

[HotkeysTitle]
Meter=String
Text=Activation
MeterStyle=Set.String:S | Set.OptionCat:S


[Option00]
Meter=String
X=r
Text=Use the skin as widget
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S191]
Meter=Shape
MeterStyle=Set.Div:S
[Option01]
Meter=String
Text=Use hotkey in addition to dragging from top left of the screen
FontColor=#Set.Text_Color#,(255-150*#StayOnDesktop#)
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S19131238]
Meter=Shape
MeterStyle=Set.Div:S
[Option02]
Meter=String
Text=Activation hotKey
FontColor=#Set.Text_Color#,(255-150*(#StayOnDesktop# || (1-#UseHotkey#) = 1 ? 1 : 0))
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:12]
Meter=Shape
MeterStyle=Set.Div:S
[Option03]
Meter=String
Text=Automatically hide on startup (doesn't affect refreshes)
FontColor=#Set.Text_Color#,(255-150*#StayOnDesktop#)
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:1238]
Meter=Shape
MeterStyle=Set.Div:S
[Option04]
Meter=String
Text=Efficiency Hotkeys#CRLF#- Use tab to move to next line#CRLF#- use number keys to quickly edit rows 1-9
MeterStyle=Set.String:S | Set.OptionName:S
FontColor=#Set.Text_Color#,(255-150*#StayOnDesktop#)
;================================================================================================================================================================================


[HotkeysTitle3]
Meter=String
Text=Animation
MeterStyle=Set.String:S | Set.OptionCat:S
[Option31]
Meter=String
Text=Slide animations
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S132]
Meter=Shape
MeterStyle=Set.Div:S
[Option36]
Meter=String
Text=Transitional animations
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S1332]
Meter=Shape
MeterStyle=Set.Div:S
[Option32]
Meter=String
Text=Animation easing type
FontColor=#Set.Text_Color#,(#Animated# = 1 ? 255 : 150)
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S1342]
Meter=Shape
MeterStyle=Set.Div:S
[Option33]
Meter=String
Text=Animation direction
FontColor=#Set.Text_Color#,(#Animated# = 1 ? 255 : 150)
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S21342]
Meter=Shape
MeterStyle=Set.Div:S
[Option34]
Meter=String
Text=Animation steps
FontColor=#Set.Text_Color#,(#Animated# = 1 ? 255 : 150)
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S2]
Meter=Shape
MeterStyle=Set.Div:S
[Option35]
Meter=String
Text=Animation displacement
FontColor=#Set.Text_Color#,(#Animated# = 1 ? 255 : 150)
MeterStyle=Set.String:S | Set.OptionName:S

;================================================================================================================================================================================


[StayOnDesktop]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option00:Y]-#Set.P#+(-20/2+8)*[Set.S])

[UseHotkey]
Meter=Shape
MeterStyle=Set.Bool:S
Hidden=#StayOnDesktop#
Y=([Option01:Y]-#Set.P#+(-20/2+8)*[Set.S])

[Button02]
Meter=Shape
MeterStyle=Set.Button:S
Y=([Option02:Y]-#Set.P#+(-30/2+8)*[Set.S])
Hidden=(#StayOnDesktop# || (1-#UseHotkey#) = 1 ? 1 : 0)
Act=[!CommandMeasure Func "startSide('Hotkey')"]
[Value01]
Meter=String
Text=#KeyInString#
Hidden=(#StayOnDesktop# || (1-#UseHotkey#) = 1 ? 1 : 0)
MeterStyle=Set.String:S | Set.Value:S

[HideOnStart]
Meter=Shape
MeterStyle=Set.Bool:S
Hidden=#StayOnDesktop#
Y=([Option03:Y]-#Set.P#+(-20/2+8)*[Set.S])

[EfficiencyHotkey]
Meter=Shape
MeterStyle=Set.Bool:S
Hidden=#StayOnDesktop#
Y=([Option04:Y]-#Set.P#+(-20/2+8)*[Set.S])

; [CheckDots]
; Meter=Shape
; MeterStyle=Set.Bool:S
; Y=([Option12:Y]-#Set.P#+(-20/2+8)*[Set.S])



[Animated]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option31:Y]-#Set.P#+(-20/2+8)*[Set.S])
[TransitionalAnimations]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option36:Y]-#Set.P#+(-20/2+8)*[Set.S])
[Easetype]
Meter=Shape
MeterStyle=Set.Button:S
Y=([Option32:Y]-#Set.P#+(-30/2+8)*[Set.S])
Act=[!CommandMeasure Func "startSide('Ease')"]
Hidden=(#Animated# = 1 ? 0 : 1)
[Value32]
Meter=String
Text=#Easetype#
MeterStyle=Set.String:S | Set.Value:S
Hidden=(#Animated# = 1 ? 0 : 1)
[Left]
Meter=Shape
X=(#Set.W#-#Set.L#-#Set.P#*2-((26*4+5*3)*[Set.S]))
Y=([Option33:Y]-#Set.P#+(-26/2+8)*[Set.S])
MeterStyle=Sec.DirButton:S
[Right]
Meter=Shape
Rotation=Rotate 180
MeterStyle=Sec.DirButton:S
[Top]
Meter=Shape
Rotation=Rotate 90
MeterStyle=Sec.DirButton:S
[Bottom]
Meter=Shape
Rotation=Rotate 270
MeterStyle=Sec.DirButton:S
[AniSteps]
Meter=Shape
MeterStyle=Set.Textbox:S
Type=Int|10|40
Y=([Option34:Y]-#Set.P#+(-30/2+8)*[Set.S])
Hidden=(#Animated# = 1 ? 0 : 1)
[Value34]
Meter=String
Text=#AniSteps#
MeterStyle=Set.String:S | Set.Value:S
Hidden=(#Animated# = 1 ? 0 : 1)
[AnimationDisplacement]
Meter=Shape
MeterStyle=Set.Textbox:S
Type=Int|5|100
Y=([Option35:Y]-#Set.P#+(-30/2+8)*[Set.S])
Hidden=(#Animated# = 1 ? 0 : 1)
[Value35]
Meter=String
Text=#AnimationDisplacement#
MeterStyle=Set.String:S | Set.Value:S
Hidden=(#Animated# = 1 ? 0 : 1)

;================================================================================================================================================================================

@includeKeys=#SKINSPATH##Skin.Name#\@Resources\Actions\HotKeys.ini