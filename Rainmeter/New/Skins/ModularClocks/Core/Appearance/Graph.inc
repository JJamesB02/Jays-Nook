[Option015]
Meter=String
Text=Clock font
MeterStyle=Set.String:S | Set.OptionName:S
[Divider19wd]
Meter=Shape
MeterStyle=Set.Div:S


[Option06]
Meter=String
Text=Show dot
MeterStyle=Set.String:S | Set.OptionName:S
[Divider19wdaw328]
Meter=Shape
MeterStyle=Set.Div:S
[Option07]
Meter=String
Text=Line width
MeterStyle=Set.String:S | Set.OptionName:S
[w328]
Meter=Shape
MeterStyle=Set.Div:S
[Option08]
Meter=String
Text=Color Render: Font color
MeterStyle=Set.String:S | Set.OptionName:S
[w321238]
Meter=Shape
MeterStyle=Set.Div:S
[Option09]
Meter=String
Text=Color Render: Line color
MeterStyle=Set.String:S | Set.OptionName:S

; ---------------------------------------------------------------------------- ;
;                                   Function                                   ;
; ---------------------------------------------------------------------------- ;

[FontFace]
Meter=Shape
MeterStyle=Set.TextBox:S
Y=([Option015:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value015]
Meter=String
Text=#FontFace#
MeterStyle=Set.String:S | Set.Value:S

[Circle]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option06:Y]-#Set.P#+(-20/2+8)*[Set.S])
[LineWidth]
Meter=Shape
MeterStyle=Set.TextBox:S
Type=Int|0|20
Y=([Option07:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value07]
Meter=String
Text=#LineWidth#
MeterStyle=Set.String:S | Set.Value:S

[Font]
Meter=Shape
MeterStyle=Set.ColorPacity:S
Y=([Option08:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value08]
Meter=String
Text=#FontOpacity#
MeterStyle=Set.String:S | Set.Pacity:S

[Line]
Meter=Shape
MeterStyle=Set.ColorPacity:S
Y=([Option09:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value09]
Meter=String
Text=#LineOpacity#
MeterStyle=Set.String:S | Set.Pacity:S

; ---------------------------------------------------------------------------- ;
;                                    Anchor                                    ;
; ---------------------------------------------------------------------------- ;


[AnchorSuppli]
Meter=String
Container=ContentContainer
x=r
Y=R