// Generated by Haxe 4.3.4
#ifndef INCLUDED_flixel_addons_display_BackdropBlitMode
#define INCLUDED_flixel_addons_display_BackdropBlitMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,display,BackdropBlitMode)
namespace flixel{
namespace addons{
namespace display{


class BackdropBlitMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef BackdropBlitMode_obj OBJ_;

	public:
		BackdropBlitMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.addons.display.BackdropBlitMode",c3,62,23,a3); }
		::String __ToString() const { return HX_("BackdropBlitMode.",20,7e,0f,52) + _hx_tag; }

		static ::flixel::addons::display::BackdropBlitMode AUTO;
		static inline ::flixel::addons::display::BackdropBlitMode AUTO_dyn() { return AUTO; }
		static ::flixel::addons::display::BackdropBlitMode MAX_TILES(int tiles);
		static ::Dynamic MAX_TILES_dyn();
		static ::flixel::addons::display::BackdropBlitMode MAX_TILES_XY(int x,int y);
		static ::Dynamic MAX_TILES_XY_dyn();
		static ::flixel::addons::display::BackdropBlitMode SPLIT(int portions);
		static ::Dynamic SPLIT_dyn();
};

} // end namespace flixel
} // end namespace addons
} // end namespace display

#endif /* INCLUDED_flixel_addons_display_BackdropBlitMode */ 
