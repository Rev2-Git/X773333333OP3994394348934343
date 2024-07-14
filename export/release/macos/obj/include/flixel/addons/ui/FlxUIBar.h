// Generated by Haxe 4.3.4
#ifndef INCLUDED_flixel_addons_ui_FlxUIBar
#define INCLUDED_flixel_addons_ui_FlxUIBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIBar)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,ui,FlxBarFillDirection)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUIBar_obj : public  ::flixel::ui::FlxBar_obj
{
	public:
		typedef  ::flixel::ui::FlxBar_obj super;
		typedef FlxUIBar_obj OBJ_;
		FlxUIBar_obj();

	public:
		enum { _hx_ClassId = 0x38192630 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::flixel::ui::FlxBarFillDirection direction,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic parentRef,::String __o_variable,::hx::Null< Float >  __o_min,::hx::Null< Float >  __o_max,::hx::Null< bool >  __o_showBorder);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUIBar")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUIBar"); }
		static ::hx::ObjectPtr< FlxUIBar_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::flixel::ui::FlxBarFillDirection direction,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic parentRef,::String __o_variable,::hx::Null< Float >  __o_min,::hx::Null< Float >  __o_max,::hx::Null< bool >  __o_showBorder);
		static ::hx::ObjectPtr< FlxUIBar_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::flixel::ui::FlxBarFillDirection direction,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height, ::Dynamic parentRef,::String __o_variable,::hx::Null< Float >  __o_min,::hx::Null< Float >  __o_max,::hx::Null< bool >  __o_showBorder);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUIBar_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUIBar",4d,e6,2e,4b); }

		::String name;
		 ::Dynamic style;
		::cpp::VirtualArray params;
		bool broadcastToFlxUI;
		 ::flixel::FlxSprite clone();

		 ::Dynamic set_style( ::Dynamic Style);
		::Dynamic set_style_dyn();

		void resize(Float w,Float h);
		::Dynamic resize_dyn();

		::cpp::VirtualArray set_params(::cpp::VirtualArray p);
		::Dynamic set_params_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIBar */ 
