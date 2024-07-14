local angleshit = 1;
local anglevar = 1;
function onCreate()
	
	makeLuaSprite('backgroundRD', 'fuckup/backgroundRD', 2700.85, 353.3);
	setScrollFactor('backgroundRD', 0.86, 0.82);

	makeLuaSprite('AlleywayBG', 'fuckup/AlleywayBG', 2000.85, 303.3);
	setScrollFactor('AlleywayBG', 0.98, 1);

	makeLuaSprite('darknessMult2', 'fuckup/darknessMult2', 2000, 430);
	setScrollFactor('darknessMult2', 0.98, 1);
	setBlendMode("darknessMult2", "multiply")
	setProperty('darknessMult2.alpha', 0.7)
	
	makeLuaSprite('carGlow', 'fuckup/carGlow', 3960, 1600);
	setScrollFactor('carGlow', 0.98, 1);
	setBlendMode("carGlow", "add")
	
	makeAnimatedLuaSprite('smockeCCool', 'fuckup/smockeCCool', 2300, 800);
		addAnimationByPrefix('smockeCCool', 'smockeCCool', 'smockeCCool', 24, true)
	setLuaSpriteScrollFactor('smockeCCool', 1.04, 1);
	setBlendMode("smockeCCool", "add")
	
	makeLuaSprite('fireglow', 'fuckup/fireglow', 1538.6, 815.75);
	setScrollFactor('fireglow', 1.04, 1);
	setBlendMode("fireglow", "add")

	setProperty('gfGroup.alpha', 0);

	addLuaSprite('backgroundRD', false);
	addLuaSprite('AlleywayBG', false);
	addLuaSprite('darknessMult2', true);
	addLuaSprite('carGlow', true);
	addLuaSprite('smockeCCool', true);
	addLuaSprite('fireglow', true);


  end
 
