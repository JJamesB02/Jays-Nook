--debug = true

function Initilize()
	L1 = SKIN:GetVariable("WorldMapShow1")
	L2 = SKIN:GetVariable("WorldMapShow2")
	L3 = SKIN:GetVariable("WorldMapShow3")
	L4 = SKIN:GetVariable("WorldMapShow4")
	L5 = SKIN:GetVariable("WorldMapShow5")
	L6 = SKIN:GetVariable("WorldMapShow6")
	L7 = SKIN:GetVariable("WorldMapShow7")
	L8 = SKIN:GetVariable("WorldMapShow8")
	L9 = SKIN:GetVariable("WorldMapShow9")
	L10 = SKIN:GetVariable("WorldMapShow10")
	L11 = SKIN:GetVariable("WorldMapShow11")
	L12 = SKIN:GetVariable("WorldMapShow12")
	L13 = SKIN:GetVariable("WorldMapShow13")
	L14 = SKIN:GetVariable("WorldMapShow14")
	L15 = SKIN:GetVariable("WorldMapShow15")

end -- function Initilize

function Update()
	L1 = SKIN:GetVariable("WorldMapShow1")
	L2 = SKIN:GetVariable("WorldMapShow2")
	L3 = SKIN:GetVariable("WorldMapShow3")
	L4 = SKIN:GetVariable("WorldMapShow4")
	L5 = SKIN:GetVariable("WorldMapShow5")
	L6 = SKIN:GetVariable("WorldMapShow6")
	L7 = SKIN:GetVariable("WorldMapShow7")
	L8 = SKIN:GetVariable("WorldMapShow8")
	L9 = SKIN:GetVariable("WorldMapShow9")
	L10 = SKIN:GetVariable("WorldMapShow10")
	L11 = SKIN:GetVariable("WorldMapShow11")
	L12 = SKIN:GetVariable("WorldMapShow12")
	L13 = SKIN:GetVariable("WorldMapShow13")
	L14 = SKIN:GetVariable("WorldMapShow14")
	L15 = SKIN:GetVariable("WorldMapShow15")

	if L1 == '1' then 
		SKIN:Bang('!SetVariable LocationtoWrite 1')
	elseif L2 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 2')
	elseif L3 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 3')
	elseif L4 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 4')
	elseif L5 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 5')
	elseif L6 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 6')
	elseif L7 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 7')
	elseif L8 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 8')
	elseif L9 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 9')
	elseif L10 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 10')
	elseif L11 == '1' then 
		SKIN:Bang('!SetVariable LocationtoWrite 11')
	elseif L12 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 12')
	elseif L13 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 13')
	elseif L14 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 14')
	elseif L15 == '1' then
		SKIN:Bang('!SetVariable LocationtoWrite 15')
	else
		SKIN:Bang('!SetVariable LocationtoWrite 1')
	end
end -- function Update

function LocationtoWrite()

end
