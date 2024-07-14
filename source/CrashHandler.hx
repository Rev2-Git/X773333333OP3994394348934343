package;

import flixel.FlxG;
import flixel.FlxGame;
import flixel.addons.ui.FlxUIState;
import flixel.text.FlxText;
import haxe.CallStack;
import haxe.Exception;
import haxe.io.Path;
import openfl.events.Event;

/**
 * a multi-purpose, customizable Crash Handler State
 * rather than using a fancy executable to show exceptions
 * when the game crashes, it opens this state instead, while
 * never letting the game close and instead letting you go back
 * to the main menu
 */
class CrashHandler extends FlxUIState
{
	var errorString:String = '';

	public function new(errorString:String = '')
	{
		this.errorString = errorString;
		super();
	}

	var errorField:FlxText;

	public override function create()
	{
		FlxG.mouse.visible = true;

		errorField = new FlxText(0, 0, 0, errorString, 32);
		errorField.font = "VCR OSD Mono";
		errorField.alignment = CENTER;
		errorField.screenCenter(XY);
		add(errorField);
	}

	public override function update(elapsed:Float)
	{
		super.update(elapsed);

		if (FlxG.keys.justPressed.SPACE)
		{
			#if linux
			Sys.command('/usr/bin/xdg-open', ["https://github.com/ShadowMario/FNF-PsychEngine"]);
			#else
			FlxG.openURL("https://github.com/ShadowMario/FNF-PsychEngine");
			#end
		}

		if (FlxG.keys.justPressed.ESCAPE)
		{
			FlxG.mouse.visible = false;
			FlxG.switchState(Type.createInstance(MainMenuState, []));
		}
	}
}

/**
 * Serves as a Dependency to the Crash Handler, it is simply
 * an extension to FlxGame in order to actually open the crash handler state
 * when the game crashes
 */
class FNFGame extends FlxGame
{
	public override function create(_:Event)
	{
		try
		{
			super.create(_);
		}
		catch (e:Exception)
		{
			onCrash(e);
		}
	}

	public override function draw()
	{
		try
		{
			super.draw();
		}
		catch (e:Exception)
		{
			onCrash(e);
		}
	}

	public override function update()
	{
		try
		{
			super.update();
		}
		catch (e:Exception)
		{
			onCrash(e);
		}
	}

	public override function onEnterFrame(_:Event)
	{
		try
		{
			super.onEnterFrame(_);
		}
		catch (e:Exception)
		{
			onCrash(e);
		}
	}

	public override function onFocus(_:Event)
	{
		try
		{
			super.onFocus(_);
		}
		catch (e:Exception)
		{
			onCrash(e);
		}
	}

	public override function onFocusLost(_:Event)
	{
		try
		{
			super.onFocusLost(_);
		}
		catch (e:Exception)
		{
			onCrash(e);
		}
	}

	private function onCrash(e:Exception)
	{
		var errorStack:Array<StackItem> = CallStack.exceptionStack(true);

		var fileStack:String = '';
		var controlsText:String = '';
		controlsText += '\nConsider taking a Screenshot of this and reporting it\n';
		controlsText += '\nPress SPACE to go to our GitHub Page\n';
		controlsText += '\nPress ESCAPE to return to the Main Menu\n';
		for (item in errorStack)
		{
			switch (item)
			{
				case FilePos(s, file, line, column):
					fileStack = '${file} (line ${line})\n';
				default:
					#if sys
					Sys.println(item);
					#end
			}
		}

		return FlxG.switchState(Type.createInstance(CrashHandler, [
			'= a Critical Error has occurred =
				${fileStack}\nCaught: ${e}\n
				${controlsText}'
		]));
	}
}