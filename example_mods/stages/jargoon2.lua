local angleshit = 1;
local anglevar = 1;
function onCreate()

	makeLuaSprite('skyleft', 'jargon/skyleft', 55.85, -20.3);
	setScrollFactor('skyleft', 0.2, 0.1);
	scaleObject(‘skyleft’, 1.2, 1.2)

	makeLuaSprite('skyright', 'jargon/skyright', 705.85, -503.3);
	setScrollFactor('skyright', 0.08, 0.06);

	makeLuaSprite('moon', 'jargon/moon', 1445.85, 103.3);
	setScrollFactor('moon', 0.12, 0.1);

	makeLuaSprite('plains', 'jargon/plains', 0, 570);
	setScrollFactor('plains', 0.28, 0.25);

	makeLuaSprite('mountains', 'jargon/mountains', 1500, 250);
	setScrollFactor('mountains', 0.48, 0.5);
	setProperty('mountains.flipX', true);
	
	makeLuaSprite('stairs', 'jargon/stairs', 2650, 550);
	setScrollFactor('stairs', 0.88, 0.85);

	makeAnimatedLuaSprite('house', 'jargon/house', 2270.6, 115.75);
        addAnimationByPrefix('house', 'house', 'house', 24, true)
    	setLuaSpriteScrollFactor('house', 1, 1);

	makeLuaSprite('light', 'jargon/light', 3600.6, 505.75);
	setScrollFactor('light', 1.15, 1.15);
	setBlendMode('light','add')
	setProperty('light.alpha', 0.6)
		
    	makeAnimatedLuaSprite('hands', 'jargon/hands', 2850, 600);
        addAnimationByPrefix('hands', 'hands', 'hands', 24, true)
    	setLuaSpriteScrollFactor('hands', 1.1, 0.6);
	
	makeLuaSprite('overlay', 'jargon/overlay', 2610.6, 235.75);
	setScrollFactor('overlay', 1.05, 1.05);
	setBlendMode('overlay','multiply')
	scaleObject(‘overlay’, 1.1, 1.1)
	setProperty('overlay.alpha', 0.9)

	makeLuaSprite('2verlay', 'jargon/2verlay', 3370.6, 455.75);
	setScrollFactor('2verlay', 1.3, 1.2);
	setBlendMode('2verlay','subtract')
	scaleObject(‘2verlay’, 1.1, 1.1)
	setProperty('2verlay.alpha', 0.8)

		makeLuaSprite('bartop','',0,-30)
		makeGraphic('bartop',1280,100,'000000')

		makeLuaSprite('barbot','',0,650)
		makeGraphic('barbot',1280,100,'000000')
		setScrollFactor('bartop',0,0)
		setScrollFactor('barbot',0,0)
		setObjectCamera('bartop','hud')
		setObjectCamera('barbot','hud')
		
	addLuaSprite('skyleft', false);
	addLuaSprite('skyright', false);
	addLuaSprite('moon', false);
	addLuaSprite('plains', false);
	addLuaSprite('mountains', false);
	addLuaSprite('stairs', false);
	addLuaSprite('house', false);
	addLuaSprite('light', true);
	addLuaSprite('bartop',true);
	addLuaSprite('barbot',true);
	addLuaSprite('overlay', true);
	addLuaSprite('hands', true);
	addLuaSprite('2verlay', true);
end
