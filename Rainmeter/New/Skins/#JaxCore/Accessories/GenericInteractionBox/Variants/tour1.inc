[Rainmeter]
OnRefreshAction=#Sec.DefaultStartActions#

[Variables]
Sec.W=(500*#Sec.S#)
Sec.H=(700*#Sec.S#)
Sec.R=(5*#Sec.S#)
AniDir=Bottom
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

[ActionTimer]
Custom0=[!CommandMEasure fUnc "interactionBox('tour2')"][!Refresh]

[MeasureUser]
Measure=Plugin
Plugin=SysInfo
SysInfoType=USER_NAME
UpdateDivider=-1


; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[ImgFade]
Meter=Image
X=(#Sec.W#/2-[ImgFade:W]/2)
Y=(#Sec.H#/2-[ImgFade:W]/2-50*#Sec.s#)
W=(300*#Sec.S#)
H=([ImgFade:W])
DynamicVariables=1
ImageAlpha=50
ImageName=#@#Images\CoreAssets\#Set.IconStyle#Logo256.png
[Img]
Meter=Image
X=(#Sec.W#/2-[Img:W]/2)
Y=(#Sec.H#/2-[Img:W]/2-50*#sec.s#)
W=(256*#Sec.S#)
H=([Img:W])
DynamicVariables=1
ImageName=#@#Images\CoreAssets\#Set.IconStyle#Logo256.png


[SubtleButton]
Meter=Shape
X=(#Sec.W#/2-60*#sec.s#)
Y=(500*#Sec.S#)
Shape=Rectangle  0,0,(120*#sec.S#),(40*#Sec.S#),(#set.R#/2) | StrokeWidth 0 | Extend Fill | Extend scale
Fill=Fill Color #Set.Positive_color#
Scale=Scale 1,1
MouseOverAction=[!SetOption "#CURRENTSECTION#" Scale "Scale 1.1,1.1"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" Scale "Scale 1,1"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
LeftMouseUpAction=[!CommandMEasure ActionTimer "Execute 2"]
[SubtleText]
Meter=String
X=(60*#Sec.s#)r
Y=(20*#sec.s#)r
FontColor=#Set.Pri_color#
StringAlign=CenterCenter
Text=Get started
FontWeight=600
MeterStyle=Sec.String:S

[SkipText]
Meter=String
X=r
Y=(20*#Sec.S#+#SEc.P#)r
FontColor=#Set.Subtext_Color#
FontSize=(8*#sec.s#)
StringAlign=CenterCenter
Text=Skip setup wizard
DynamicVariables=1
MouseOverAction=[!SetOption "#CURRENTSECTION#" InlineSetting "Underline"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
MouseLeaveAction=[!SetOption "#CURRENTSECTION#" InlineSetting ""][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables UserNameCheckVariable "[MeasureUser]" "#@#Vars.inc"][!WriteKeyValue Variables Sec.Page 1 "#ROOTCONFIGPATH#Main\Home.ini"][!ActivateConfig "#JaxCore\Main" "Home.ini"][!DeactivateConfig]
MeterStyle=Sec.String:S

[Esc]
Meter=