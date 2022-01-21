[Player]
Measure=NowPlaying
PlayerName=#System.Player#
PlayerType=STATE

[TRACK]
Measure=NowPlaying
PlayerName=[Player]
PlayerType=TITLE

[ARTIST]
Measure=NowPlaying
PlayerName=[Player]
PlayerType=ARTIST

[PROGRESS]
Measure=NowPlaying
PlayerName=[Player]
PlayerType=PROGRESS

[ALBUM]
Measure=NowPlaying
PlayerName=[Player]
PlayerType=ALBUM

[COVER]
Measure=NowPlaying
PlayerName=[Player]
PlayerType=COVER
Substitute="":"Resources/Images/Blank.Png"
DynamicVariables=1