[Option015]
Meter=String
Text=Clock font
MeterStyle=Set.String:S | Set.OptionName:S
[Divider19wd]
Meter=Shape
MeterStyle=Set.Div:S

[Option02]
Meter=String
Text=Align
MeterStyle=Set.String:S | Set.OptionName:S
[Divider19203s8]
Meter=Shape
MeterStyle=Set.Div:S
[Option04]
Meter=String
Text=Date
MeterStyle=Set.String:S | Set.OptionName:S
[Divider19w20328]
Meter=Shape
MeterStyle=Set.Div:S
[Option05]
Meter=String
Text=Date-Time scaling ratio
MeterStyle=Set.String:S | Set.OptionName:S
[Divider19203s812]
Meter=Shape
MeterStyle=Set.Div:S
[Option06]
Meter=String
Text=Tint color
MeterStyle=Set.String:S | Set.OptionName:S
[Divider19132w20328]
Meter=Shape
MeterStyle=Set.Div:S
[Option07]
Meter=String
Text=Tint icon's color
MeterStyle=Set.String:S | Set.OptionName:S
[Divider1920328]
Meter=Shape
MeterStyle=Set.Div:S
[Option03]
Meter=String
Text=Weather
MeterStyle=Set.String:S | Set.OptionName:S

; ---------------------------------------------------------------------------- ;
;                                     Input                                    ;
; ---------------------------------------------------------------------------- ;
[FontFace]
Meter=Shape
MeterStyle=Set.TextBox:S
Y=([Option015:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value015]
Meter=String
Text=#FontFace#
MeterStyle=Set.String:S | Set.Value:S

[Align:]
Meter=Shape
0Act=[!WriteKeyValue Variables Align "Left" "#Sec.SaveLocation#"]
1Act=[!WriteKeyValue Variables Align "Center" "#Sec.SaveLocation#"]
2Act=[!WriteKeyValue Variables Align "Right" "#Sec.SaveLocation#"]
MeterStyle=Set.Pick3:S
Shape2=Rectangle (100*[Set.S]*([&Func:returnBool('Align', 'Center')]+[&Func:returnBool('Align', 'Right')]*2)),0,(300/3*[Set.S]),(30*[Set.S]),(7*[Set.S]) | Fill Color #Set.Text_Color# | StrokeWidth 0
Y=([Option02:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Align:0]
Meter=String
Text=Left
FontColor=[&Func:returnBool('Align', 'Left', '#Set.Pri_color#', '#Set.Text_Color#')]
MeterStyle=Set.String:S | Set.PickOption3_0:S
[Align:1]
Meter=String
Text=Center
FontColor=[&Func:returnBool('Align', 'Center', '#Set.Pri_color#', '#Set.Text_Color#')]
MeterStyle=Set.String:S | Set.PickOption3_1:S
[Align:2]
Meter=String
Text=Right
FontColor=[&Func:returnBool('Align', 'Right', '#Set.Pri_color#', '#Set.Text_Color#')]
MeterStyle=Set.String:S | Set.PickOption3_2:S

[Date]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option04:Y]-#Set.P#+(-20/2+8)*[Set.S])

[TintColor]
Meter=Shape
MeterStyle=Set.Color:S
Y=([Option06:Y]-#Set.P#+(-30/2+8)*[Set.S])

[TintIcon]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option07:Y]-#Set.P#+(-20/2+8)*[Set.S])

[DateTimeRatio]
Meter=Shape
MeterStyle=Set.TextBox:S
Type=Num|0.1|2
Y=([Option05:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value05]
Meter=String
Text=#DateTimeRatio#
MeterStyle=Set.String:S | Set.Value:S

[Weather]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option03:Y]-#Set.P#+(-20/2+8)*[Set.S])

; ---------------------------------------------------------------------------- ;
;                                    Anchor                                    ;
; ---------------------------------------------------------------------------- ;


[AnchorSuppli]
Meter=String
Container=ContentContainer
x=r
Y=R