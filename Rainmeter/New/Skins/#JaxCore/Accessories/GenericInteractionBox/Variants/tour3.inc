[Variables]
Sec.W=(500*#Sec.S#)
Sec.H=(700*#Sec.S#)
AniDir=Bottom
BackgroundCheckStatus=0
GlobalCheckStatus=0
HardwareAcceleration=0
[moveX]
Formula=(#SCREENAREAWIDTH#/2)
[moveY]
Formula=(#SCREENAREAHEIGHT#/2)
[anchorX]
Formula=50
[anchorY]
Formula=50

; ---------------------------------------------------------------------------- ;
;                                   Function                                   ;
; ---------------------------------------------------------------------------- ;

[Preset:M]
Measure=Plugin
Plugin=PowershellRM
ScriptFile=#@#Powershell\PresetLoad.ps1

; ---------------------------------------------------------------------------- ;
;                                  MeterStyles                                 ;
; ---------------------------------------------------------------------------- ;

[Style.Shape:S]
X=((#Sec.W#-#Sec.P#*3)/4+#Sec.P#)r
Y=(-#Sec.S#*150/2)r
Shape=Rectangle 0,0,((#Sec.W#-#Sec.P#*3)/2),(#Sec.S#*150),(#Sec.R#/2) | StrokeWidth (2*#Sec.S#) | Extend Back | Extend Stroke
Shape2=Rectangle (#Sec.P#/2),(#Sec.P#/2),((#Sec.W#-#Sec.P#*3)/2-#Sec.P#),(#Sec.S#*150-#Sec.P#),(#Sec.R#/2) | StrokeWidth 0 | Extend Fill
Shape3=Line ((#Sec.W#-#Sec.P#*3)/4-50*#Sec.S#),(#Sec.S#*150-#Sec.P#),((#Sec.W#-#Sec.P#*3)/4+50*#Sec.S#),(#Sec.S#*150-#Sec.P#) | StrokeWidth (4*#Sec.S#) | Extend Accent | Fill Color 0,0,0,0 | StrokeStartCap Round | StrokeEndCap Round
Fill=Fill Color #Set.Sec_Color#
Fill2=Fill Color #Set.Ter_Color#
Accent=Stroke Color #Set.Accent_Color#
DynamicVariables=1
LeftMouseUpAction=[!CommandMeasure Preset:M "ChangeToFiles -theme '[&Func:trim('#CURRENTSECTION#','.Shape','')]'"][!Refresh]
[Style.String:S]
X=((#Sec.W#-#Sec.P#*3)/4)r
Y=(#Sec.S#*150/2)r
FontWeight=650
Text=[&Func:trim('#CURRENTSECTION#','.String','')]
FontSize=(#Sec.S#*18)
StringAlign=CenterCenter
DynamicVariables=1

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[ImageContainer]
Meter=Shape
Shape=Rectangle 0,0,(#Sec.W#),[Image:H],#Sec.R# | StrokeWidth 0 | Fill LinearGradient This
This=90 | 0,0,0,0 ; 0 | 0,0,0,255 ; 1
DynamicVariables=1

[Image]
Meter=Image
Container=Imagecontainer
ImageName=#@#Images\TourPreview.png
W=#Sec.W#
H=(200*#sec.S#)
PreserveAspectRatio=2
ImageAlpha=175

[Img]
Meter=Image
X=(#Sec.W#/2-[Img:W]/2)
Y=#Sec.P#
W=(100*#Sec.S#)
H=([Img:W])
DynamicVariables=1
ImageName=#@#Images\CoreAssets\#Set.IconStyle#Logo256.png

[Text]
Meter=String
Text=Welcome to JaxCore#CRLF#Choose a visual style for Core!
X=(#Sec.W#/2)
Y=(15*#Sec.s#)R
FontSize=(20*#Sec.S#)
InlinePattern=.*#CRLF#
InlineSetting=GradientColor | 180 | #Set.Accent_Color# ; 1.0 | #Set.Accent_Color_2# ; 0.0
INlinePattern2=#CRLF#.*
InlineSetting2=Size | (10*#Sec.S#)
INlinePattern3=#CRLF#.*
InlineSetting3=Color | 160,155,145
INlinePattern4=#CRLF#.*
InlineSetting4=Weight | 400
StringAlign=Center
MeterStyle=Sec.String:S
FontWeight=650

; ----------------------------------- Boxes ---------------------------------- ;

[CoreUIv2.Shape]
Meter=Shape
X=(#Sec.P#)
Y=(#Sec.P#)R
Back=Fill Color 18,18,18
Fill=Fill Color 28,28,28
Stroke=Stroke Color 35,35,35
Accent=Stroke Color 242, 52, 0
MeterStyle=Style.Shape:S
[CoreUIv2.String]
Meter=String
MeterStyle=Sec.String:S | Style.String:S
[Amarena.Shape]
Meter=Shape
Back=Fill Color 26,32,38
Fill=Fill Color 30,37,44
Stroke=Stroke Color 45,54,63
Accent=Stroke Color 251,99,150
MeterStyle=Style.Shape:S
[Amarena.String]
Meter=String
MeterStyle=Sec.String:S | Style.String:S
[Frosted.Shape]
Meter=Shape
X=(#Sec.P#)
Y=((#Sec.S#*150/2)+#Sec.P#)r
Back=Fill Color 12,12,20
Fill=Fill Color 28,28,36
Stroke=Stroke Color 35,35,41
Accent=Stroke Color 0, 184, 230
MeterStyle=Style.Shape:S
[Frosted.String]
Meter=String
MeterStyle=Sec.String:S | Style.String:S
[Amoled.Shape]
Meter=Shape
Back=Fill Color 0,0,0
Fill=Fill Color 10,10,10
Stroke=Stroke Color 30,030,30
Accent=Stroke Color 75,75,75
MeterStyle=Style.Shape:S
[Amoled.String]
Meter=String
MeterStyle=Sec.String:S | Style.String:S
; ---------------------------------- Bottom ---------------------------------- ;

[SubtleText]
Meter=String
X=(#Sec.W#/2)
Y=(#Sec.H#-#Sec.P#)
FontColor=#Set.Subtext_Color#
StringAlign=CenterBottom
Text=Continue
MouseOverAction=[!SetOption #CURRENTSECTION# InlineSetting "Underline"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# InlineSetting ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!CommandMEasure fUnc "interactionBox('tour4')"][!Refresh]
MeterStyle=Sec.String:S

[Esc]
Meter=
