// Generated by Haxe 4.3.0
#ifndef INCLUDED_flixel_input_gamepad_FlxAnalogToDigitalMode
#define INCLUDED_flixel_input_gamepad_FlxAnalogToDigitalMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxAnalogToDigitalMode)
namespace flixel{
namespace input{
namespace gamepad{


class FlxAnalogToDigitalMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxAnalogToDigitalMode_obj OBJ_;

	public:
		FlxAnalogToDigitalMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.input.gamepad.FlxAnalogToDigitalMode",81,45,84,3c); }
		::String __ToString() const { return HX_("FlxAnalogToDigitalMode.",50,76,39,a7) + _hx_tag; }

		static ::flixel::input::gamepad::FlxAnalogToDigitalMode BOTH;
		static inline ::flixel::input::gamepad::FlxAnalogToDigitalMode BOTH_dyn() { return BOTH; }
		static ::flixel::input::gamepad::FlxAnalogToDigitalMode ONLY_ANALOG;
		static inline ::flixel::input::gamepad::FlxAnalogToDigitalMode ONLY_ANALOG_dyn() { return ONLY_ANALOG; }
		static ::flixel::input::gamepad::FlxAnalogToDigitalMode ONLY_DIGITAL;
		static inline ::flixel::input::gamepad::FlxAnalogToDigitalMode ONLY_DIGITAL_dyn() { return ONLY_DIGITAL; }
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_FlxAnalogToDigitalMode */ 
