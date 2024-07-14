// Generated by Haxe 4.3.0
#ifndef INCLUDED_openfl_filters__BlurFilter_BlurShader
#define INCLUDED_openfl_filters__BlurFilter_BlurShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilterShader)
HX_DECLARE_CLASS3(openfl,filters,_BlurFilter,BlurShader)

namespace openfl{
namespace filters{
namespace _BlurFilter{


class HXCPP_CLASS_ATTRIBUTES BlurShader_obj : public  ::openfl::filters::BitmapFilterShader_obj
{
	public:
		typedef  ::openfl::filters::BitmapFilterShader_obj super;
		typedef BlurShader_obj OBJ_;
		BlurShader_obj();

	public:
		enum { _hx_ClassId = 0x1415533f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters._BlurFilter.BlurShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.filters._BlurFilter.BlurShader"); }
		static ::hx::ObjectPtr< BlurShader_obj > __new();
		static ::hx::ObjectPtr< BlurShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BlurShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BlurShader",4c,71,5d,8b); }

		void _hx___update();

		 ::openfl::display::ShaderParameter_Float uRadius;
		 ::openfl::display::ShaderParameter_Float uTextureSize;
};

} // end namespace openfl
} // end namespace filters
} // end namespace _BlurFilter

#endif /* INCLUDED_openfl_filters__BlurFilter_BlurShader */ 
