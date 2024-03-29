; ---------------------------------------------------------------------------- ;
;                                     Style                                    ;
; ---------------------------------------------------------------------------- ;

[Variables]
@includeListOfInstalledDLCs=#SKINSPATh##Skin.Name#\@Resources\InstalledDLCs.inc
TweenNode1=0

[DLCps1]
Measure=Plugin
Plugin=PowershellRm
scriptfile=#SKINSPATh##Skin.name#\Core\DLC.ps1

[DefaultStartActions]
ActionList2=Repeat Anim,2,80
Custom1=[!CommandMeasure DefaultStartActions "Execute 2"][!Delay 100][!CommandMeasure DLCps1 "check-update"]
Restart=[!CommandMeasure DefaultStartActions "Execute 2"]
Anim=[!SetVariable TweenNode1 "(#TweenNode1#+0.0125)"][!UpdateMeterGroup Anim][!UpdateMeasure #CURRENTSECTION#][!Redraw]
DynamicVariables=1

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[Loading.Image]
Meter=Image
X=([ContentContainer:W]/2-128/2*[SEt.S])
Y=([ContentContainer:H]/2-128/2*[SEt.S])
W=(128*[Set.S])
H=(128*[Set.S])
DynamicVariables=1
Container=ContentContainer
Group=Anim
TransformationMatrix=(Cos(Rad(#TweenNode1#*360)));(-Sin(Rad(#TweenNode1#*360)));(Sin(Rad(#TweenNode1#*360)));(Cos(Rad(#TweenNode1#*360)));(([#CURRENTSECTION#:W]*0.5+[#CURRENTSECTION#:X])-([#CURRENTSECTION#:W]*0.5+[#CURRENTSECTION#:X])*Cos(Rad(#TweenNode1#*360))-([#CURRENTSECTION#:H]*0.5+[#CURRENTSECTION#:Y])*Sin(Rad(#TweenNode1#*360)));(([#CURRENTSECTION#:H]*0.5+[#CURRENTSECTION#:Y])+([#CURRENTSECTION#:W]*0.5+[#CURRENTSECTION#:X])*Sin(Rad(#TweenNode1#*360))-([#CURRENTSECTION#:H]*0.5+[#CURRENTSECTION#:Y])*Cos(Rad(#TweenNode1#*360)))
ImageName=#@#Images\CoreAssets\LogoIcon.png
