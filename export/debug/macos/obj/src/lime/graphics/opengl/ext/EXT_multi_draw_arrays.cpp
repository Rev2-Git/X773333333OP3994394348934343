// Generated by Haxe 4.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_multi_draw_arrays
#include <lime/graphics/opengl/ext/EXT_multi_draw_arrays.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8283b78ee08036b7_5_new,"lime.graphics.opengl.ext.EXT_multi_draw_arrays","new",0xcf92f0e1,"lime.graphics.opengl.ext.EXT_multi_draw_arrays.new","lime/graphics/opengl/ext/EXT_multi_draw_arrays.hx",5,0xea834451)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_multi_draw_arrays_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8283b78ee08036b7_5_new)
            	HX_STACK_THIS(this)
HXLINE(   5)
            	}

Dynamic EXT_multi_draw_arrays_obj::__CreateEmpty() { return new EXT_multi_draw_arrays_obj; }

void *EXT_multi_draw_arrays_obj::_hx_vtable = 0;

Dynamic EXT_multi_draw_arrays_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_multi_draw_arrays_obj > _hx_result = new EXT_multi_draw_arrays_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_multi_draw_arrays_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1abc331f;
}


EXT_multi_draw_arrays_obj::EXT_multi_draw_arrays_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EXT_multi_draw_arrays_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EXT_multi_draw_arrays_obj_sStaticStorageInfo = 0;
#endif

::hx::Class EXT_multi_draw_arrays_obj::__mClass;

void EXT_multi_draw_arrays_obj::__register()
{
	EXT_multi_draw_arrays_obj _hx_dummy;
	EXT_multi_draw_arrays_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_multi_draw_arrays",6f,ec,76,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< EXT_multi_draw_arrays_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_multi_draw_arrays_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_multi_draw_arrays_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
