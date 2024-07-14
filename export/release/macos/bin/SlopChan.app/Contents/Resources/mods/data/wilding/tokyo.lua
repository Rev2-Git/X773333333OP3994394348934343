function onCreatePost()
	addHaxeLibrary('Paths')
	addHaxeLibrary('OverlayShader')
	addHaxeLibrary('ColorSwap')
	addHaxeLibrary('WiggleEffectType', 'WiggleEffect')
	addHaxeLibrary('BGSprite')
	addHaxeLibrary('Conductor')
	addHaxeLibrary('BlendMode', 'openfl.display')
	camZoom = getProperty("defaultCamZoom")
end

function onSectionHit()
	if mustHitSection then
    		setProperty("defaultCamZoom", camZoom+0.15)
	else
    		setProperty("defaultCamZoom", camZoom)
	end
end

function onBeatHit()
	if curBeat % 4 == 0 then

		doTweenAlpha('lightsOut', 'lights', 0, 0.25, circInOut)
	elseif curBeat % 2 == 0 then

		doTweenAlpha('lightsIn', 'lights', 1, 0.1, circInOut)
	end
end