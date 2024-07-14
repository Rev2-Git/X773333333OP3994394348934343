function onCreate()
	setProperty('camGame.bgColor', getColorFromHex('1A1A36'))
	-- background shit
	makeLuaSprite('stageback', 'katsumi/movingbg', -90.3 * 7, -247.1 * -1)
	
	makeLuaSprite('stagefront', 'katsumi/train', -662.2, -56.65)
	
	makeAnimatedLuaSprite('overlay', 'katsumi/overlay', 654.9, -218 * -1)
	addAnimationByPrefix('overlay', 'overlay', 'overlay', 24, true)
	playAnim('overlay', 'overlay', true)
	setBlendMode('overlay', 'add')
	
	makeAnimatedLuaSprite('overlay2', 'katsumi/overlay2', -178.35 * 1.5, -105.45 * -1)
	addAnimationByPrefix('overlay2', 'overlay2', 'overlay2', 24, true)
	playAnim('overlay2', 'overlay2', true)
	setBlendMode('overlay2', 'add')

	addLuaSprite('stageback', false)
	addLuaSprite('stagefront', false)
	addLuaSprite('overlay', true)
	addLuaSprite('overlay2', true)
	
	runHaxeCode([[
		FlxTween.tween(game.getLuaObject('stageback'), {x: -600 * -7}, Conductor.crochet / 1000, {type: 2})
				]])
	
	close(true); --For performance reasons, close this script once the stage is fully loaded, as this script won't be used anymore after loading the stage
end