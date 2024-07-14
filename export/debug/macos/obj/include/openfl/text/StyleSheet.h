// Generated by Haxe 4.3.0
#ifndef INCLUDED_openfl_text_StyleSheet
#define INCLUDED_openfl_text_StyleSheet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,StyleSheet)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace openfl{
namespace text{


class HXCPP_CLASS_ATTRIBUTES StyleSheet_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef StyleSheet_obj OBJ_;
		StyleSheet_obj();

	public:
		enum { _hx_ClassId = 0x1cad992f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.text.StyleSheet")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.text.StyleSheet"); }
		static ::hx::ObjectPtr< StyleSheet_obj > __new();
		static ::hx::ObjectPtr< StyleSheet_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StyleSheet_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StyleSheet",ce,3f,c7,f2); }

		static void __boot();
		static ::Array< ::String > _hx___supportedStyles;
		::Array< ::String > _hx___styleNames;
		bool _hx___styleNamesDirty;
		 ::haxe::ds::StringMap _hx___styles;
		void clear();
		::Dynamic clear_dyn();

		 ::Dynamic getStyle(::String styleName);
		::Dynamic getStyle_dyn();

		void parseCSS(::String CSSText);
		::Dynamic parseCSS_dyn();

		void setStyle(::String styleName, ::Dynamic styleObject);
		::Dynamic setStyle_dyn();

		 ::openfl::text::TextFormat transform( ::Dynamic formatObject);
		::Dynamic transform_dyn();

		void _hx___applyStyle(::String styleName, ::openfl::text::TextFormat textFormat);
		::Dynamic _hx___applyStyle_dyn();

		void _hx___applyStyleObject( ::Dynamic styleObject, ::openfl::text::TextFormat textFormat);
		::Dynamic _hx___applyStyleObject_dyn();

		::String _hx___parseFont(::String fontFamily);
		::Dynamic _hx___parseFont_dyn();

		::Array< ::String > get_styleNames();
		::Dynamic get_styleNames_dyn();

};

} // end namespace openfl
} // end namespace text

#endif /* INCLUDED_openfl_text_StyleSheet */ 
