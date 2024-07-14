function onCreatePost()
    if difficulty == 2 then
        makeLuaSprite('hunterHud', 'hunterHud', 0, 0)
        setObjectCamera('hunterHud','HUD')
        scaleObject('hunterHud', 0.67, 0.67)
        addLuaSprite('hunterHud', false)
        setProperty('hunterHud.alpha', 0)
        setObjectOrder('hunterHud', getObjectOrder('HealthBarBG') + 1)
        if downscroll then
            loadGraphic('hunterHud', 'HunterHudDOWNSCROLL')
        end
    elseif difficulty == 1 then
    end
end  