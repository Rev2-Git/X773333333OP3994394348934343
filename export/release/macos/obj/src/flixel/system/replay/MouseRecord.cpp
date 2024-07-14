// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_replay_MouseRecord
#include <flixel/system/replay/MouseRecord.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fa93722f50df8cd4_32_new,"flixel.system.replay.MouseRecord","new",0xbd087b2e,"flixel.system.replay.MouseRecord.new","flixel/system/replay/MouseRecord.hx",32,0x6a00bda3)
namespace flixel{
namespace _hx_system{
namespace replay{

void MouseRecord_obj::__construct(int x,int y,int button,int wheel){
            	HX_STACKFRAME(&_hx_pos_fa93722f50df8cd4_32_new)
HXLINE(  33)		this->x = x;
HXLINE(  34)		this->y = y;
HXLINE(  35)		this->button = button;
HXLINE(  36)		this->wheel = wheel;
            	}

Dynamic MouseRecord_obj::__CreateEmpty() { return new MouseRecord_obj; }

void *MouseRecord_obj::_hx_vtable = 0;

Dynamic MouseRecord_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MouseRecord_obj > _hx_result = new MouseRecord_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool MouseRecord_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a5458c4;
}


MouseRecord_obj::MouseRecord_obj()
{
}

::hx::Val MouseRecord_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { return ::hx::Val( wheel ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return ::hx::Val( button ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MouseRecord_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { wheel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseRecord_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("button",f2,61,e0,d9));
	outFields->push(HX_("wheel",9b,34,ba,c9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MouseRecord_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(MouseRecord_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsInt,(int)offsetof(MouseRecord_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsInt,(int)offsetof(MouseRecord_obj,button),HX_("button",f2,61,e0,d9)},
	{::hx::fsInt,(int)offsetof(MouseRecord_obj,wheel),HX_("wheel",9b,34,ba,c9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MouseRecord_obj_sStaticStorageInfo = 0;
#endif

static ::String MouseRecord_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("button",f2,61,e0,d9),
	HX_("wheel",9b,34,ba,c9),
	::String(null()) };

::hx::Class MouseRecord_obj::__mClass;

void MouseRecord_obj::__register()
{
	MouseRecord_obj _hx_dummy;
	MouseRecord_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.replay.MouseRecord",3c,0c,4c,ad);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MouseRecord_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MouseRecord_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MouseRecord_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MouseRecord_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace replay
