function onCreatePost()
     makeLuaSprite("overlay", "radical/overlay", -900, -100)
	setBlendMode("overlay", "add")
    setLuaSpriteScrollFactor('overlay', 1.0, 1.0);
	scaleObject('overlay', 1.0, 1.0);
    
    makeLuaSprite("lightoverlay", "radical/lightoverlay", -900, -100)
	setBlendMode("lightoverlay", "add")
    setLuaSpriteScrollFactor('lightoverlay', 1.0, 1.0);
	scaleObject('lightoverlay', 1.0, 1.0);
    
	makeLuaSprite("club", "radical/club", -900, -100)
	scaleObject("club", 1.0, 1.0)
	setScrollFactor("club", 1.0, 1.0)
    
    makeLuaSprite("bricked", "radical/bricked", -900, -100)
	scaleObject("bricked", 1.0, 1.0)
	setScrollFactor("bricked", 1.0, 1.0)
    
    makeLuaSprite("trash", "radical/trash", -900, -100)
	scaleObject("trash", 1.0, 1.0)
	setScrollFactor("trash", 1.0, 1.0)
    
    makeLuaSprite("wire", "radical/wire", -900, -100)
	scaleObject("wire", 1.0, 1.0)
	setScrollFactor("wire", 1.0, 1.0)

    setProperty('gfGroup.alpha', 0)
    
    addLuaSprite("club", false)
    addLuaSprite("bricked", false)
    addLuaSprite("trash", false)
    addLuaSprite("wire", false)
    addLuaSprite("lightoverlay", true)
    addLuaSprite("overlay", true)
end


