function onCreate()
	makeLuaSprite('mopped', 'mopped/mopped', -841, -650);
	scaleObject('mopped', 1, 1);
	setScrollFactor('mopped', 0.95, 1);
	setProperty('mopped.antialiasing', true);
	setObjectOrder('mopped', 0);



	setScrollFactor('gfGroup', 0.95, 0.95);
	setProperty('gfGroup.antialiasing', true);
	setProperty('gfGroup.visible', false)
	setObjectOrder('gfGroup', 1);

	setScrollFactor('dadGroup', 1, 1);
	setProperty('dadGroup.antialiasing', true);
	setObjectOrder('dadGroup', 2);

	setScrollFactor('boyfriendGroup', 1, 1);
	setProperty('boyfriendGroup.antialiasing', true);
	setObjectOrder('boyfriendGroup', 3);

	makeLuaSprite('mopped_overlay', 'mopped/mopped_overlay', -833, -653);
	scaleObject('mopped_overlay', 1, 1);
	setScrollFactor('mopped_overlay', 1, 1);
	setProperty('mopped_overlay.antialiasing', true);
	setObjectOrder('mopped_overlay', 4);

	close(true);
end