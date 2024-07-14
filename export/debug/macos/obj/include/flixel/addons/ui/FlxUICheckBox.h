// Generated by Haxe 4.3.0
#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#define INCLUDED_flixel_addons_ui_FlxUICheckBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIButton)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICheckBox)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUICheckBox_obj : public  ::flixel::addons::ui::FlxUIGroup_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUICheckBox_obj OBJ_;
		FlxUICheckBox_obj();

	public:
		enum { _hx_ClassId = 0x3b526ac2 };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic Box, ::Dynamic Check,::String Label, ::Dynamic __o_LabelW,::cpp::VirtualArray Params, ::Dynamic Callback);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUICheckBox")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUICheckBox"); }
		static ::hx::ObjectPtr< FlxUICheckBox_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic Box, ::Dynamic Check,::String Label, ::Dynamic __o_LabelW,::cpp::VirtualArray Params, ::Dynamic Callback);
		static ::hx::ObjectPtr< FlxUICheckBox_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic Box, ::Dynamic Check,::String Label, ::Dynamic __o_LabelW,::cpp::VirtualArray Params, ::Dynamic Callback);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUICheckBox_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUICheckBox",69,db,c6,bd); }

		static void __boot();
		static ::String CLICK_EVENT;
		 ::flixel::FlxSprite box;
		 ::flixel::FlxSprite mark;
		 ::flixel::addons::ui::FlxUIButton button;
		Float max_width;
		bool checked;
		::cpp::VirtualArray params;
		bool textIsClickable;
		bool checkbox_dirty;
		Float textX;
		Float textY;
		Float box_space;
		bool skipButtonUpdate;
		 ::Dynamic callback;
		Dynamic callback_dyn() { return callback;}
		bool set_skipButtonUpdate(bool b);
		::Dynamic set_skipButtonUpdate_dyn();

		::cpp::VirtualArray set_params(::cpp::VirtualArray p);
		::Dynamic set_params_dyn();

		int set_color(int _tmp_Value);

		 ::flixel::addons::ui::FlxUIText setLabel( ::flixel::addons::ui::FlxUIText t);
		::Dynamic setLabel_dyn();

		 ::flixel::addons::ui::FlxUIText getLabel();
		::Dynamic getLabel_dyn();

		bool set_visible(bool Value);

		void anchorTime( ::flixel::util::FlxTimer f);
		::Dynamic anchorTime_dyn();

		Float set_textX(Float n);
		::Dynamic set_textX_dyn();

		Float set_textY(Float n);
		::Dynamic set_textY_dyn();

		void anchorLabelX();
		::Dynamic anchorLabelX_dyn();

		void anchorLabelY();
		::Dynamic anchorLabelY_dyn();

		void destroy();

		::String get_text();
		::Dynamic get_text_dyn();

		::String set_text(::String value);
		::Dynamic set_text_dyn();

		void update(Float elapsed);

		bool set_checked(bool b);
		::Dynamic set_checked_dyn();

		void _clickCheck();
		::Dynamic _clickCheck_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUICheckBox */ 
