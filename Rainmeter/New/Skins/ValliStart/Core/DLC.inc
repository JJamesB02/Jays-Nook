; ---------------------------------------------------------------------------- ;
;                                   Function                                   ;
; ---------------------------------------------------------------------------- ;

[Variables]
Bg.Img="Vekl"
Page.Page=1
Sec.AnchorName=AnchorSuppli


; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;


[Sec.String:S]
Container=DLC.Container

@includeSubpage=#SKINSPATH##SKin.Name#\Core\DLC\#Page.Page#.inc

[AnchorSuppli]
Meter=String
Container=ContentContainer
x=r
Y=R
