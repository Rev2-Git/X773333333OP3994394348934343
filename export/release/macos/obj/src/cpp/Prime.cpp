// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3ebd15a06a902e93_34__loadPrime,"cpp.Prime","_loadPrime",0xdd360794,"cpp.Prime._loadPrime","/usr/local/lib/haxe/std/cpp/Prime.hx",34,0xaaa199e8)
namespace cpp{

void Prime_obj::__construct() { }

Dynamic Prime_obj::__CreateEmpty() { return new Prime_obj; }

void *Prime_obj::_hx_vtable = 0;

Dynamic Prime_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Prime_obj > _hx_result = new Prime_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Prime_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3aea0524;
}

 ::Dynamic Prime_obj::_loadPrime(::String lib,::String prim,::String signature,::hx::Null< bool >  __o_quietFail){
            		bool quietFail = __o_quietFail.Default(false);
            	HX_STACKFRAME(&_hx_pos_3ebd15a06a902e93_34__loadPrime)
HXLINE(  35)		::cpp::Function<  ::hx::Object *  (const char*) > factory =  ::__hxcpp_cast_get_proc_address(lib,(prim + HX_("__prime",1f,b0,e9,32)),quietFail);
HXLINE(  36)		if (::hx::IsNotNull( factory )) {
HXLINE(  37)			 ::Dynamic func = ( ( ::Dynamic)(factory(signature.utf8_str())) );
HXLINE(  38)			bool _hx_tmp;
HXDLIN(  38)			if (::hx::IsNull( func )) {
HXLINE(  38)				_hx_tmp = !(quietFail);
            			}
            			else {
HXLINE(  38)				_hx_tmp = false;
            			}
HXDLIN(  38)			if (_hx_tmp) {
HXLINE(  39)				HX_STACK_DO_THROW((((HX_("",00,00,00,00) + prim) + HX_(" does not have signature ",0c,77,54,95)) + signature));
            			}
HXLINE(  40)			return func;
            		}
HXLINE(  42)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Prime_obj,_loadPrime,return )


Prime_obj::Prime_obj()
{
}

bool Prime_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_loadPrime") ) { outValue = _loadPrime_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Prime_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Prime_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Prime_obj::__mClass;

static ::String Prime_obj_sStaticFields[] = {
	HX_("_loadPrime",fa,1e,65,3f),
	::String(null())
};

void Prime_obj::__register()
{
	Prime_obj _hx_dummy;
	Prime_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("cpp.Prime",94,dd,f4,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Prime_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Prime_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Prime_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Prime_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Prime_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cpp
