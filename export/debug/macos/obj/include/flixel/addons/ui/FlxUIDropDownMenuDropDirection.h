// Generated by Haxe 4.3.0
#ifndef INCLUDED_flixel_addons_ui_FlxUIDropDownMenuDropDirection
#define INCLUDED_flixel_addons_ui_FlxUIDropDownMenuDropDirection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIDropDownMenuDropDirection)
namespace flixel{
namespace addons{
namespace ui{


class FlxUIDropDownMenuDropDirection_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxUIDropDownMenuDropDirection_obj OBJ_;

	public:
		FlxUIDropDownMenuDropDirection_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.addons.ui.FlxUIDropDownMenuDropDirection",6b,02,fd,78); }
		::String __ToString() const { return HX_("FlxUIDropDownMenuDropDirection.",74,13,21,5a) + _hx_tag; }

		static ::flixel::addons::ui::FlxUIDropDownMenuDropDirection Automatic;
		static inline ::flixel::addons::ui::FlxUIDropDownMenuDropDirection Automatic_dyn() { return Automatic; }
		static ::flixel::addons::ui::FlxUIDropDownMenuDropDirection Down;
		static inline ::flixel::addons::ui::FlxUIDropDownMenuDropDirection Down_dyn() { return Down; }
		static ::flixel::addons::ui::FlxUIDropDownMenuDropDirection Up;
		static inline ::flixel::addons::ui::FlxUIDropDownMenuDropDirection Up_dyn() { return Up; }
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIDropDownMenuDropDirection */ 
