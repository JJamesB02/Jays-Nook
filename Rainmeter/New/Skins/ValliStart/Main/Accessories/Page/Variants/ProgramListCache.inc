
[1]
Meter=Shape
MeterStyle=Index:Style
[Index1Icon]
Meter=Image
MeterStyle=Icon:Style | Icon1:Style
[Index1Name]
Meter=String
MeterStyle=RegularText | Name:Style

[2]
Meter=Shape
MeterStyle=Index:Style
[Index2Icon]
Meter=Image
MeterStyle=Icon:Style | Icon1:Style
[Index2Name]
Meter=String
MeterStyle=RegularText | Name:Style

[3]
Meter=Shape
MeterStyle=Index:Style
[Index3Icon]
Meter=Image
MeterStyle=Icon:Style | Icon1:Style
[Index3Name]
Meter=String
MeterStyle=RegularText | Name:Style

[4]
Meter=Shape
MeterStyle=Index:Style
[Index4Icon]
Meter=Image
MeterStyle=Icon:Style | Icon1:Style
[Index4Name]
Meter=String
MeterStyle=RegularText | Name:Style

[5]
Meter=Shape
MeterStyle=Index:Style
[Index5Icon]
Meter=Image
MeterStyle=Icon:Style | Icon1:Style
[Index5Name]
Meter=String
MeterStyle=RegularText | Name:Style

[6]
Meter=Shape
MeterStyle=Index:Style
[Index6Icon]
Meter=Image
MeterStyle=Icon:Style | Icon1:Style
[Index6Name]
Meter=String
MeterStyle=RegularText | Name:Style

[7]
Meter=Shape
MeterStyle=Index:Style
[Index7Icon]
Meter=Image
MeterStyle=Icon:Style | Icon1:Style
[Index7Name]
Meter=String
MeterStyle=RegularText | Name:Style

[8]
Meter=Shape
MeterStyle=Index:Style
[Index8Icon]
Meter=Image
MeterStyle=Icon:Style | Icon1:Style
[Index8Name]
Meter=String
MeterStyle=RegularText | Name:Style

[9]
Meter=Shape
MeterStyle=Index:Style
[Index9Icon]
Meter=Image
MeterStyle=Icon:Style | Icon1:Style
[Index9Name]
Meter=String
MeterStyle=RegularText | Name:Style

[10]
Meter=Shape
MeterStyle=Index:Style
[Index10Icon]
Meter=Image
MeterStyle=Icon:Style | Icon1:Style
[Index10Name]
Meter=String
MeterStyle=RegularText | Name:Style

[11]
Meter=Shape
MeterStyle=Index:Style
[Index11Icon]
Meter=Image
MeterStyle=Icon:Style | Icon1:Style
[Index11Name]
Meter=String
MeterStyle=RegularText | Name:Style

[12]
Meter=Shape
MeterStyle=Index:Style
[Index12Icon]
Meter=Image
MeterStyle=Icon:Style | Icon1:Style
[Index12Name]
Meter=String
MeterStyle=RegularText | Name:Style

[13]
Meter=Shape
MeterStyle=Index:Style
[Index13Icon]
Meter=Image
MeterStyle=Icon:Style | Icon1:Style
[Index13Name]
Meter=String
MeterStyle=RegularText | Name:Style

[14]
Meter=Shape
MeterStyle=Index:Style
[Index14Icon]
Meter=Image
MeterStyle=Icon:Style | Icon1:Style
[Index14Name]
Meter=String
MeterStyle=RegularText | Name:Style

[15]
Meter=Shape
MeterStyle=Index:Style
[Index15Icon]
Meter=Image
MeterStyle=Icon:Style | Icon1:Style
[Index15Name]
Meter=String
MeterStyle=RegularText | Name:Style

[16]
Meter=Shape
MeterStyle=Index:Style
[Index16Icon]
Meter=Image
MeterStyle=Icon:Style | Icon1:Style
[Index16Name]
Meter=String
MeterStyle=RegularText | Name:Style
[mPath]
Measure=Plugin
Plugin=FileView
Path="C:\ProgramData\Microsoft\Windows\Start Menu\Programs"
Count=16
ShowFolder=0
ShowDotDot=0
HideExtensions=1
FinishAction=[!ShowMeterGroup List][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]
[mFileCount]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileCount
Group=Children

[mIndex1Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=1
Group=Children
RegexpSubstitute=1
Substitute="\.\.":"Up 1 directory"

[mIndex2Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=2
Group=Children
RegexpSubstitute=1
Substitute="\.\.":"Up 1 directory"

[mIndex3Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=3
Group=Children
RegexpSubstitute=1
Substitute="\.\.":"Up 1 directory"

[mIndex4Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=4
Group=Children
RegexpSubstitute=1
Substitute="\.\.":"Up 1 directory"

[mIndex5Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=5
Group=Children
RegexpSubstitute=1
Substitute="\.\.":"Up 1 directory"

[mIndex6Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=6
Group=Children
RegexpSubstitute=1
Substitute="\.\.":"Up 1 directory"

[mIndex7Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=7
Group=Children
RegexpSubstitute=1
Substitute="\.\.":"Up 1 directory"

[mIndex8Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=8
Group=Children
RegexpSubstitute=1
Substitute="\.\.":"Up 1 directory"

[mIndex9Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=9
Group=Children
RegexpSubstitute=1
Substitute="\.\.":"Up 1 directory"

[mIndex10Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=10
Group=Children
RegexpSubstitute=1
Substitute="\.\.":"Up 1 directory"

[mIndex11Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=11
Group=Children
RegexpSubstitute=1
Substitute="\.\.":"Up 1 directory"

[mIndex12Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=12
Group=Children
RegexpSubstitute=1
Substitute="\.\.":"Up 1 directory"

[mIndex13Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=13
Group=Children
RegexpSubstitute=1
Substitute="\.\.":"Up 1 directory"

[mIndex14Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=14
Group=Children
RegexpSubstitute=1
Substitute="\.\.":"Up 1 directory"

[mIndex15Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=15
Group=Children
RegexpSubstitute=1
Substitute="\.\.":"Up 1 directory"

[mIndex16Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=16
Group=Children
RegexpSubstitute=1
Substitute="\.\.":"Up 1 directory"

[mIndex1Icon]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=#IconSize#
Index=1
Group=Children

[mIndex2Icon]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=#IconSize#
Index=2
Group=Children

[mIndex3Icon]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=#IconSize#
Index=3
Group=Children

[mIndex4Icon]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=#IconSize#
Index=4
Group=Children

[mIndex5Icon]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=#IconSize#
Index=5
Group=Children

[mIndex6Icon]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=#IconSize#
Index=6
Group=Children

[mIndex7Icon]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=#IconSize#
Index=7
Group=Children

[mIndex8Icon]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=#IconSize#
Index=8
Group=Children

[mIndex9Icon]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=#IconSize#
Index=9
Group=Children

[mIndex10Icon]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=#IconSize#
Index=10
Group=Children

[mIndex11Icon]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=#IconSize#
Index=11
Group=Children

[mIndex12Icon]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=#IconSize#
Index=12
Group=Children

[mIndex13Icon]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=#IconSize#
Index=13
Group=Children

[mIndex14Icon]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=#IconSize#
Index=14
Group=Children

[mIndex15Icon]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=#IconSize#
Index=15
Group=Children

[mIndex16Icon]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=#IconSize#
Index=16
Group=Children

