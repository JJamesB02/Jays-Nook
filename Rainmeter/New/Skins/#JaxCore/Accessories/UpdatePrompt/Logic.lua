function check()
    mVer = SKIN:GetMeasure('mVer')
    CoreVer = tonumber(SKIN:GetVariable('Core.Ver', '00000'))
    ParsedVer = tonumber(mVer:GetStringValue())
    ParsedVerFull = mVer:GetStringValue()
    if ParsedVer == CoreVer then
        print('Up2date - ' .. ParsedVer .. '==' .. CoreVer)
    elseif ParsedVer <= CoreVer then
        print('Beta - ' .. ParsedVer .. '<=' .. CoreVer)
    else
        print('Update required - ' .. ParsedVer .. '>=' .. CoreVer)
        -- SKIN:Bang('!WriteKeyValue', 'Variables', 'ParsedVer', ParsedVerFull, SKIN:GetVariable('ROOTCONFIGPATH')..'Accessories\\UpdatePrompt\\Toast\\Main.ini')
        SKIN:Bang('!CommandMeasure', 'Func', 'interactionBox(\'CoreUpdateAvailable\', \'' .. ParsedVerFull .. '\')')
    end
end

function checkNews()
    mNewsID = SKIN:GetMeasure('mNewsID')
    mPage2ID = SKIN:GetMeasure('mPage2ID')
    mPage3ID = SKIN:GetMeasure('mPage3ID')
    LatestNewsID = tonumber(mNewsID:GetStringValue())
    LatestPage2ID = tonumber(mPage2ID:GetStringValue())
    LatestPage3ID = tonumber(mPage3ID:GetStringValue())
    CurrentNewsID = tonumber(SKIN:GetVariable('Core.NewsID', '0'))
    CurrentPage2ID = tonumber(SKIN:GetVariable('Core.Page2ID', '0'))
    CurrentPage3ID = tonumber(SKIN:GetVariable('Core.Page3ID', '0'))
    if LatestNewsID ~= nil then
        print(LatestNewsID)
        if LatestNewsID == CurrentNewsID then
            print('News up to date')
        elseif CurrentNewsID < LatestNewsID then
            print('Fetching new news and showing popup')
            SKIN:Bang('!EnableMeasure', 'ParseNews')
            SKIN:Bang('!UpdateMeasure', 'ParseNews')
            SKIN:Bang('!CommandMeasure', 'ParseNews', '"Update"')
            SKIN:Bang('[!WriteKeyValue Variables Core.NewsID ' .. LatestNewsID .. ' "#@#NewsID.inc"]')
        else
            print('News updated in local')
        end
        if LatestPage2ID == CurrentPage2ID then
            print('Page 2 up to date')
        elseif CurrentPage2ID < LatestPage2ID then
            print('Fetching new page2')
            SKIN:Bang('!EnableMeasure', 'ParsePage2')
            SKIN:Bang('!UpdateMeasure', 'ParsePage2')
            SKIN:Bang('!CommandMeasure', 'ParsePage2', '"Update"')
            SKIN:Bang('[!WriteKeyValue Variables Core.Page2ID ' .. LatestPage2ID .. ' "#@#NewsID.inc"]')
        else
            print('Page 2 updated in local')
        end
        if LatestPage3ID == CurrentPage3ID then
            print('Page 3 up to date')
        elseif CurrentPage3ID < LatestPage3ID then
            print('Fetching new page3')
            SKIN:Bang('!EnableMeasure', 'ParsePage3')
            SKIN:Bang('!UpdateMeasure', 'ParsePage3')
            SKIN:Bang('!CommandMeasure', 'ParsePage3', '"Update"')
            SKIN:Bang('[!WriteKeyValue Variables Core.Page3ID ' .. LatestPage3ID .. ' "#@#NewsID.inc"]')
        else
            print('Page 3 updated in local')
        end
    end

    SKIN:Bang('[!Delay 1000][!WriteKeyValue variables Sec.page 1][!Refresh]')
end

-- function runUpdate()
--     ParsedVerFull = SKIN:GetVariable('ParsedVer')
--     SKIN:Bang('!WriteKeyValue', 'Variables', 'ParsedVer', '0', SKIN:GetVariable('ROOTCONFIGPATH')..'Accessories\\UpdatePrompt\\Toast\\Main.ini')
--     SKIN:Bang('!SetVariable', 'DownloadLink', 'https://github.com/Jax-Core/JaxCore/releases/download/v'..ParsedVerFull..'/JaxCore_v'..ParsedVerFull..'.rmskin\n')
--     SKIN:Bang('!SetVariable', 'DownloadName', 'JaxCore'..ParsedVerFull)
--     SKIN:Bang('!SetVariable', 'DownloadConfig', '#JaxCore')
--     SKIN:Bang('!CommandMeasure', 'CoreInstallHandler', 'Install')
-- end
