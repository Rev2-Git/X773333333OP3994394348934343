function onCreatePost()
     makeLuaSprite("overlay", "tokyo/overlay", -900, -100)
	setBlendMode("overlay", "add")
    setLuaSpriteScrollFactor('overlay', 1.0, 1.0);
	scaleObject('overlay', 1.0, 1.0);
    
    makeLuaSprite("redlights", "tokyo/redlights", -900, -100)
	setBlendMode("redlights", "add")
    setLuaSpriteScrollFactor('redlights', 1.0, 1.0);
	scaleObject('redlights', 1.0, 1.0);
    
    makeLuaSprite("lights", "tokyo/lights", -900, -100)
	setBlendMode("lights", "add")
    setLuaSpriteScrollFactor('lights', 1.0, 1.0);
	scaleObject('lights', 1.0, 1.0);
    
    makeLuaSprite("signlight", "tokyo/signlight", -900, -100)
	setBlendMode("signlight", "add")
    setLuaSpriteScrollFactor('signlight', 1.0, 1.0);
	scaleObject('signlight', 1.0, 1.0);
    
	makeLuaSprite("city", "tokyo/city", -900, -100)
	scaleObject("city", 1.0, 1.0)
	setScrollFactor("city", 1.0, 1.0)
    
    makeLuaSprite("stars", "tokyo/stars", -900, -100)
	scaleObject("stars", 1.0, 1.0)
	setScrollFactor("stars", 1.0, 1.0)
    
    makeLuaSprite("sky", "tokyo/sky", -900, -100)
	scaleObject("sky", 1.0, 1.0)
	setScrollFactor("sky", 1, 1)
    
    makeLuaSprite("trash", "tokyo/trash", -900, -200) --If you wanna change it to be regular again, make it -900, -100 and fix scoll factor to 1.0, 1.0
	scaleObject("trash", 1.0, 1.0)
	setScrollFactor("trash", 0.75, 0.75)
    
    addLuaSprite("sky", false)
    addLuaSprite("stars", false)
    addLuaSprite("city", false)
    addLuaSprite("signlight", true)
    addLuaSprite("lights", true)
    addLuaSprite("redlights", true)
    addLuaSprite("trash", true)
    addLuaSprite("overlay", true)

    setProperty('gf.alpha', 0.000001)
    --feel free to make changes and edits
end

