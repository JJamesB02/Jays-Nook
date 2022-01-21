[MeasurePlayerState]
Measure=NowPlaying
PlayerName=#System.Player#
PlayerType=STATE
IfEqualValue=1
IfEqualAction=[!CommandMeasure "MusicScript" "display(1)"]
DynamicVariables=1
Group=Music
Disabled=#Notification.Music#

[POSITION]
Measure=NowPlaying
PlayerName=[MeasurePlayerState]
PlayerType=POSITION
IfBelowValue=2
IfBelowAction=[!CommandMeasure "MusicScript" "display(2)"]
DynamicVariables=1
Group=Music
Disabled=#Notification.Music#

[TRACK]
Measure=NowPlaying
PlayerName=[MeasurePlayerState]
PlayerType=TITLE
Group=Music

[ARTIST]
Measure=NowPlaying
PlayerName=[MeasurePlayerState]
PlayerType=ARTIST
Group=Music

[ALBUM]
Measure=NowPlaying
PlayerName=[MeasurePlayerState]
PlayerType=ALBUM
Group=Music