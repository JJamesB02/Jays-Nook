[Rainmeter]

[StyleSidebarBackground]
Meter=IMAGE
;Shape=Ellipse 25,25,25 | Fill Color 0,0,0,1 | StrokeWidth 0
SolidColor=0,0,0,1
ImageName=#@#Images\SkinBackground.White.png
;ScaleMargins=12,12,12,12
ImageAlpha=#GlobalSkinBackgroundAlphaInactive#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha #GlobalSkinBackgroundAlpha#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha #GlobalSkinBackgroundAlphaInactive#][!UpdateMeter #CURRENTSECTION#][!Redraw]
W=(#Scale#*50)
H=(#Scale#*50)
imagetint=#GlobalSkinBackgroundColorTint#
