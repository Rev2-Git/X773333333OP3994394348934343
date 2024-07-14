function onCreate()
	makeLuaSprite('legspreader', 'legspreader/spreaderbg', 0, -450);
	scaleObject('legspreader', 0.6, 0.6);

	makeLuaSprite('multiply', 'legspreader/multiply', 0, -450)
	scaleObject('multiply', 0.6, 0.6);

	makeLuaSprite('screen', 'legspreader/screen', 0, -450)
	scaleObject('screen', 0.6, 0.6);

	makeLuaSprite('add', 'legspreader/add', 60, -550)
	scaleObject('add', 0.6, 0.6);
	setProperty('add.alpha', 0.75)


	setProperty('gfGroup.alpha', 0.0001)

	addLuaSprite('legspreader', false)
	addLuaSprite('multiply', false)
	addLuaSprite('screen', true)
	addLuaSprite('add', true)

	setBlendMode('multiply', 'multiply')
	setBlendMode('screen', 'screen')
	setBlendMode('add', 'add')
	close(true);
end