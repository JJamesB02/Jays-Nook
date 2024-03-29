[Variables]
VersionStatus=0
BackgroundCheckStatus=0
GlobalCheckStatus=0
HardwareAcceleration=0

[WebParser]
Measure=WebParser
URL=https://raw.githubusercontent.com/Jax-Core/JaxCore/main/%40Resources/Version.inc
RegExp==(.*)$
FinishAction=[!UpdateMeasure mver]
Group=checkForBeta
CodePage=1200
[mVer]
Measure=WebParser
CodePage=1200
URL=[WebParser]
StringIndex=1
OnUpdateAction=[!CommandMeasure PSRM "Check"]
Ifcondition=mVer = #Core.Ver#
IfTrueAction=[!SetVariable VersionStatus "0"][!UpdateMeter *][!Redraw]
IfCondition2=mVer > #Core.Ver#
IfTrueAction2=[!SetVariable VersionStatus "1"][!UpdateMeter *][!Redraw]
IfCondition3=mVer < #Core.Ver#
IfTrueAction3=[!SetVariable VersionStatus "2"][!UpdateMeter *][!Redraw]
; [mVer]
; Measure=Calc
; Formula=5000

[UpdatePromptActiveChecker]
Measure=Plugin
Plugin=ConfigActive
ConfigName=#JaxCore\Accessories\UpdatePrompt
IfCondition=UpdatePromptActiveChecker = 1
IfTrueAction=[!SetVariable BackgroundCheckStatus 1][!UpdateMeter BackgroundCheckStatus][!Redraw]
IfFalseAction=[!SetVariable BackgroundCheckStatus 0][!UpdateMeter BackgroundCheckStatus][!Redraw]

; [GlobalUpdaterActiveChecker]
; Measure=Plugin
; Plugin=ConfigActive
; ConfigName=#JaxCore\Accessories\GlobalUpdater
; IfCondition=GlobalUpdaterActiveChecker = 1
; IfTrueAction=[!SetVariable GlobalCheckStatus 1][!UpdateMeter GlobalCheckStatus][!Redraw]
; IfFalseAction=[!SetVariable GlobalCheckStatus 0][!UpdateMeter GlobalCheckStatus][!Redraw]

[PSRM]
Measure=Plugin
Plugin=PowershellRM
DynamicVariables=1
ScriptFile=#@#Powershell\AddShortcut.ps1

; [ProtocolInstaller]
; Measure=Plugin
; Plugin=PowerShellRM
; ScriptFile=#ROOTCONFIGPATH#CoreInstaller\Helpers\ProtocolInstaller\ProtocolInstaller.ps1

[CoreInstallHandler]
Measure=Plugin
Plugin=PowershellRM
DynamicVariables=1
ScriptFile=#@#Powershell\Installer.ps1
ExecutionPolicy=Unrestricted

[SectionButton:S]
X=(((([ContentContainer:W]-#Set.P#)/2-5*[Set.S])*0.2)+(10)*[Set.S])r
Y=(-30/2*[Set.S])r
Shape=Rectangle 0,0,((([ContentContainer:W]-#Set.P#)/2-5*[Set.S])*0.4),(30*[Set.S]),(5*[Set.S]) | StrokeWidth 0 | Extend This
This=Fill Color #Set.Text_Color#,100
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #Set.Text_Color#,150"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #Set.Text_Color#,75"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Container=ContentContainer
DynamicVariables=1
[SectionIcon:S]
X=(((([ContentContainer:W]-#Set.P#)/2-5*[Set.S])*0.2))r
Y=(30/2*[Set.S])r
FontSize=(10*[Set.S])
FontFace=#Set.Font#
Container=ContentContainer
StringAlign=CenterCEnter
DynamicVariables=1

[Section4.ButtonProg.False]
LeftMouseUpAction=[!CommandMeasure PSRM "StartFolder"][!SetOption Section4.Button2.Shape MeterStyle "SectionButton:S | Section4.ButtonProg.True"][!UpdateMeter Section4.Button2.Shape][!Redraw]
This=Fill Color #Set.Text_Color#,100
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #Set.Text_Color#,150"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #Set.Text_Color#,75"][!UpdateMeter #CURRENTSECTION#][!Redraw]
[Section4.ButtonProg.True]
This=Fill Color 0,255,0,100
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color 0,255,0,200"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color 0,255,0,100"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!CommandMeasure PSRM "RemoveStartFolder"][!SetOption Section4.Button2.Shape MeterStyle "SectionButton:S | Section4.ButtonProg.False"][!UpdateMeter Section4.Button2.Shape][!Redraw]
[Section4.ButtonDesk.False]
LeftMouseUpAction=[!CommandMeasure PSRM "Desktop"][!SetOption Section4.Button1.Shape MeterStyle "SectionButton:S | Section4.ButtonDesk.True"][!UpdateMeter Section4.Button1.Shape][!Redraw]
This=Fill Color #Set.Text_Color#,100
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #Set.Text_Color#,150"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #Set.Text_Color#,75"][!UpdateMeter #CURRENTSECTION#][!Redraw]
[Section4.ButtonDesk.True]
This=Fill Color 0,255,0,100
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color 0,255,0,200"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color 0,255,0,100"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!CommandMeasure PSRM "RemoveDeskop"][!SetOption Section4.Button1.Shape MeterStyle "SectionButton:S | Section4.ButtonDesk.False"][!UpdateMeter Section4.Button1.Shape][!Redraw]

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[Behavior]
Meter=String
Text=Version
MeterStyle=Set.String:S | Set.OptionCat:S

; --------------------------------- Section1 --------------------------------- ;

[Section1]
Meter=Shape
X=r
Y=(15*[Set.S])R
Shape=Rectangle 0,0,([ContentContainer:W]-#Set.P#),(100*[Set.S]),(#Set.R#/4) | StrokeWidth 0 | Fill Color #Set.Sec_Color#
Container=ContentContainer
DynamicVariables=1

[Section1.Icon]
Meter=String
Text=[\xecc5]
X=(#Set.P#)r
Y=(100/2*[Set.S])r
FontSize=(20*[set.s])
MeterStyle=Set.String:S | Set.Icon:S | Section1.Icon:#VersionStatus#
[Section1.Icon:0]
FontColor=#Set.Text_Color#
[Section1.Icon:1]
FontColor=#Set.Accent_Color#
InlineSetting=Shadow | 0 | 0 | 2 | #Set.Accent_Color#
[Section1.Icon:2]
FontColor=#Set.Text_Color#

[Section1.Text]
Meter=String
X=(5*[Set.S])R
Y=r
FontSize=(10*[Set.S])
Container=ContentContainer
StringAlign=LeftCenter
InlinePattern=#CRLF#.*
InlineSetting=Color | #Set.SubText_Color#
MeterStyle=Set.String:S | Section1.Text:#VersionStatus#
Leftmouseupaction=["https://github.com/Jax-Core/JaxCore/releases/latest"]
[Section1.Text:0]
Text=v#Core.Ver##CRLF#You're up to date
[Section1.Text:1]
Text=v#Core.Ver# < v[mVer] #CRLF#See new version patch notes
[Section1.Text:2]
Text=v#Core.Ver# - Beta#CRLF#View release details

[Section1.Button]
Meter=Shape
MeterStyle=Set.Button:S | Section1.Button:#VersionStatus#
Y=(-40/2*[Set.S])r
X=([ContentContainer:W]-#Set.P#-150*[Set.S])
OverColor=100,100,100,200
LeaveColor=100,100,100,100
DynamicVariables=1
Shape=Rectangle 0,0,150,40,3,3 | StrokeWidth 0 | Extend Fill | Scale [Set.S],[Set.S],0,0
Fill=Fill Color [&Func:LocalVar('#CURRENTSECTION#', 'LeaveColor')]
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "Fill Color [&Func:LocalVar('#CURRENTSECTION#', 'OverColor')]"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "Fill Color [&Func:LocalVar('#CURRENTSECTION#', 'LeaveColor')]"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Container=ContentContainer
[Section1.Button:0]
LeftMouseUpAction=[!Refresh]
[Section1.Button:1]
LeftMouseUpAction=[!SetVariable DownloadLink "https://github.com/Jax-Core/JaxCore/releases/download/v[mVer]/JaxCore_v[mVer].rmskin"][!SetVariable DownloadName "JaxCore[mVer]"][!SetVariable DownloadConfig "#JaxCore"][!CommandMeasure CoreInstallHandler "InitInstall"]
[Section1.Button:2]
LeftMouseUpAction=[!Refresh]
[Section1.Button.Value]
Meter=String
X=(150/2*[Set.S])r
Y=(20*[Set.S])r
StringAlign=CenterCenter
FontSize=(10*[Set.S])
Container=ContentContainer
DynamicVariables=1
MeterStyle=Set.String:S | Section1.Button.Value:#VersionStatus#
[Section1.Button.Value:0]
Text=Check for updates
[Section1.Button.Value:1]
Text=Update now
[Section1.Button.Value:2]
Text=Check for updates
[Section1.Button2]
Meter=Shape
MeterStyle=Set.Button:S
Y=(-40/2*[Set.S])r
X=(-(90+150)*[Set.S])r
OverColor=100,100,100,200
LeaveColor=100,100,100,100
DynamicVariables=1
Shape=Rectangle 0,0,150,40,3,3 | StrokeWidth 0 | Extend Fill | Scale [Set.S],[Set.S],0,0
Fill=Fill Color [&Func:LocalVar('#CURRENTSECTION#', 'LeaveColor')]
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "Fill Color [&Func:LocalVar('#CURRENTSECTION#', 'OverColor')]"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "Fill Color [&Func:LocalVar('#CURRENTSECTION#', 'LeaveColor')]"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!SetVariable DownloadLink "https://github.com/Jax-Core/JaxCore/releases/download/v[mVer]/JaxCore_v[mVer].rmskin"][!SetVariable DownloadName "JaxCore[mVer]"][!SetVariable DownloadConfig "#JaxCore"][!CommandMeasure CoreInstallHandler "InitInstall"]
Container=ContentContainer
Hidden=(#VersionStatus# = 1 ? 1 : 0)
[Section1.Button2.Value]
Meter=String
Text=Force update
X=(150/2*[Set.S])r
Y=(20*[Set.S])r
StringAlign=CenterCenter
FontSize=(10*[Set.S])
Container=ContentContainer
DynamicVariables=1
MeterStyle=Set.String:S
Hidden=(#VersionStatus# = 1 ? 1 : 0)
[Section1.Button3]
Meter=Shape
MeterStyle=Set.Button:S
Y=(-40/2*[Set.S])r
X=(-(90+150)*[Set.S])r
OverColor=100,100,100,200
LeaveColor=100,100,100,100
DynamicVariables=1
Shape=Rectangle 0,0,150,40,3,3 | StrokeWidth 0 | Extend Fill | Scale [Set.S],[Set.S],0,0
Fill=Fill Color [&Func:LocalVar('#CURRENTSECTION#', 'LeaveColor')]
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "Fill Color [&Func:LocalVar('#CURRENTSECTION#', 'OverColor')]"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "Fill Color [&Func:LocalVar('#CURRENTSECTION#', 'LeaveColor')]"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!CommandMeasure Func "interactionBox('Rollback', 'JaxCore', '#Version#')"]
Container=ContentContainer
Hidden=(#VersionStatus# = 1 ? 1 : 0)
[Section1.Button3.Value]
Meter=String
Text=Version history
X=(150/2*[Set.S])r
Y=(20*[Set.S])r
StringAlign=CenterCenter
FontSize=(10*[Set.S])
Container=ContentContainer
DynamicVariables=1
MeterStyle=Set.String:S
Hidden=(#VersionStatus# = 1 ? 1 : 0)

; --------------------------------- Section2 --------------------------------- ;

[Section2]
Meter=Shape
X=(30*[Set.S])
Y=(60*[Set.S])r
Shape=Rectangle 0,0,(([ContentContainer:W]-#Set.P#)/2-5*[Set.S]),(280*[Set.S]),(#Set.R#/4) | StrokeWidth 0 | Fill Color #Set.Sec_Color#
Container=ContentContainer
DynamicVariables=1

[Section2.Icon]
Meter=Image
ImageName=#@#Images\CoreAssets\LogoIcon.png
X=((([ContentContainer:W]-#Set.P#)/2-5*[Set.S])/2-128/2*[Set.S])r
Y=(40*[Set.S])r
W=(128*[Set.S])
H=(128*[Set.S])
Container=ContentContainer
ImageTint=#Set.Text_Color#
DynamicVariables=1

[Section2.Text]
Meter=String
X=(128/2*[Set.S])r
Y=((30+128)*[Set.S])r
Text=Check for Core updates on startup#CRLF#Core will not check for updates in the background
FontSize=(10*[Set.S])
Container=ContentContainer
StringAlign=CenterCenter
InlinePattern=#CRLF#.*
InlineSetting=Color | #Set.SubText_Color#
InlinePattern2=#CRLF#.*
InlineSetting2=Size | (9*[Set.S])
MeterStyle=Set.String:S

[BackgroundCheckStatus]
Meter=Shape
MeterStyle=Set.Bool:S | BackgroundCheckStatus:#BackgroundCheckStatus#
Y=R
X=(-50/2*[Set.S])r
[BackgroundCheckStatus:0]
Leftmouseupaction=[!ActivateConfig "#JaxCore\Accessories\UpdatePrompt"][!UpdateMeasure UpdatePromptActiveChecker]
[BackgroundCheckStatus:1]
Leftmouseupaction=[!DeactivateConfig "#JaxCore\Accessories\UpdatePrompt"][!UpdateMeasure UpdatePromptActiveChecker]

; --------------------------------- Section3 --------------------------------- ;

[Section3]
Meter=Shape
X=(([ContentContainer:W]-#Set.P#*2)/2+55*[SEt.S])
Y=([Section2:Y]-#Set.P#)
Shape=Rectangle 0,0,(([ContentContainer:W]-#Set.P#)/2-5*[Set.S]),(280*[Set.S]),(#Set.R#/4) | StrokeWidth 0 | Fill Color #Set.Sec_Color#
Container=ContentContainer
DynamicVariables=1

[Section3.Icon]
Meter=Image
ImageName=#@#Images\CoreAssets\CoreModules.png
X=((([ContentContainer:W]-#Set.P#)/2-5*[Set.S])/2-128/2*[Set.S])r
Y=(40*[Set.S])r
W=(128*[Set.S])
H=(128*[Set.S])
Container=ContentContainer
ImageTint=#Set.Text_Color#,50
DynamicVariables=1

[Section3.Text]
Meter=String
X=(128/2*[Set.S])r
Y=((30+128)*[Set.S])r
Text=Check for module updates on startup#CRLF#Core will not check for updates in the background 
FontSize=(10*[Set.S])
Container=ContentContainer
StringAlign=CenterCenter
FontColor=#Set.Text_Color#,50
InlinePattern=#CRLF#.*
InlineSetting=Color | #Set.SubText_Color#,50
InlinePattern2=#CRLF#.*
InlineSetting2=Size | (9*[Set.S])
MeterStyle=Set.String:S

[GlobalCheckStatus]
Meter=Shape
MeterStyle=Set.Bool:S
Y=R
X=(-50/2*[Set.S])r
Fill=Fill Color #Set.SubText_Color#,50
Shape2=
LeftMouseUpAction=
; [GlobalCheckStatus:0]
; Leftmouseupaction=[!ActivateConfig "#JaxCore\Accessories\GlobalUpdater"][!UpdateMeasure GlobalUpdaterActiveChecker]
; [GlobalCheckStatus:1]
; Leftmouseupaction=[!DeactivateConfig "#JaxCore\Accessories\GlobalUpdater"][!UpdateMeasure GlobalUpdaterActiveChecker]

; --------------------------------- Section4 --------------------------------- ;

[Section4]
Meter=Shape
X=(30*[Set.S])
Y=([Section3:YH]-30*[Set.S])
Shape=Rectangle 0,0,(([ContentContainer:W]-#Set.P#)/2-5*[Set.S]),(250*[Set.S]),(#Set.R#/4) | StrokeWidth 0 | Fill Color #Set.Sec_Color#,200
Container=ContentContainer
DynamicVariables=1

[Section4.Icon]
Meter=Image
ImageName=#@#Images\CoreAssets\Shortcut.png
X=((([ContentContainer:W]-#Set.P#)/2-5*[Set.S])/2-100/2*[Set.S])r
Y=(40*[Set.S])r
W=(100*[Set.S])
H=(100*[Set.S])
Container=ContentContainer
ImageTint=#Set.Text_Color#
DynamicVariables=1

[Section4.Text]
Meter=String
X=(100/2*[Set.S])r
Y=((30+100)*[Set.S])r
Text=Add shortcut to desktop#CRLF#For easy access to JaxCore
FontSize=(10*[Set.S])
Container=ContentContainer
StringAlign=CenterCenter
InlinePattern=#CRLF#.*
InlineSetting=Color | #Set.SubText_Color#
InlinePattern2=#CRLF#.*
InlineSetting2=Size | (9*[Set.S])
MeterStyle=Set.String:S

[Section4.Button1.Shape]
Meter=Shape
MeterStyle=SectionButton:S | Section4.ButtonDesk.False
X=(-((([ContentContainer:W]-#Set.P#)/2-5*[Set.S])*0.4)-5*[Set.S])r
Y=(25*[Set.S])r
[Section4.Button1.Text]
Meter=String
MeterStyle=Set.String:S | SectionIcon:S
Text=Desktop
[Section4.Button2.Shape]
Meter=Shape
MeterStyle=SectionButton:S | Section4.ButtonProg.False
[Section4.Button2.Text]
Meter=String
MeterStyle=Set.String:S | SectionIcon:S
Text=Program list

; --------------------------------- Section5 --------------------------------- ;

[Section5]
Meter=Shape
X=(([ContentContainer:W]-#Set.P#*2)/2+55*[SEt.S])
Y=([Section4:Y]-#Set.P#)
Shape=Rectangle 0,0,(([ContentContainer:W]-#Set.P#)/2-5*[Set.S]),(250*[Set.S]),(#Set.R#/4) | StrokeWidth 0 | Fill Color #Set.Sec_Color#,200
Container=ContentContainer
DynamicVariables=1

[Section5.Icon]
Meter=Image
ImageName=#@#Images\CoreAssets\HardwareAcceleration.png
X=((([ContentContainer:W]-#Set.P#)/2-5*[Set.S])/2-100/2*[Set.S])r
Y=(40*[Set.S])r
W=(100*[Set.S])
H=(100*[Set.S])
Container=ContentContainer
ImageTint=#Set.Text_Color#
DynamicVariables=1

[Section5.Text]
Meter=String
X=(100/2*[Set.S])r
Y=((30+100)*[Set.S])r
Text=Hardware acceleration#CRLf#Allocates processes of JaxCore to your graphics processor
FontSize=(10*[Set.S])
Container=ContentContainer 
StringAlign=CenterCenter
InlinePattern=#CRLF#.*
InlineSetting=Color | #Set.SubText_Color#
InlinePattern2=#CRLF#.*
InlineSetting2=Size | (9*[Set.S])
MeterStyle=Set.String:S
[HardwareAcceleration]
Meter=Shape
MeterStyle=Set.Bool:S
Y=R
X=(-50/2*[Set.S])r
LeftMouseUpAction=[!CommandMeasure PSRM "ToggleHA"]

[Div:1]
Meter=Shape
X=(30*[Set.S])
Y=(60*[Set.S])r
MeterStyle=Set.Div:S
[Option01]
Meter=String
Text=Core update check frequency in minutes
MeterStyle=Set.String:S | Set.OptionName:S

; ---------------------------------------------------------------------------- ;
;                                     Input                                    ;
; ---------------------------------------------------------------------------- ;

[Set.BackgroundCheckTime]
Meter=Shape
MeterStyle=Set.Textbox:S
Y=([Option01:Y]-[ContentContainer:Y]-(30/2-12/2)*[Set.S])
[Value01]
Meter=String
Text=#Set.BackgroundCheckTime#
MeterStyle=Set.String:S | Set.Value:S

; ---------------------------------------------------------------------------- ;
;                                Core overrides                                ;
; ---------------------------------------------------------------------------- ;

[Auto_Refresh:M]
Measure=

[Help:Category]
Y=(#Set.H#-100*[Set.S])

[DivCat:1293s18]
Meter=
[BottomButton]
Meter=
[BottomText]
Meter=
