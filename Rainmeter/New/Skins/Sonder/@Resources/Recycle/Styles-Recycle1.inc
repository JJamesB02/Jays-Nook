[Rainmeter]

[StyleSidebarBackground]
Meter=Shape
Shape=Rectangle 0,0,(#Scale#*60),(#Scale#*60),6 | Fill Color #GlobalSkinBackgroundColorTint#,#GlobalSkinBackgroundAlphaInactive# | StrokeWidth 0
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Rectangle 0,0,(#Scale#*60),(#Scale#*60),6 | Fill Color #GlobalSkinBackgroundColorTint#,#GlobalSkinBackgroundAlpha# | StrokeWidth 0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Rectangle 0,0,(#Scale#*60),(#Scale#*60),6 | Fill Color #GlobalSkinBackgroundColorTint#,#GlobalSkinBackgroundAlphaInactive# | StrokeWidth 0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
