[General:Category]
Meter=String
MeterStyle=Set.String:S | Pagecat:S
Text=GENERAL
Y=(#Set.P#+64*[Set.S])
[Info]
Meter=Shape
Y=(10*[Set.S])R
MeterStyle=PageBox:S
Fill=Fill Color #Set.Accent_Color#,(#BarHandler# = 1 ? 255: 0)
Handle=1

[InfoIcon]
Meter=Image
MeterStyle=PageIcon:S
Greyscale=(#BarHandler# = 1 ? 1 : 0)

[1]
Meter=String
Text=Info
DynamicVariables-1
MeterStyle=Set.String:S | PageText:S

[General]
Meter=Shape
Y=(10*[Set.S])R
MeterStyle=PageBox:S
Fill=Fill Color #Set.Accent_Color#,(#BarHandler# = 2 ? 255: 0)
Handle=2

[GeneralIcon]
Meter=Image
MeterStyle=PageIcon:S
Greyscale=(#BarHandler# = 2 ? 1 : 0)

[2]
Meter=String
Text=General
DynamicVariables-1
MeterStyle=Set.String:S | PageText:S

[Position]
Meter=Shape
Y=(10*[Set.S])R
MeterStyle=PageBox:S
Fill=Fill Color #Set.Accent_Color#,(#BarHandler# = 8 ? 255: 0)
Handle=4
[PositionIcon]
Meter=Image
MeterStyle=PageIcon:S
Greyscale=(#BarHandler# = 8 ? 1 : 0)
[8]
Meter=String
Text=Position
DynamicVariables-1
MeterStyle=Set.String:S | PageText:S

[Appearance]
Meter=Shape
Y=(10*[Set.S])R
MeterStyle=PageBox:S
Fill=Fill Color #Set.Accent_Color#,(#BarHandler# = 3 ? 255: 0)
Handle=3

[AppearanceIcon]
Meter=Image
MeterStyle=PageIcon:S
Greyscale=(#BarHandler# = 3 ? 1 : 0)

[3]
Meter=String
Text=Appearance
DynamicVariables-1
MeterStyle=Set.String:S | PageText:S
[ColorScheme]
Meter=Shape
Y=(10*[Set.S])R
MeterStyle=PageBox:S
Fill=Fill Color #Set.Accent_Color#,(#BarHandler# = 4 ? 255: 0)
Handle=4

[ColorSchemeIcon]
Meter=Image
MeterStyle=PageIcon:S
Greyscale=(#BarHandler# = 4 ? 1 : 0)

[4]
Meter=String
Text=Color scheme
DynamicVariables-1
MeterStyle=Set.String:S | PageText:S