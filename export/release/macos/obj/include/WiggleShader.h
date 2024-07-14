// Generated by Haxe 4.3.4
#ifndef INCLUDED_WiggleShader
#define INCLUDED_WiggleShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
HX_DECLARE_CLASS0(WiggleShader)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Int)



class HXCPP_CLASS_ATTRIBUTES WiggleShader_obj : public  ::flixel::graphics::tile::FlxGraphicsShader_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxGraphicsShader_obj super;
		typedef WiggleShader_obj OBJ_;
		WiggleShader_obj();

	public:
		enum { _hx_ClassId = 0x34363e10 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="WiggleShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"WiggleShader"); }
		static ::hx::ObjectPtr< WiggleShader_obj > __new();
		static ::hx::ObjectPtr< WiggleShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WiggleShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WiggleShader",50,eb,54,4b); }

		 ::openfl::display::ShaderParameter_Float tx;
		 ::openfl::display::ShaderParameter_Float uTime;
		 ::openfl::display::ShaderParameter_Int effectType;
		 ::openfl::display::ShaderParameter_Float uSpeed;
		 ::openfl::display::ShaderParameter_Float uFrequency;
		 ::openfl::display::ShaderParameter_Float uWaveAmplitude;
};


#endif /* INCLUDED_WiggleShader */ 
