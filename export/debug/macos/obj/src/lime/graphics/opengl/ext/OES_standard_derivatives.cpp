// Generated by Haxe 4.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_standard_derivatives
#include <lime/graphics/opengl/ext/OES_standard_derivatives.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_20db0725ba88843e_7_new,"lime.graphics.opengl.ext.OES_standard_derivatives","new",0x79508820,"lime.graphics.opengl.ext.OES_standard_derivatives.new","lime/graphics/opengl/ext/OES_standard_derivatives.hx",7,0x62d66dee)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_standard_derivatives_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_20db0725ba88843e_7_new)
            	HX_STACK_THIS(this)
HXLINE(   7)
HXDLIN(   7)		this->FRAGMENT_SHADER_DERIVATIVE_HINT_OES = 35723;
            	}

Dynamic OES_standard_derivatives_obj::__CreateEmpty() { return new OES_standard_derivatives_obj; }

void *OES_standard_derivatives_obj::_hx_vtable = 0;

Dynamic OES_standard_derivatives_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OES_standard_derivatives_obj > _hx_result = new OES_standard_derivatives_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_standard_derivatives_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x72fdac0a;
}


OES_standard_derivatives_obj::OES_standard_derivatives_obj()
{
}

::hx::Val OES_standard_derivatives_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 35:
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER_DERIVATIVE_HINT_OES") ) { return ::hx::Val( FRAGMENT_SHADER_DERIVATIVE_HINT_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OES_standard_derivatives_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 35:
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER_DERIVATIVE_HINT_OES") ) { FRAGMENT_SHADER_DERIVATIVE_HINT_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_standard_derivatives_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("FRAGMENT_SHADER_DERIVATIVE_HINT_OES",f2,8e,a2,8a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OES_standard_derivatives_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OES_standard_derivatives_obj,FRAGMENT_SHADER_DERIVATIVE_HINT_OES),HX_("FRAGMENT_SHADER_DERIVATIVE_HINT_OES",f2,8e,a2,8a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OES_standard_derivatives_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_standard_derivatives_obj_sMemberFields[] = {
	HX_("FRAGMENT_SHADER_DERIVATIVE_HINT_OES",f2,8e,a2,8a),
	::String(null()) };

::hx::Class OES_standard_derivatives_obj::__mClass;

void OES_standard_derivatives_obj::__register()
{
	OES_standard_derivatives_obj _hx_dummy;
	OES_standard_derivatives_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.OES_standard_derivatives",2e,38,aa,d0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OES_standard_derivatives_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OES_standard_derivatives_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_standard_derivatives_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_standard_derivatives_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
