// Generated by Haxe 4.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_utils__LogLevel_LogLevel_Impl_
#include <lime/utils/_LogLevel/LogLevel_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_599a65605475e26e_14_gt,"lime.utils._LogLevel.LogLevel_Impl_","gt",0xa56de316,"lime.utils._LogLevel.LogLevel_Impl_.gt","lime/utils/LogLevel.hx",14,0x68636f66)
HX_LOCAL_STACK_FRAME(_hx_pos_599a65605475e26e_19_gte,"lime.utils._LogLevel.LogLevel_Impl_","gte",0x1ab8d08f,"lime.utils._LogLevel.LogLevel_Impl_.gte","lime/utils/LogLevel.hx",19,0x68636f66)
HX_LOCAL_STACK_FRAME(_hx_pos_599a65605475e26e_24_lt,"lime.utils._LogLevel.LogLevel_Impl_","lt",0xa56de771,"lime.utils._LogLevel.LogLevel_Impl_.lt","lime/utils/LogLevel.hx",24,0x68636f66)
HX_LOCAL_STACK_FRAME(_hx_pos_599a65605475e26e_29_lte,"lime.utils._LogLevel.LogLevel_Impl_","lte",0x1abc9bd4,"lime.utils._LogLevel.LogLevel_Impl_.lte","lime/utils/LogLevel.hx",29,0x68636f66)
HX_LOCAL_STACK_FRAME(_hx_pos_599a65605475e26e_5_boot,"lime.utils._LogLevel.LogLevel_Impl_","boot",0x43abd95b,"lime.utils._LogLevel.LogLevel_Impl_.boot","lime/utils/LogLevel.hx",5,0x68636f66)
HX_LOCAL_STACK_FRAME(_hx_pos_599a65605475e26e_6_boot,"lime.utils._LogLevel.LogLevel_Impl_","boot",0x43abd95b,"lime.utils._LogLevel.LogLevel_Impl_.boot","lime/utils/LogLevel.hx",6,0x68636f66)
HX_LOCAL_STACK_FRAME(_hx_pos_599a65605475e26e_7_boot,"lime.utils._LogLevel.LogLevel_Impl_","boot",0x43abd95b,"lime.utils._LogLevel.LogLevel_Impl_.boot","lime/utils/LogLevel.hx",7,0x68636f66)
HX_LOCAL_STACK_FRAME(_hx_pos_599a65605475e26e_8_boot,"lime.utils._LogLevel.LogLevel_Impl_","boot",0x43abd95b,"lime.utils._LogLevel.LogLevel_Impl_.boot","lime/utils/LogLevel.hx",8,0x68636f66)
HX_LOCAL_STACK_FRAME(_hx_pos_599a65605475e26e_9_boot,"lime.utils._LogLevel.LogLevel_Impl_","boot",0x43abd95b,"lime.utils._LogLevel.LogLevel_Impl_.boot","lime/utils/LogLevel.hx",9,0x68636f66)
HX_LOCAL_STACK_FRAME(_hx_pos_599a65605475e26e_10_boot,"lime.utils._LogLevel.LogLevel_Impl_","boot",0x43abd95b,"lime.utils._LogLevel.LogLevel_Impl_.boot","lime/utils/LogLevel.hx",10,0x68636f66)
namespace lime{
namespace utils{
namespace _LogLevel{

void LogLevel_Impl__obj::__construct() { }

Dynamic LogLevel_Impl__obj::__CreateEmpty() { return new LogLevel_Impl__obj; }

void *LogLevel_Impl__obj::_hx_vtable = 0;

Dynamic LogLevel_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LogLevel_Impl__obj > _hx_result = new LogLevel_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LogLevel_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x68c36643;
}

int LogLevel_Impl__obj::NONE;

int LogLevel_Impl__obj::ERROR;

int LogLevel_Impl__obj::WARN;

int LogLevel_Impl__obj::INFO;

int LogLevel_Impl__obj::DEBUG;

int LogLevel_Impl__obj::VERBOSE;

bool LogLevel_Impl__obj::gt(int a,int b){
            	HX_STACKFRAME(&_hx_pos_599a65605475e26e_14_gt)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  14)
HXDLIN(  14)		return (a > b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LogLevel_Impl__obj,gt,return )

bool LogLevel_Impl__obj::gte(int a,int b){
            	HX_STACKFRAME(&_hx_pos_599a65605475e26e_19_gte)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  19)
HXDLIN(  19)		return (a >= b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LogLevel_Impl__obj,gte,return )

bool LogLevel_Impl__obj::lt(int a,int b){
            	HX_STACKFRAME(&_hx_pos_599a65605475e26e_24_lt)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  24)
HXDLIN(  24)		return (a < b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LogLevel_Impl__obj,lt,return )

bool LogLevel_Impl__obj::lte(int a,int b){
            	HX_STACKFRAME(&_hx_pos_599a65605475e26e_29_lte)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  29)
HXDLIN(  29)		return (a <= b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LogLevel_Impl__obj,lte,return )


LogLevel_Impl__obj::LogLevel_Impl__obj()
{
}

bool LogLevel_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gt") ) { outValue = gt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lt") ) { outValue = lt_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"gte") ) { outValue = gte_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lte") ) { outValue = lte_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LogLevel_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo LogLevel_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &LogLevel_Impl__obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsInt,(void *) &LogLevel_Impl__obj::ERROR,HX_("ERROR",a8,03,18,f1)},
	{::hx::fsInt,(void *) &LogLevel_Impl__obj::WARN,HX_("WARN",46,2a,b3,39)},
	{::hx::fsInt,(void *) &LogLevel_Impl__obj::INFO,HX_("INFO",6e,00,7c,30)},
	{::hx::fsInt,(void *) &LogLevel_Impl__obj::DEBUG,HX_("DEBUG",33,8a,0d,55)},
	{::hx::fsInt,(void *) &LogLevel_Impl__obj::VERBOSE,HX_("VERBOSE",62,ab,8d,f1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void LogLevel_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogLevel_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(LogLevel_Impl__obj::ERROR,"ERROR");
	HX_MARK_MEMBER_NAME(LogLevel_Impl__obj::WARN,"WARN");
	HX_MARK_MEMBER_NAME(LogLevel_Impl__obj::INFO,"INFO");
	HX_MARK_MEMBER_NAME(LogLevel_Impl__obj::DEBUG,"DEBUG");
	HX_MARK_MEMBER_NAME(LogLevel_Impl__obj::VERBOSE,"VERBOSE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LogLevel_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogLevel_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(LogLevel_Impl__obj::ERROR,"ERROR");
	HX_VISIT_MEMBER_NAME(LogLevel_Impl__obj::WARN,"WARN");
	HX_VISIT_MEMBER_NAME(LogLevel_Impl__obj::INFO,"INFO");
	HX_VISIT_MEMBER_NAME(LogLevel_Impl__obj::DEBUG,"DEBUG");
	HX_VISIT_MEMBER_NAME(LogLevel_Impl__obj::VERBOSE,"VERBOSE");
};

#endif

::hx::Class LogLevel_Impl__obj::__mClass;

static ::String LogLevel_Impl__obj_sStaticFields[] = {
	HX_("NONE",b8,da,ca,33),
	HX_("ERROR",a8,03,18,f1),
	HX_("WARN",46,2a,b3,39),
	HX_("INFO",6e,00,7c,30),
	HX_("DEBUG",33,8a,0d,55),
	HX_("VERBOSE",62,ab,8d,f1),
	HX_("gt",2d,5a,00,00),
	HX_("gte",98,8d,4e,00),
	HX_("lt",88,5e,00,00),
	HX_("lte",dd,58,52,00),
	::String(null())
};

void LogLevel_Impl__obj::__register()
{
	LogLevel_Impl__obj _hx_dummy;
	LogLevel_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils._LogLevel.LogLevel_Impl_",e5,1b,96,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LogLevel_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LogLevel_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LogLevel_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< LogLevel_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LogLevel_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LogLevel_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LogLevel_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LogLevel_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_599a65605475e26e_5_boot)
HXDLIN(   5)		NONE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_599a65605475e26e_6_boot)
HXDLIN(   6)		ERROR = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_599a65605475e26e_7_boot)
HXDLIN(   7)		WARN = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_599a65605475e26e_8_boot)
HXDLIN(   8)		INFO = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_599a65605475e26e_9_boot)
HXDLIN(   9)		DEBUG = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_599a65605475e26e_10_boot)
HXDLIN(  10)		VERBOSE = 5;
            	}
}

} // end namespace lime
} // end namespace utils
} // end namespace _LogLevel