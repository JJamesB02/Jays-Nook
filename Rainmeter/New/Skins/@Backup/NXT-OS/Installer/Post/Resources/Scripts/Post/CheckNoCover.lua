function Main()
	Display("Checking Center Clock no art style")
	local NoCover = SKIN:GetVariable("CenterClock.NoArtStyle")
	if NoCover == "5" then
		SKIN:Bang("!WriteKeyValue", "Variables", "CenterClock.NoArtStyle", "0", "#@#Settings.inc")
	elseif NoCover == "6" then
		SKIN:Bang("!WriteKeyValue", "Variables", "CenterClock.NoArtStyle", "1", "#@#Settings.inc")
	end
end