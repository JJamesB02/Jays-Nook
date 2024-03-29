[Variables]
; ------------------------------ User variables ------------------------------ ;
UserNameCheckVariable=James
LastRollBackSkin=JaxCore|#Version#
; --------------------------------- Language --------------------------------- ;
Set.Lang=English
; ----------------------------- Scaling variables ---------------------------- ;
Set.Home.P=(100*[Set.S])
Set.L=(200*([Set.S]+0.2))
Set.P=(#Set.P.Handle#*[Set.S])
Set.TB=(30*[SEt.S])
Set.P.Handle=40
Set.R=10
Set.WinR=2
Set.WinB=2
Set.W=998.4
Set.H=748.8
Set.Maximized=0
Set.Resizable=1
Set.Blur=Blur
Set.BlurCorner=RoundSmall
; --------------------------- Appearance variables --------------------------- ;
Set.Style=CoreUIv2
Set.IconStyle=Normal
Set.Alpha=255
Set.Pri_Color=18,18,18
Set.Sec_Color=28,28,28
Set.Ter_Color=35,35,35
Set.Accent_Color=242, 52, 0
Set.Accent_Color_2=255, 183, 0
Set.Text_Color=242,240,255
Set.SubText_Color=120,120,120
Set.Positive_Color=35,209,96
Set.Font=Poppins
Sec.SaveLocation=#SKINSPATH##Skin.Name#\@Resources\Vars.inc

[Set.S]
Measure=Calc
Formula=1

[Set.WindowSave]
Measure=Calc
X=2385
Y=0
W=998.4
H=748.8
S=1
