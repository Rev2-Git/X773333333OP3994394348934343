// Generated by Haxe 4.3.4
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#define INCLUDED_flixel_tile_FlxTilemapAutoTiling

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,tile,FlxTilemapAutoTiling)
namespace flixel{
namespace tile{


class FlxTilemapAutoTiling_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxTilemapAutoTiling_obj OBJ_;

	public:
		FlxTilemapAutoTiling_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.tile.FlxTilemapAutoTiling",84,9e,85,97); }
		::String __ToString() const { return HX_("FlxTilemapAutoTiling.",98,ad,9e,db) + _hx_tag; }

		static ::flixel::tile::FlxTilemapAutoTiling ALT;
		static inline ::flixel::tile::FlxTilemapAutoTiling ALT_dyn() { return ALT; }
		static ::flixel::tile::FlxTilemapAutoTiling AUTO;
		static inline ::flixel::tile::FlxTilemapAutoTiling AUTO_dyn() { return AUTO; }
		static ::flixel::tile::FlxTilemapAutoTiling FULL;
		static inline ::flixel::tile::FlxTilemapAutoTiling FULL_dyn() { return FULL; }
		static ::flixel::tile::FlxTilemapAutoTiling OFF;
		static inline ::flixel::tile::FlxTilemapAutoTiling OFF_dyn() { return OFF; }
};

} // end namespace flixel
} // end namespace tile

#endif /* INCLUDED_flixel_tile_FlxTilemapAutoTiling */ 
