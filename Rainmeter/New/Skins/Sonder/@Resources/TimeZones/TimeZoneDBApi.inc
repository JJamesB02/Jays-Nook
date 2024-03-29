[Variables]
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:80.0) Gecko/20100101 Firefox/80.0
;UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/92.0.4515.159 Safari/537.36 Edg/92.0.902.84
RegSub="^$":"0"
;***************** IMPORTANT NOTE ************************
;This is my key, feel free to use it with Sonder, but if you copy/release your own Rainmeter skin, get your own key...
;Bonus points if you get your own key(for free) if you use Sonder so we don't get my key revoked...:)
TimeZoneDBKey=YHQDWADF27MO

;Free API version can only update 1/second - please don't abuse this!!!!!
[TimeZoneUpdater]
Measure=Calc
UpdateDivider=-1
Formula=1
ifCondition=(#WorldMapShow1# = 0)
ifTrueAction=[!Log "Updating Time Zones..."][!EnableMeasure @WorldMapLocation1Parent][!CommandMeasure @WorldMapLocation1Parent "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation2Parent][!CommandMeasure @WorldMapLocation2Parent "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation3Parent][!CommandMeasure @WorldMapLocation3Parent "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation4Parent][!CommandMeasure @WorldMapLocation4Parent "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation5Parent][!CommandMeasure @WorldMapLocation5Parent "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation6Parent][!CommandMeasure @WorldMapLocation6Parent "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation7Parent][!CommandMeasure @WorldMapLocation7Parent "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation8Parent][!CommandMeasure @WorldMapLocation8Parent "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation9Parent][!CommandMeasure @WorldMapLocation9Parent "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation10Parent][!CommandMeasure @WorldMapLocation10Parent "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation11Parent][!CommandMeasure @WorldMapLocation11Parent "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation12Parent][!CommandMeasure @WorldMapLocation12Parent "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation13Parent][!CommandMeasure @WorldMapLocation13Parent "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation14Parent][!CommandMeasure @WorldMapLocation14Parent "Update"][!Delay 1100][!EnableMeasure @WorldMapLocation15Parent][!CommandMeasure @WorldMapLocation15Parent "Update"][!Delay 1100][!DisableMeasureGroup timezonedb]
Disabled=1

[CurrentDate]
Measure=Time
Format=%b %#d %Y
FormatLocale=#LanguageOverride#

;===================================== TIME ZONE DATA =======================================
[@WorldMapLocation1Parent]
Measure=WebParser
;URL=http://worldtimeapi.org/api/timezone/#WorldMapLocation1#
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat1#&lng=#WorldMapLon1#
;Flags=ForceReload | NoCacheWrite | PragmaNoCache
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb
;ONLY UPDATE IF NEEDED....
FinishAction=[!Log "Updated TimeZone1"][!SetVariable WorldMapTimeZone1 [@WorldMapLocation1Parent]][!WriteKeyValue Variables WorldMapTimeZone1 [@WorldMapLocation1Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone1Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "WorldMap.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation2Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat2#&lng=#WorldMapLon2#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb
FinishAction=[!Log "Updated TimeZone2"][!SetVariable WorldMapTimeZone2 [@WorldMapLocation2Parent]][!WriteKeyValue Variables WorldMapTimeZone2 [@WorldMapLocation2Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone2Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "WorldMap.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation3Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat3#&lng=#WorldMapLon3#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb
FinishAction=[!Log "Updated TimeZone3"][!SetVariable WorldMapTimeZone3 [@WorldMapLocation3Parent]][!WriteKeyValue Variables WorldMapTimeZone3 [@WorldMapLocation3Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone3Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "WorldMap.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation4Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat4#&lng=#WorldMapLon4#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb
FinishAction=[!Log "Updated TimeZone4"][!SetVariable WorldMapTimeZone4 [@WorldMapLocation4Parent]][!WriteKeyValue Variables WorldMapTimeZone4 [@WorldMapLocation4Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone4Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "WorldMap.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation5Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat5#&lng=#WorldMapLon5#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb
FinishAction=[!Log "Updated TimeZone5"][!SetVariable WorldMapTimeZone5 [@WorldMapLocation5Parent]][!WriteKeyValue Variables WorldMapTimeZone5 [@WorldMapLocation5Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone5Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "WorldMap.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation6Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat6#&lng=#WorldMapLon6#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb
FinishAction=[!Log "Updated TimeZone6"][!SetVariable WorldMapTimeZone6 [@WorldMapLocation6Parent]][!WriteKeyValue Variables WorldMapTimeZone6 [@WorldMapLocation6Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone6Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "WorldMap.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation7Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat7#&lng=#WorldMapLon7#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb
FinishAction=[!Log "Updated TimeZone7"][!SetVariable WorldMapTimeZone7 [@WorldMapLocation7Parent]][!WriteKeyValue Variables WorldMapTimeZone7 [@WorldMapLocation7Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone7Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "WorldMap.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation8Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat8#&lng=#WorldMapLon8#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb
FinishAction=[!Log "Updated TimeZone8"][!SetVariable WorldMapTimeZone8 [@WorldMapLocation8Parent]][!WriteKeyValue Variables WorldMapTimeZone8 [@WorldMapLocation8Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone8Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "WorldMap.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation9Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat9#&lng=#WorldMapLon9#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb
FinishAction=[!Log "Updated TimeZone9"][!SetVariable WorldMapTimeZone9 [@WorldMapLocation9Parent]][!WriteKeyValue Variables WorldMapTimeZone9 [@WorldMapLocation9Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone9Convert][!UpdateMeterGroup CityList][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "WorldMap.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation10Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat10#&lng=#WorldMapLon10#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb
FinishAction=[!Log "Updated TimeZone10"][!SetVariable WorldMapTimeZone10 [@WorldMapLocation10Parent]][!WriteKeyValue Variables WorldMapTimeZone10 [@WorldMapLocation10Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone10Convert][!UpdateMeterGroup CityList][!HideMeterGroup HideforLoc][!ShowMeter WorldClockContainer2][!SetOption Delete6 Y "([Delete1:Y]-75)"][!SetOption City6 Y "([City1:Y]-75)"][!SetOption MoreLocationsButton ImageName "#@#Images\blank.png"][!ShowMeterGroup MoreLocations][!SetOption MainSettingsGoTo Y 275][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "WorldMap.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation11Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat11#&lng=#WorldMapLon11#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb
FinishAction=[!Log "Updated TimeZone11"][!SetVariable WorldMapTimeZone11 [@WorldMapLocation11Parent]][!WriteKeyValue Variables WorldMapTimeZone11 [@WorldMapLocation11Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone11Convert][!UpdateMeterGroup CityList][!HideMeterGroup HideforLoc][!ShowMeter WorldClockContainer2][!SetOption Delete6 Y "([Delete1:Y]-75)"][!SetOption City6 Y "([City1:Y]-75)"][!SetOption MoreLocationsButton ImageName "#@#Images\blank.png"][!ShowMeterGroup MoreLocations][!SetOption MainSettingsGoTo Y 275][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "WorldMap.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation12Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat12#&lng=#WorldMapLon12#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb
FinishAction=[!Log "Updated TimeZone12"][!SetVariable WorldMapTimeZone12 [@WorldMapLocation12Parent]][!WriteKeyValue Variables WorldMapTimeZone12 [@WorldMapLocation12Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone12Convert][!UpdateMeterGroup CityList][!HideMeterGroup HideforLoc][!ShowMeter WorldClockContainer2][!SetOption Delete6 Y "([Delete1:Y]-75)"][!SetOption City6 Y "([City1:Y]-75)"][!SetOption MoreLocationsButton ImageName "#@#Images\blank.png"][!ShowMeterGroup MoreLocations][!SetOption MainSettingsGoTo Y 275][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "WorldMap.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation13Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat13#&lng=#WorldMapLon13#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb
FinishAction=[!Log "Updated TimeZone13"][!SetVariable WorldMapTimeZone13 [@WorldMapLocation13Parent]][!WriteKeyValue Variables WorldMapTimeZone13 [@WorldMapLocation13Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone13Convert][!UpdateMeterGroup CityList][!HideMeterGroup HideforLoc][!ShowMeter WorldClockContainer2][!SetOption Delete6 Y "([Delete1:Y]-75)"][!SetOption City6 Y "([City1:Y]-75)"][!SetOption MoreLocationsButton ImageName "#@#Images\blank.png"][!ShowMeterGroup MoreLocations][!SetOption MainSettingsGoTo Y 275][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "WorldMap.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation14Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat14#&lng=#WorldMapLon14#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb
FinishAction=[!Log "Updated TimeZone14"][!SetVariable WorldMapTimeZone14 [@WorldMapLocation14Parent]][!WriteKeyValue Variables WorldMapTimeZone14 [@WorldMapLocation14Parent] "#@#Variables.inc"][!UpdateMeasure MeasureWorldMapTimeZone14Convert][!UpdateMeterGroup CityList][!HideMeterGroup HideforLoc][!ShowMeter WorldClockContainer2][!SetOption Delete6 Y "([Delete1:Y]-75)"][!SetOption City6 Y "([City1:Y]-75)"][!SetOption MoreLocationsButton ImageName "#@#Images\blank.png"][!ShowMeterGroup MoreLocations][!SetOption MainSettingsGoTo Y 275][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "WorldMap.ini"]
Disabled=1
DynamicVariables=1

[@WorldMapLocation15Parent]
Measure=WebParser
URL=http://api.timezonedb.com/v2.1/get-time-zone?key=#TimeZoneDBKey#&format=json&by=position&lat=#WorldMapLat15#&lng=#WorldMapLon15#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?siU).*gmtOffset": (.*),
StringIndex=1
RegExpSubstitute=1
Substitute=#RegSub#
ErrorString=0
Group=timezonedb
FinishAction=[!Log "Updated TimeZone15"][!SetVariable WorldMapTimeZone15 [@WorldMapLocation15Parent]][!WriteKeyValue Variables WorldMapTimeZone15 [@WorldMapLocation15Parent] "#@#Variables.inc"][!WriteKeyValue Variables WorldMapTimeZoneUpdated [CurrentDate] "#@#Variables.inc"][!SetVariable WorldMapTimeZoneUpdated [CurrentDate]][!UpdateMeasure MeasureWorldMapTimeZone15Convert][!UpdateMeterGroup CityList][!HideMeterGroup HideforLoc][!ShowMeter WorldClockContainer2][!SetOption Delete6 Y "([Delete1:Y]-75)"][!SetOption City6 Y "([City1:Y]-75)"][!SetOption MoreLocationsButton ImageName "#@#Images\blank.png"][!ShowMeterGroup MoreLocations][!SetOption MainSettingsGoTo Y 275][!Redraw][!Update][!Refresh "#ROOTCONFIG#\Space" "WorldMap.ini"]
Disabled=1
DynamicVariables=1
