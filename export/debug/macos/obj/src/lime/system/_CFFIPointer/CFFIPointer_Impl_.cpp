// Generated by Haxe 4.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_system__CFFIPointer_CFFIPointer_Impl_
#include <lime/system/_CFFIPointer/CFFIPointer_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_9__new,"lime.system._CFFIPointer.CFFIPointer_Impl_","_new",0xca839748,"lime.system._CFFIPointer.CFFIPointer_Impl_._new","lime/system/CFFIPointer.hx",9,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_15_get,"lime.system._CFFIPointer.CFFIPointer_Impl_","get",0xe8d2f88f,"lime.system._CFFIPointer.CFFIPointer_Impl_.get","lime/system/CFFIPointer.hx",15,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_28_equals,"lime.system._CFFIPointer.CFFIPointer_Impl_","equals",0x4ee8f7e6,"lime.system._CFFIPointer.CFFIPointer_Impl_.equals","lime/system/CFFIPointer.hx",28,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_33_equalsPointer,"lime.system._CFFIPointer.CFFIPointer_Impl_","equalsPointer",0x0bf95977,"lime.system._CFFIPointer.CFFIPointer_Impl_.equalsPointer","lime/system/CFFIPointer.hx",33,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_38_greaterThan,"lime.system._CFFIPointer.CFFIPointer_Impl_","greaterThan",0xe66d5a74,"lime.system._CFFIPointer.CFFIPointer_Impl_.greaterThan","lime/system/CFFIPointer.hx",38,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_43_greaterThanPointer,"lime.system._CFFIPointer.CFFIPointer_Impl_","greaterThanPointer",0x36a084a9,"lime.system._CFFIPointer.CFFIPointer_Impl_.greaterThanPointer","lime/system/CFFIPointer.hx",43,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_48_greaterThanOrEqual,"lime.system._CFFIPointer.CFFIPointer_Impl_","greaterThanOrEqual",0x87aca37d,"lime.system._CFFIPointer.CFFIPointer_Impl_.greaterThanOrEqual","lime/system/CFFIPointer.hx",48,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_53_greaterThanOrEqualPointer,"lime.system._CFFIPointer.CFFIPointer_Impl_","greaterThanOrEqualPointer",0x30925ec0,"lime.system._CFFIPointer.CFFIPointer_Impl_.greaterThanOrEqualPointer","lime/system/CFFIPointer.hx",53,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_58_lessThan,"lime.system._CFFIPointer.CFFIPointer_Impl_","lessThan",0xb2fd60c1,"lime.system._CFFIPointer.CFFIPointer_Impl_.lessThan","lime/system/CFFIPointer.hx",58,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_63_lessThanPointer,"lime.system._CFFIPointer.CFFIPointer_Impl_","lessThanPointer",0x7ee991fc,"lime.system._CFFIPointer.CFFIPointer_Impl_.lessThanPointer","lime/system/CFFIPointer.hx",63,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_68_lessThanOrEqual,"lime.system._CFFIPointer.CFFIPointer_Impl_","lessThanOrEqual",0xcff5b0d0,"lime.system._CFFIPointer.CFFIPointer_Impl_.lessThanOrEqual","lime/system/CFFIPointer.hx",68,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_73_lessThanOrEqualPointer,"lime.system._CFFIPointer.CFFIPointer_Impl_","lessThanOrEqualPointer",0x8e8ff1cd,"lime.system._CFFIPointer.CFFIPointer_Impl_.lessThanOrEqualPointer","lime/system/CFFIPointer.hx",73,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_78_notEquals,"lime.system._CFFIPointer.CFFIPointer_Impl_","notEquals",0x4cf4046b,"lime.system._CFFIPointer.CFFIPointer_Impl_.notEquals","lime/system/CFFIPointer.hx",78,0x1e20e50d)
HX_LOCAL_STACK_FRAME(_hx_pos_8fcb9e40ce43c93a_83_notEqualsPointer,"lime.system._CFFIPointer.CFFIPointer_Impl_","notEqualsPointer",0xc9dd1792,"lime.system._CFFIPointer.CFFIPointer_Impl_.notEqualsPointer","lime/system/CFFIPointer.hx",83,0x1e20e50d)
namespace lime{
namespace _hx_system{
namespace _CFFIPointer{

void CFFIPointer_Impl__obj::__construct() { }

Dynamic CFFIPointer_Impl__obj::__CreateEmpty() { return new CFFIPointer_Impl__obj; }

void *CFFIPointer_Impl__obj::_hx_vtable = 0;

Dynamic CFFIPointer_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CFFIPointer_Impl__obj > _hx_result = new CFFIPointer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CFFIPointer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x095ae2e7;
}

 ::Dynamic CFFIPointer_Impl__obj::_new( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_9__new)
            	HX_STACK_ARG(handle,"handle")
HXLINE(   9)
HXDLIN(   9)		return handle;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CFFIPointer_Impl__obj,_new,return )

Float CFFIPointer_Impl__obj::get( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_15_get)
HXLINE(  15)
HXLINE(  16)		if (::hx::IsNotNull( this1 )) {
HXLINE(  19)			return ::lime::_internal::backend::native::NativeCFFI_obj::lime_cffi_get_native_pointer(::hx::DynamicPtr(this1));
            		}
HXLINE(  23)		return ( (Float)(0) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CFFIPointer_Impl__obj,get,return )

bool CFFIPointer_Impl__obj::equals( ::Dynamic a,int b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_28_equals)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  28)
HXDLIN(  28)		return (::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a) == b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,equals,return )

bool CFFIPointer_Impl__obj::equalsPointer( ::Dynamic a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_33_equalsPointer)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  33)
HXDLIN(  33)		Float _hx_tmp = ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a);
HXDLIN(  33)		return (_hx_tmp == ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,equalsPointer,return )

bool CFFIPointer_Impl__obj::greaterThan( ::Dynamic a,int b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_38_greaterThan)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  38)
HXDLIN(  38)		return (::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a) > b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,greaterThan,return )

bool CFFIPointer_Impl__obj::greaterThanPointer( ::Dynamic a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_43_greaterThanPointer)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  43)
HXDLIN(  43)		Float _hx_tmp = ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a);
HXDLIN(  43)		return (_hx_tmp > ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,greaterThanPointer,return )

bool CFFIPointer_Impl__obj::greaterThanOrEqual( ::Dynamic a,int b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_48_greaterThanOrEqual)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  48)
HXDLIN(  48)		return (::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a) >= b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,greaterThanOrEqual,return )

bool CFFIPointer_Impl__obj::greaterThanOrEqualPointer( ::Dynamic a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_53_greaterThanOrEqualPointer)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  53)
HXDLIN(  53)		Float _hx_tmp = ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a);
HXDLIN(  53)		return (_hx_tmp >= ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,greaterThanOrEqualPointer,return )

bool CFFIPointer_Impl__obj::lessThan( ::Dynamic a,int b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_58_lessThan)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  58)
HXDLIN(  58)		return (::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a) < b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,lessThan,return )

bool CFFIPointer_Impl__obj::lessThanPointer( ::Dynamic a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_63_lessThanPointer)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  63)
HXDLIN(  63)		Float _hx_tmp = ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a);
HXDLIN(  63)		return (_hx_tmp < ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,lessThanPointer,return )

bool CFFIPointer_Impl__obj::lessThanOrEqual( ::Dynamic a,int b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_68_lessThanOrEqual)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  68)
HXDLIN(  68)		return (::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a) <= b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,lessThanOrEqual,return )

bool CFFIPointer_Impl__obj::lessThanOrEqualPointer( ::Dynamic a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_73_lessThanOrEqualPointer)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  73)
HXDLIN(  73)		Float _hx_tmp = ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a);
HXDLIN(  73)		return (_hx_tmp <= ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,lessThanOrEqualPointer,return )

bool CFFIPointer_Impl__obj::notEquals( ::Dynamic a,int b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_78_notEquals)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  78)
HXDLIN(  78)		return (::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a) != b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,notEquals,return )

bool CFFIPointer_Impl__obj::notEqualsPointer( ::Dynamic a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_8fcb9e40ce43c93a_83_notEqualsPointer)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  83)
HXDLIN(  83)		Float _hx_tmp = ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(a);
HXDLIN(  83)		return (_hx_tmp != ::lime::_hx_system::_CFFIPointer::CFFIPointer_Impl__obj::get(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CFFIPointer_Impl__obj,notEqualsPointer,return )


CFFIPointer_Impl__obj::CFFIPointer_Impl__obj()
{
}

bool CFFIPointer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lessThan") ) { outValue = lessThan_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"notEquals") ) { outValue = notEquals_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"greaterThan") ) { outValue = greaterThan_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"equalsPointer") ) { outValue = equalsPointer_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lessThanPointer") ) { outValue = lessThanPointer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lessThanOrEqual") ) { outValue = lessThanOrEqual_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"notEqualsPointer") ) { outValue = notEqualsPointer_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"greaterThanPointer") ) { outValue = greaterThanPointer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"greaterThanOrEqual") ) { outValue = greaterThanOrEqual_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lessThanOrEqualPointer") ) { outValue = lessThanOrEqualPointer_dyn(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"greaterThanOrEqualPointer") ) { outValue = greaterThanOrEqualPointer_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CFFIPointer_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CFFIPointer_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class CFFIPointer_Impl__obj::__mClass;

static ::String CFFIPointer_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get",96,80,4e,00),
	HX_("equals",3f,ee,f2,bf),
	HX_("equalsPointer",3e,d0,43,1a),
	HX_("greaterThan",7b,c1,4a,75),
	HX_("greaterThanPointer",82,1c,af,c9),
	HX_("greaterThanOrEqual",56,3b,bb,1a),
	HX_("greaterThanOrEqualPointer",07,64,57,78),
	HX_("lessThan",5a,5f,34,f3),
	HX_("lessThanPointer",83,88,d4,8d),
	HX_("lessThanOrEqual",57,a7,e0,de),
	HX_("lessThanOrEqualPointer",26,ea,29,34),
	HX_("notEquals",b2,cb,db,3c),
	HX_("notEqualsPointer",2b,d7,89,c8),
	::String(null())
};

void CFFIPointer_Impl__obj::__register()
{
	CFFIPointer_Impl__obj _hx_dummy;
	CFFIPointer_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system._CFFIPointer.CFFIPointer_Impl_",e7,27,6d,6d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CFFIPointer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CFFIPointer_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CFFIPointer_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CFFIPointer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CFFIPointer_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace system
} // end namespace _CFFIPointer
