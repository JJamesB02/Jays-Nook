function Initialize()
	--print("Calendar Script running")
	local CurrentDayNumber = SKIN:GetVariable('CurrentDayMeter')
	--print('CurrentDay:'..CurrentDayNumber..'')
	local LeapYear = SKIN:GetVariable('LeapYearAdj')
	local CurrentStreakTemp = 0
	local DayComplete = 1
	for i = CurrentDayNumber, 0, -1 do
		DayComplete = SKIN:GetVariable('Day'..i)
		if DayComplete == '0' then
			CurrentStreakTemp = CurrentStreakTemp + 1
			if CurrentDayNumber == ''..i  then
				SKIN:Bang('!WriteKeyValue', 'Variables', 'TodayComplete', 1, '#@#Variables.inc')
				SKIN:Bang('!SetVariable', 'TodayComplete', 1)
			end
		elseif CurrentDayNumber == ''..i  then
			CurrentStreakTemp = CurrentStreakTemp
			SKIN:Bang('!WriteKeyValue', 'Variables', 'TodayComplete', 0, '#@#Variables.inc')
			SKIN:Bang('!SetVariable', 'TodayComplete', 0)
		else
			-- Ignore Feb 29 (Day60) when not a leap year
			if ''..i..'' == '60' and LeapYear == '1' then
				CurrentStreakTemp = CurrentStreakTemp
			else
				SKIN:Bang('!WriteKeyValue', 'Variables', 'CurrentStreak', CurrentStreakTemp, '#@#Variables.inc')
				SKIN:Bang('!SetVariable', 'CurrentStreak', CurrentStreakTemp)
				--print('CurrentStreakTemp:'..CurrentStreakTemp..'')
				return CurrentStreakTemp
			end
		end
	end
end
	
function Update()
	return CurrentStreakTemp
end

function HabitDayComplete()
	local CurrentDayNumber = SKIN:GetVariable('CurrentDayMeter')
	local Habit2Disabled = SKIN:GetVariable('Habit2Disabled')
	local Habit3Disabled = SKIN:GetVariable('Habit3Disabled')
	local Habit4Disabled = SKIN:GetVariable('Habit4Disabled')
	local Habit5Disabled = SKIN:GetVariable('Habit5Disabled')
	local Habit6Disabled = SKIN:GetVariable('Habit6Disabled')
	local Habit7Disabled = SKIN:GetVariable('Habit7Disabled')
	local Habit8Disabled = SKIN:GetVariable('Habit8Disabled')
	local Habit9Disabled = SKIN:GetVariable('Habit9Disabled')
	local Habit10Disabled = SKIN:GetVariable('Habit10Disabled')
	local Habit1Complete = SKIN:GetVariable('Habit1Day'..CurrentDayNumber)
	local Habit2Complete = SKIN:GetVariable('Habit2Day'..CurrentDayNumber)
	local Habit3Complete = SKIN:GetVariable('Habit3Day'..CurrentDayNumber)
	local Habit4Complete = SKIN:GetVariable('Habit4Day'..CurrentDayNumber)
	local Habit5Complete = SKIN:GetVariable('Habit5Day'..CurrentDayNumber)
	--local Habit6Complete = SKIN:GetVariable('Habit6Day'..CurrentDayNumber)
	--local Habit7Complete = SKIN:GetVariable('Habit7Day'..CurrentDayNumber)
	--local Habit8Complete = SKIN:GetVariable('Habit8Day'..CurrentDayNumber)
	--local Habit9Complete = SKIN:GetVariable('Habit9Day'..CurrentDayNumber)
	--local Habit10Complete = SKIN:GetVariable('Habit10Day'..CurrentDayNumber)
	local DayComplete = SKIN:GetVariable('Day'..CurrentDayNumber)

	--if Habit10Disabled == '0' then
	--	if (Habit1Complete + Habit2Complete + Habit3Complete + Habit4Complete + Habit5Complete + Habit6Complete + Habit7Complete + Habit8Complete + Habit9Complete + Habit10Complete == 0) then
	--		SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 0, '#@#Calendar-Day-Variables.inc')
	--		SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 0)
	--	else
	--		SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 1, '#@#Calendar-Day-Variables.inc')
	--		SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 1)
	--	end
	--elseif Habit9Disabled == '0' then
	--	if (Habit1Complete + Habit2Complete + Habit3Complete + Habit4Complete + Habit5Complete + Habit6Complete + Habit7Complete + Habit8Complete + Habit9Complete == 0) then
	--		SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 0, '#@#Calendar-Day-Variables.inc')
	--		SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 0)
	--	else
	--		SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 1, '#@#Calendar-Day-Variables.inc')
	--		SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 1)
	--	end
	--elseif Habit8Disabled == '0' then
	--	if (Habit1Complete + Habit2Complete + Habit3Complete + Habit4Complete + Habit5Complete + Habit6Complete + Habit7Complete + Habit8Complete == 0) then
	--		SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 0, '#@#Calendar-Day-Variables.inc')
	--		SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 0)
	--	else
	--		SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 1, '#@#Calendar-Day-Variables.inc')
	--		SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 1)
	--	end
	--elseif Habit7Disabled == '0' then
	--	if (Habit1Complete + Habit2Complete + Habit3Complete + Habit4Complete + Habit5Complete + Habit6Complete + Habit7Complete == 0) then
	--		SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 0, '#@#Calendar-Day-Variables.inc')
	--		SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 0)
	--	else
	--		SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 1, '#@#Calendar-Day-Variables.inc')
	--		SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 1)
	--	end
	--elseif Habit6Disabled == '0' then
	--	if (Habit1Complete + Habit2Complete + Habit3Complete + Habit4Complete + Habit5Complete + Habit6Complete == 0) then
	--		SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 0, '#@#Calendar-Day-Variables.inc')
	--		SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 0)
	--	else
	--		SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 1, '#@#Calendar-Day-Variables.inc')
	--		SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 1)
	--	end
	--	--CHANGE this next "if" to elseif if you add habits 6-10
	if Habit5Disabled == '0' then
		if (Habit1Complete + Habit2Complete + Habit3Complete + Habit4Complete + Habit5Complete == 0) then
			--print("complete")
			SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 0, '#@#Calendar-Day-Variables.inc')
			SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 0)
		else
			--print("not complete")
			SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 1, '#@#Calendar-Day-Variables.inc')
			SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 1)
		end
	elseif Habit4Disabled == '0'  then
		if (Habit1Complete + Habit2Complete + Habit3Complete + Habit4Complete == 0) then
			SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 0, '#@#Calendar-Day-Variables.inc')
			SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 0)
		else
			SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 1, '#@#Calendar-Day-Variables.inc')
			SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 1)
		end
	elseif Habit3Disabled == '0'  then
		if (Habit1Complete + Habit2Complete + Habit3Complete == 0) then
			SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 0, '#@#Calendar-Day-Variables.inc')
			SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 0)
		else
			SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 1, '#@#Calendar-Day-Variables.inc')
			SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 1)
		end
	elseif Habit2Disabled == '0'  then
		if (Habit1Complete + Habit2Complete == 0) then
			SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 0, '#@#Calendar-Day-Variables.inc')
			SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 0)
		else
			SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 1, '#@#Calendar-Day-Variables.inc')
			SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 1)
		end
	elseif (Habit1Complete == 0) then
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 0, '#@#Calendar-Day-Variables.inc')
		SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 0)
	else
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..CurrentDayNumber..'', 1, '#@#Calendar-Day-Variables.inc')
		SKIN:Bang('!SetVariable', 'Day'..CurrentDayNumber..'', 1)
	end
end

function ResetDaystoZero()
		
	for i = 1, 366 do
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..i, '1', '#@#Calendar-Day-Variables.inc')
	end
	
end