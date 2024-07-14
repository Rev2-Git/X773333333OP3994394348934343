// Generated by Haxe 4.3.4
#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#define INCLUDED_openfl_filters_BitmapFilterShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderInput_openfl_display_BitmapData)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilterShader)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES BitmapFilterShader_obj : public  ::openfl::display::Shader_obj
{
	public:
		typedef  ::openfl::display::Shader_obj super;
		typedef BitmapFilterShader_obj OBJ_;
		BitmapFilterShader_obj();

	public:
		enum { _hx_ClassId = 0x253b4db3 };

		void __construct( ::openfl::utils::ByteArrayData code);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters.BitmapFilterShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.filters.BitmapFilterShader"); }
		static ::hx::ObjectPtr< BitmapFilterShader_obj > __new( ::openfl::utils::ByteArrayData code);
		static ::hx::ObjectPtr< BitmapFilterShader_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData code);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BitmapFilterShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BitmapFilterShader",ac,17,29,5e); }

		 ::openfl::display::ShaderParameter_Float openfl_Position;
		 ::openfl::display::ShaderParameter_Float openfl_TextureCoord;
		 ::openfl::display::ShaderParameter_Float openfl_Matrix;
		 ::openfl::display::ShaderParameter_Float openfl_TextureSize;
		 ::openfl::display::ShaderInput_openfl_display_BitmapData openfl_Texture;
};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_BitmapFilterShader */ 
