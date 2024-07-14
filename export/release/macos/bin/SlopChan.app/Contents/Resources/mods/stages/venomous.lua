function onCreate()

	makeLuaSprite('stageback', 'venomous/stageback', -725, -555);
	makeLuaSprite('multiply', 'venomous/multiply', -650, -250);
	makeLuaSprite('lights', 'venomous/lightsOverlay', -650, -500);
	makeLuaSprite('crowd_overlay', 'venomous/crowd_overlay', -251, -214);
	makeLuaSprite('4th_row', 'venomous/4th_row', 347, 145);
	makeLuaSprite('3rd_row', 'venomous/3rd_row', 251, 211);
	makeLuaSprite('2nd_row', 'venomous/2nd_row', 99, 292);
	makeLuaSprite('seats_front', 'venomous/seats_front', -176, 365);
	makeAnimatedLuaSprite('venomous_crowd', 'venomous/venomous_crowd', 124, 191);
	makeLuaSprite('floor', 'venomous/floor', -829, 564);
	makeAnimatedLuaSprite('venomous_fish', 'venomous/venomous_fish', 15, 480);
	makeLuaSprite('curtains', 'venomous/curtains', -765, -557);
	makeLuaSprite('boomboxes', 'venomous/boomboxes', -835, 649);


	scaleObject('stageback', 1.1, 1.1);
	scaleObject('multiply', 1.1, 1.1);
	scaleObject('seats_front', 1, 1);
	scaleObject('venomous_fish', 1.55, 1.55);
	scaleObject('curtains', 1.1, 1.1);
	scaleObject('overlay', 1.3, 1.3);

	setScrollFactor('stageback', 0.15, 0.15);
	setScrollFactor('4th_row', 0.15, 0.15);
	setScrollFactor('3rd_row', 0.3, 0.3);
	setScrollFactor('2nd_row', 0.45, 0.45);
	setScrollFactor('seats_front', 0.6, 0.6);
	setScrollFactor('venomous_crowd', 0.6, 0.6);
	setScrollFactor('venomous_fish', 0.6, 0.6);
	setScrollFactor('curtains', 1.25, 1.25);
	setScrollFactor('boomboxes', 1.5, 1.5);

	addAnimationByPrefix('venomous_crowd', 'crowd boppin', 'crowd boppin', 24, true);
	addAnimationByPrefix('venomous_fish', 'fishlook', 'fishlook', 24, true);

	addLuaSprite('stageback')

	addLuaSprite('4th_row')
	addLuaSprite('3rd_row')
	addLuaSprite('2nd_row')
	addLuaSprite('seats_front')
	addLuaSprite('venomous_crowd')
	addLuaSprite('venomous_fish')
	addLuaSprite('floor')
	addLuaSprite('curtains', true)
	addLuaSprite('multiply', true)
	addLuaSprite('lights', true)
	addLuaSprite('boomboxes', true)


	setBlendMode('crowd_overlay', 'add')
	setBlendMode('multiply', 'multiply')
	setBlendMode('lights', 'add')

	setProperty('gfGroup.visible', false);

	close(true);
end