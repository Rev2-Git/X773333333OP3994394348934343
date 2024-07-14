function onCreatePost()
    makeLuaSprite("shadow", "yeag/shadow", -900, -200)
	setBlendMode("shadow", "add")
    setLuaSpriteScrollFactor('shadow', 1.0, 1.0);
	scaleObject('shadow', 1.0, 1.0);

	makeLuaSprite("sludge", "yeag/sludge", -900, -100)
	scaleObject("sludge", 1.0, 1.0)
	setScrollFactor("sludge", 1.0, 1.0)

    makeLuaSprite("spot-add", "yeag/spot-add", -900, 200)
	setBlendMode("spot-add", "add")
    setLuaSpriteScrollFactor('spot-add', 1.0, 1.0);
	scaleObject('spot-add', 1.0, 1.0);


    makeLuaSprite("moon-add", "yeag/moon-add", -200, -500)
	setBlendMode("moon-add", "add")
    setLuaSpriteScrollFactor('moon-add', 1.0, 1.0);
	scaleObject('moon-add', 1.0, 1.0);

    setProperty('gfGroup.alpha', 0)
    
    addLuaSprite("shadow", true)
    addLuaSprite("sludge", false)
    addLuaSprite("spot-add", true)
    addLuaSprite("moon-add", true)
end


