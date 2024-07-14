function onCreate()
	-- CHARACTER
	setPropertyFromClass('GameOverSubstate', 'characterName', 'spooky-dead');
	
	--SOUNDS
	setPropertyFromClass('GameOverSubstate', 'deathSoundName', 'fnf_loss_sfx'); --file goes inside sounds/ folder
	setPropertyFromClass('GameOverSubstate', 'loopSoundName', 'fryGameOver'); --file goes inside music/ folder
	setPropertyFromClass('GameOverSubstate', 'endSoundName', 'fryGameOverEnd'); --file goes inside music/ folder
end