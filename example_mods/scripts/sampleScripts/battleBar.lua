local leftCounter = 0
local rightCounter = 0
local attackable = false
local attacking = false
local dodgeable = false
local dodging = false
local WaitCounter = 1
local DmgCounter = 0.4
local TotalLeft = 0



function onCreatePost()
    precacheImage('circle_red')
    precacheImage('circle_blue')
    makeLuaSprite('battleBar', 'battle_bar', getProperty('healthBarBG.x'), getProperty('healthBarBG.y') - 25)
    scaleObject('battleBar', 0.4, 0.4)
    setObjectCamera('battleBar', 'HUD')
    addLuaSprite('battleBar', false)
end

function onEvent(n,v1,v2)
    if n == 'Battle Bar' then
	    local val = stringSplit(v2, ',');
        v2 = val[1]
        v3 = val[2]
        WaitCounter = v2
        DmgCounter = v3
        if v1 == 'right' then
            makeLuaSprite('rightBar'..rightCounter, 'circle_blue', getProperty('healthBarBG.x')+600, getProperty('healthBarBG.y') - 10)
            setObjectCamera('rightBar'..rightCounter, 'HUD')
            addLuaSprite('rightBar'..rightCounter, true)
            doTweenX('rightBarGO'..rightCounter, 'rightBar'..rightCounter, 625, crochet/1000 * WaitCounter, 'circIn')
		    rightCounter = rightCounter + 1
            runTimer('rightThresholdBegin', crochet/1000 * WaitCounter)
	  elseif v1 == 'left' then
            makeLuaSprite('leftBar'..leftCounter, 'circle_red', getProperty('healthBarBG.x'), getProperty('healthBarBG.y') - 10)
            setObjectCamera('leftBar'..leftCounter, 'HUD')
            addLuaSprite('leftBar'..leftCounter, true)
            doTweenX('leftBarGO'..leftCounter, 'leftBar'..leftCounter, 625, crochet/1000 * WaitCounter, 'circIn')
	 	    leftCounter = leftCounter + 1
            runTimer('leftThresholdBegin', crochet/1000 * WaitCounter)
        end
    end
end

function onUpdatePost()
    TotalLeft = leftCounter
    if getPropertyFromClass('flixel.FlxG','keys.justPressed.G') then
        dodging = true
    elseif getPropertyFromClass('flixel.FlxG','keys.justPressed.H') then
        attacking = true
    elseif getPropertyFromClass('flixel.FlxG','keys.justReleased.G')then
        runTimer('DodgeInputLatency', crochet/1000 * 1/4)
    elseif getPropertyFromClass('flixel.FlxG','keys.justReleased.H')then
        runTimer('AttackInputLatency', crochet/1000 * 1/4)
    end
end

function onTimerCompleted(t)
    if t == 'leftThresholdBegin' then
        dodgeable = true
        runTimer('LeftThresholdEnd', crochet/1000 * 1/4)
    elseif t == 'rightThresholdBegin' then
        attackable = true
        runTimer('RightThresholdEnd', crochet/1000 * 1/4)
    elseif t == 'LeftThresholdEnd' then
        removeLuaSprite('leftBar'..(leftCounter-1), false)
        if not dodging then
            setProperty('health',getProperty('health') - DmgCounter)
        end
    elseif t == 'RightsThresholdEnd' then
	  removeLuaSprite('rightBar'..rightCounter, false)
        if not attacking then
            setProperty('health',getProperty('health') - DmgCounter)
        end
    elseif t == 'DodgeInputLatency' then
        dodging = false
    elseif t == 'AttackInputLatency' then
        attacking = false
    end
end




