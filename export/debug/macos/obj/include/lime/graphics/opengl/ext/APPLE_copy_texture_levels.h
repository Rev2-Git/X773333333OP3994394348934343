// Generated by Haxe 4.3.0
#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_copy_texture_levels
#define INCLUDED_lime_graphics_opengl_ext_APPLE_copy_texture_levels

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_361d9d8d8f9c4e77_5_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,APPLE_copy_texture_levels)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES APPLE_copy_texture_levels_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef APPLE_copy_texture_levels_obj OBJ_;
		APPLE_copy_texture_levels_obj();

	public:
		enum { _hx_ClassId = 0x75f9528a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.APPLE_copy_texture_levels")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.APPLE_copy_texture_levels"); }

		inline static ::hx::ObjectPtr< APPLE_copy_texture_levels_obj > __new() {
			::hx::ObjectPtr< APPLE_copy_texture_levels_obj > __this = new APPLE_copy_texture_levels_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< APPLE_copy_texture_levels_obj > __alloc(::hx::Ctx *_hx_ctx) {
			APPLE_copy_texture_levels_obj *__this = (APPLE_copy_texture_levels_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(APPLE_copy_texture_levels_obj), false, "lime.graphics.opengl.ext.APPLE_copy_texture_levels"));
			*(void **)__this = APPLE_copy_texture_levels_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_361d9d8d8f9c4e77_5_new)
            	HX_STACK_THIS(__this)
HXLINE(   5)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~APPLE_copy_texture_levels_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("APPLE_copy_texture_levels",58,36,ee,e5); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_APPLE_copy_texture_levels */ 
