function onCreate()
	-- background shit

	makeLuaSprite('sky', 'DJstage/sky', -900, -600);
	setScrollFactor('sky', 0.75, 0.75);
	

	makeLuaSprite('tree', 'DJstage/tree', -900, -900);
	setScrollFactor('tree', 0.75, 0.75);

	makeLuaSprite('phantomile', 'DJstage/phantomile_plushies', -740, -765);
	setScrollFactor('phantomile', 0.9, 0.9);
	scaleObject('phantomile',0.85,0.85);


	makeLuaSprite('sidewalk', 'DJstage/sidewalk', -1000, -1000);
	

	addLuaSprite('sky',false);
	addLuaSprite('tree',false);
	addLuaSprite('phantomile',false);
	addLuaSprite('sidewalk',false);
	
	close(true); --For performance reasons, close this script once the stage is fully loaded, as this script won't be used anymore after loading the stage
end