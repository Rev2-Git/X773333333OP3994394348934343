// Generated by Haxe 4.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_debug_label
#include <lime/graphics/opengl/ext/EXT_debug_label.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7a3489e7f3921050_4_new,"lime.graphics.opengl.ext.EXT_debug_label","new",0x2646605a,"lime.graphics.opengl.ext.EXT_debug_label.new","lime/graphics/opengl/ext/EXT_debug_label.hx",4,0xe58ba178)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_debug_label_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7a3489e7f3921050_4_new)
            	HX_STACK_THIS(this)
HXLINE(   4)
HXLINE(  11)		this->VERTEX_ARRAY_OBJECT_EXT = 37204;
HXLINE(  10)		this->QUERY_OBJECT_EXT = 37203;
HXLINE(   9)		this->BUFFER_OBJECT_EXT = 37201;
HXLINE(   8)		this->SHADER_OBJECT_EXT = 35656;
HXLINE(   7)		this->PROGRAM_OBJECT_EXT = 35648;
HXLINE(   6)		this->PROGRAM_PIPELINE_OBJECT_EXT = 35407;
            	}

Dynamic EXT_debug_label_obj::__CreateEmpty() { return new EXT_debug_label_obj; }

void *EXT_debug_label_obj::_hx_vtable = 0;

Dynamic EXT_debug_label_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_debug_label_obj > _hx_result = new EXT_debug_label_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_debug_label_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7c5ec938;
}


EXT_debug_label_obj::EXT_debug_label_obj()
{
}

::hx::Val EXT_debug_label_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"QUERY_OBJECT_EXT") ) { return ::hx::Val( QUERY_OBJECT_EXT ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SHADER_OBJECT_EXT") ) { return ::hx::Val( SHADER_OBJECT_EXT ); }
		if (HX_FIELD_EQ(inName,"BUFFER_OBJECT_EXT") ) { return ::hx::Val( BUFFER_OBJECT_EXT ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PROGRAM_OBJECT_EXT") ) { return ::hx::Val( PROGRAM_OBJECT_EXT ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"VERTEX_ARRAY_OBJECT_EXT") ) { return ::hx::Val( VERTEX_ARRAY_OBJECT_EXT ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"PROGRAM_PIPELINE_OBJECT_EXT") ) { return ::hx::Val( PROGRAM_PIPELINE_OBJECT_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EXT_debug_label_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"QUERY_OBJECT_EXT") ) { QUERY_OBJECT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SHADER_OBJECT_EXT") ) { SHADER_OBJECT_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BUFFER_OBJECT_EXT") ) { BUFFER_OBJECT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PROGRAM_OBJECT_EXT") ) { PROGRAM_OBJECT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"VERTEX_ARRAY_OBJECT_EXT") ) { VERTEX_ARRAY_OBJECT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"PROGRAM_PIPELINE_OBJECT_EXT") ) { PROGRAM_PIPELINE_OBJECT_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_debug_label_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("PROGRAM_PIPELINE_OBJECT_EXT",63,14,f0,5a));
	outFields->push(HX_("PROGRAM_OBJECT_EXT",fc,24,24,03));
	outFields->push(HX_("SHADER_OBJECT_EXT",db,fd,ea,90));
	outFields->push(HX_("BUFFER_OBJECT_EXT",e0,e7,70,6a));
	outFields->push(HX_("QUERY_OBJECT_EXT",f8,86,e7,d9));
	outFields->push(HX_("VERTEX_ARRAY_OBJECT_EXT",82,d2,68,2c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EXT_debug_label_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EXT_debug_label_obj,PROGRAM_PIPELINE_OBJECT_EXT),HX_("PROGRAM_PIPELINE_OBJECT_EXT",63,14,f0,5a)},
	{::hx::fsInt,(int)offsetof(EXT_debug_label_obj,PROGRAM_OBJECT_EXT),HX_("PROGRAM_OBJECT_EXT",fc,24,24,03)},
	{::hx::fsInt,(int)offsetof(EXT_debug_label_obj,SHADER_OBJECT_EXT),HX_("SHADER_OBJECT_EXT",db,fd,ea,90)},
	{::hx::fsInt,(int)offsetof(EXT_debug_label_obj,BUFFER_OBJECT_EXT),HX_("BUFFER_OBJECT_EXT",e0,e7,70,6a)},
	{::hx::fsInt,(int)offsetof(EXT_debug_label_obj,QUERY_OBJECT_EXT),HX_("QUERY_OBJECT_EXT",f8,86,e7,d9)},
	{::hx::fsInt,(int)offsetof(EXT_debug_label_obj,VERTEX_ARRAY_OBJECT_EXT),HX_("VERTEX_ARRAY_OBJECT_EXT",82,d2,68,2c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EXT_debug_label_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_debug_label_obj_sMemberFields[] = {
	HX_("PROGRAM_PIPELINE_OBJECT_EXT",63,14,f0,5a),
	HX_("PROGRAM_OBJECT_EXT",fc,24,24,03),
	HX_("SHADER_OBJECT_EXT",db,fd,ea,90),
	HX_("BUFFER_OBJECT_EXT",e0,e7,70,6a),
	HX_("QUERY_OBJECT_EXT",f8,86,e7,d9),
	HX_("VERTEX_ARRAY_OBJECT_EXT",82,d2,68,2c),
	::String(null()) };

::hx::Class EXT_debug_label_obj::__mClass;

void EXT_debug_label_obj::__register()
{
	EXT_debug_label_obj _hx_dummy;
	EXT_debug_label_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_debug_label",68,eb,8c,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EXT_debug_label_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EXT_debug_label_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_debug_label_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_debug_label_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
