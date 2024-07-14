function onCreatePost()
    setProperty('healthBarBG.alpha', 0);
    setProperty('iconP2.alpha', 0);
    setProperty('scoreTxt.alpha', 0);
    setProperty('healthBar.alpha', 0);

    makeLuaSprite('HealthGauge', 'healthbarNew/bar_empty', 1130,140);
	makeLuaSprite('HealthGaugeFilled', 'healthbarNew/bar', 1130,140);

    scaleObject('HealthGauge',0.5,0.5);
	scaleObject('HealthGaugeFilled',0.5,0.5);


    setObjectCamera('HealthGauge','HUD');
	setObjectCamera('HealthGaugeFilled','HUD');

	addLuaSprite('HealthGaugeFilled', false);
	addLuaSprite('HealthGauge', false);

end

curFrame = 0;
curHealth = 0;

function onStartCountdown()
	setProperty('health',2);
end

function onUpdatePost(e)

	setProperty('iconP1.x', 1125);
	setProperty('iconP1.y', 145);

	curFrame = curFrame + e*24;
	if curFrame > 9 then
		curFrame = 0;
	end

	curHealth = getProperty('health')/2;
	setProperty('HealthGauge._frame.frame.height', 75 + (math.lerp(946, 0, curHealth))); --masking parts of the opponent healthbar based on some offset + health



end

function math.lerp(a, b, t)
	return a + t * (b - a);
end
