function Main()
	Display("Removing old NXT-OS layout")
	local layoutpath = SKIN:GetVariable('SETTINGSPATH')..'Layouts\\NXTOS\\'
	os.execute('rd "'..layoutpath..'" /S /Q')
	Display("Cleaning downloads folder")
	local downloadspath = SKIN:GetVariable('SKINSPATH')..'NXT-OS Data\\Downloads\\'
	os.execute('del /S /Q "'..downloadspath..'*"')
end
