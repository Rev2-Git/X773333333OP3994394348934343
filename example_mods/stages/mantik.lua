local angleshit = 1;
local anglevar = 1;
function onCreate()

	playAnim('dad', 'idle-alt')
	setProperty('dad.idleSuffix', '-alt');

	makeLuaSprite('sky', 'mantik/sky', 0, -300);
	setScrollFactor('sky', 0, 0);
	
	makeLuaSprite('stars', 'mantik/stars', 0, -300);
	setScrollFactor('stars', 0.01, 0.008);
		
	makeLuaSprite('moonglow', 'mantik/moonglow', 695.85, 559.3);
	setScrollFactor('moonglow', 0.02, 0.01);
	setBlendMode('moonglow','add')
	setProperty('moonglow.alpha', 0)
	scaleObject('moonglow', 0.4, 1, true)

	makeLuaSprite('moon', 'mantik/moon', 745.85, 503.3);
	setScrollFactor('moon', 0.02, 0.01);
	
	makeLuaSprite('cloud', 'mantik/cloud', 555.85, -13.3);
	setScrollFactor('cloud', 0.2, 0.25);
	setProperty('cloud.alpha', 0)

	makeLuaSprite('cloud2', 'mantik/cloud2', 755.85, -13.3);
	setScrollFactor('cloud2', 0.57, 0.55);
	setProperty('cloud2.alpha', 0.1)

	makeLuaSprite('back3', 'mantik/back3', 470, 440);
	setScrollFactor('back3', 0.08, 0.05);

	makeLuaSprite('back2', 'mantik/back2', 1195, 420);
	setScrollFactor('back2', 0.18, 0.1);

	makeLuaSprite('back1', 'mantik/back1', 1140, 460);
	setScrollFactor('back1', 0.38, 0.3);
	
	makeLuaSprite('4verlay', 'mantik/4verlay', 2800.6, 380.75);
	setScrollFactor('4verlay', 1.3, 1.35);
	setBlendMode('4verlay','subtract')
	setProperty('4verlay.alpha', 0.7)


	makeLuaSprite('building', 'mantik/building', 1750, 150);
	setScrollFactor('building', 0.88, 0.85);

    	makeAnimatedLuaSprite('plant', 'mantik/plant', 2630, 520);
        addAnimationByPrefix('plant', 'plant', 'plant', 24, true)
    	setLuaSpriteScrollFactor('plant', 0.87, 0.8);

	makeLuaSprite('foreground', 'mantik/foreground', 1970.6, 305.75);
	setScrollFactor('foreground', 0.98, 0.96);

	makeLuaSprite('light', 'mantik/light', 1780.6, 75.75);
	setScrollFactor('light', 0.89, 0.86);
	setBlendMode('light','subtract')
	setProperty('light.alpha', 0)
	
	makeLuaSprite('light2', 'mantik/light2', 2330.6, 185.75);
	setScrollFactor('light2', 0.94, 0.91);
	setBlendMode('light2','add')
	
	makeLuaSprite('wire', 'mantik/wire', 3370.6, 275.75);
	setScrollFactor('wire', 1.05, 1.1);

	makeLuaSprite('pillar', 'mantik/pillar', 3620.6, 315.75);
	setScrollFactor('pillar', 1.5, 1.75);
	
	makeLuaSprite('overlay', 'mantik/overlay', 2800.6, 370.75);
	setScrollFactor('overlay', 1.3, 1.35);
	setBlendMode('overlay','multiply')
	setProperty('overlay.alpha', 0)

	makeLuaSprite('2verlay', 'mantik/2verlay', 2800.6, 370.75);
	setScrollFactor('2verlay', 1.3, 1.35);
	setBlendMode('2verlay','multiply')
	
	makeLuaSprite('3verlay', 'mantik/3verlay', 2800.6, 370.75);
	setScrollFactor('3verlay', 1.3, 1.35);
	setBlendMode('3verlay','multiply')
	setProperty('3verlay.alpha', 0)
	
	
	

		makeLuaSprite('bartop','',0,-30)
		makeGraphic('bartop',1280,100,'09190F')
		setBlendMode('bartop','subtract')
		
		makeLuaSprite('barbot','',0,650)
		makeGraphic('barbot',1280,100,'09190F')
		setBlendMode('barbot','subtract')
		
		setScrollFactor('bartop',0,0)
		setScrollFactor('barbot',0,0)
		setObjectCamera('bartop','hud')
		setObjectCamera('barbot','hud')
		
	addLuaSprite('sky', false);
	addLuaSprite('stars', false);
	addLuaSprite('cloud', false);
	addLuaSprite('moonglow', false);
	addLuaSprite('moon', false);
	addLuaSprite('back3', false);
	addLuaSprite('cloud2', false);
	addLuaSprite('back2', false);
	addLuaSprite('back1', false);
	addLuaSprite('building', false);
	addLuaSprite('light', false);
	addLuaSprite('light2', false);
	addLuaSprite('plant', false);
	addLuaSprite('foreground', false);
	addLuaSprite('wire', false);
	addLuaSprite('pillar', false);
	addLuaSprite('bartop',true);
	addLuaSprite('barbot',true);
	addLuaSprite('overlay', true);
	addLuaSprite('2verlay', true);
	addLuaSprite('3verlay', true);
	addLuaSprite('4verlay', true);
end
function onUpdate()
   if mustHitSection then

      setProperty('defaultCamZoom', 0.62)

   else

      setProperty('defaultCamZoom', 0.7)

   end
end

function onBeatHit()

	if curBeat == 1 then
		doTweenAlpha('fog1', 'cloud', 1, 40, 'linear')
		doTweenAlpha('fog2', 'cloud2', 1, 30, 'linear')
		doTweenAlpha('nightlight', 'light', 1, 60, 'smootherStepInOut')
		doTweenAlpha('nightlight2', 'light2', 0.2, 60, 'smootherStepInOut')
		doTweenAlpha('night1', 'overlay', 1, 50, 'smootherStepInOut')
		doTweenAlpha('night2', '2verlay', 0, 50, 'smootherStepInOut')
		doTweenAlpha('night3', '3verlay', 0.1, 50, 'smootherStepInOut')
		doTweenAlpha('night4', '4verlay', 0, 55, 'smootherStepInOut')
		doTweenY('night5', 'sky', -470, 80, 'smootherStepInOut')
		doTweenY('night6', 'stars', -470, 80, 'smootherStepInOut')
		doTweenAlpha('night7', 'stars', 0.4, 110, 'smootherStepInOut')
		doTweenY('moon', 'moon', 303.3, 70, 'smootherStepInOut')
		doTweenY('moon2', 'moonglow', 359.3, 70, 'smootherStepInOut')

	end
end
function onTweenCompleted(t) 
     if t == 'fog1' then
		doTweenX('tween','moonglow.scale', 1, 45, 'smootherStepInOut') 
		doTweenAlpha('moon3', 'moonglow', 1, 45, 'smootherStepInOut')
    end
end