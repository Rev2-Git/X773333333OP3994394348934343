local angleshit = 1;
local anglevar = 1;
function onCreatePost()


	makeLuaSprite('backwall', 'kiddo/backwall', 95.85, 93.3);
	setScrollFactor('backwall', 0.4, 0.55);
		
	makeLuaSprite('studiolight', 'kiddo/studiolight', 1760.85, 300.3);
	setScrollFactor('studiolight', 0.55, 0.68);
	
	makeLuaSprite('row4', 'kiddo/row4', 565.85, 623.3);
	setScrollFactor('row4', 0.48, 0.62);

	makeLuaSprite('row3', 'kiddo/row3', 625.85, 685.3);
	setScrollFactor('row3', 0.55, 0.67);

	makeLuaSprite('row2', 'kiddo/row2', 630, 770);
	setScrollFactor('row2', 0.65, 0.74);

	makeLuaSprite('row1', 'kiddo/row1', 430, 830);
	setScrollFactor('row1', 0.75, 0.80);

    makeAnimatedLuaSprite('bopper', 'kiddo/bopper', 2090.1, 530.1);
    addAnimationByPrefix('bopper', 'bopper', 'bopper', 24, true);
    setLuaSpriteScrollFactor('bopper', 0.8, 0.87);
	setProperty('bopper.alpha', 0.9)

	makeLuaSprite('stage', 'kiddo/stage', 1970.6, 1245.75);
	setScrollFactor('stage', 0.99, 0.97);

    makeAnimatedLuaSprite('fog', 'kiddo/fog', 2110.1, 1150.1);
    addAnimationByPrefix('fog', 'fog', 'fog', 24, true);
    setLuaSpriteScrollFactor('fog', 1, 1);
	setProperty('fog.alpha', 0.31)
	setBlendMode('fog','add')

	makeLuaSprite('curtainleft', 'kiddo/curtainleft', 2430.6, 425.75);
	setScrollFactor('curtainleft', 1.03, 1.06);
	
	makeLuaSprite('curtainright', 'kiddo/curtainright', 4070.6, 435.75);
	setScrollFactor('curtainright', 1.03, 1.06);
	
		makeLuaSprite('curtaintop', 'kiddo/curtaintop', 2570.6, 435.75);
	setScrollFactor('curtaintop', 0.9, 0.96);
	
		makeLuaSprite('speakers', 'kiddo/speakers', 3250.6, 1255.75);
	setScrollFactor('speakers', 1.3, 1);
	
	makeLuaSprite('light', 'kiddo/light', 2800.6, 405.75);
	setScrollFactor('light', 1.05, 1.1);
	setBlendMode('light','add')

	makeLuaSprite('uhm', 'kiddo/uhm', 1970.6, 535.75);
	setScrollFactor('uhm', 1.05, 1.1);
	
	makeLuaSprite('vignette', 'kiddo/vignette', 2070.6, 300.75);
	setScrollFactor('vignette', 1, 1);
	setBlendMode('vignette','multiply')


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
		
	addLuaSprite('backwall', false);
	addLuaSprite('studiolight', false);
	addLuaSprite('row4', false);
	addLuaSprite('row3', false);
	addLuaSprite('row2', false);
	addLuaSprite('row1', false);
	addLuaSprite('bopper', false);
	addLuaSprite('stage', false);
	addLuaSprite('fog', false);
	addLuaSprite('curtaintop', true);
	addLuaSprite('curtainleft', true);
	addLuaSprite('curtainright', true);
	addLuaSprite('speakers', true);
	addLuaSprite('uhm', true);
	addLuaSprite('light', true);
	addLuaSprite('bartop',true);
	addLuaSprite('barbot',true);
	addLuaSprite('vignette', true);
	setProperty('gf.alpha', 0.0001);
end
