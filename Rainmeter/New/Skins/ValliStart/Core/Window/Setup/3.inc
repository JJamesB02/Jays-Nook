
[Description.String]
Text=By default, ValliStart uses the windows search menu for search functionalities, do you want to use a third-party launcher instead?
InlinePattern=windows search menu 

[Button.1.Shape]
Meter=Shape
X=(#W#/2-(600*[S]+10*[S])/2)
Y=(#Set.P#)R
LeftMouseUpAction=[!WriteKeyValue Variables Sec.arg2 "ReplaceSearch" "#CURRENTPATH#Main.ini"][!Refresh]
MeterStyle=Neu_Button.Shape:S
[Button.1.String]
Meter=String
Text=Yes
MeterStyle=Sec.String:S | Button.String:S

[Button.2.Shape]
Meter=Shape
LeftMouseUpAction=[!WriteKeyValue Variables Sec.arg2 "4" "#CURRENTPATH#Main.ini"][!Refresh]
MeterStyle=Neu_Button.Shape:S
[Button.2.String]
Meter=String
Text=No
MeterStyle=Sec.String:S | Button.String:S