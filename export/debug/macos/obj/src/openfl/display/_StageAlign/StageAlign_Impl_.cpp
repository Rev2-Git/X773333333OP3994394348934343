// Generated by Haxe 4.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__StageAlign_StageAlign_Impl_
#include <openfl/display/_StageAlign/StageAlign_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9f809a2b617ac4f8_54_fromString,"openfl.display._StageAlign.StageAlign_Impl_","fromString",0x4e30c8b0,"openfl.display._StageAlign.StageAlign_Impl_.fromString","openfl/display/StageAlign.hx",54,0x49ee790b)
HX_LOCAL_STACK_FRAME(_hx_pos_9f809a2b617ac4f8_70_toString,"openfl.display._StageAlign.StageAlign_Impl_","toString",0xe3319c41,"openfl.display._StageAlign.StageAlign_Impl_.toString","openfl/display/StageAlign.hx",70,0x49ee790b)
HX_LOCAL_STACK_FRAME(_hx_pos_9f809a2b617ac4f8_15_boot,"openfl.display._StageAlign.StageAlign_Impl_","boot",0xfaa1a147,"openfl.display._StageAlign.StageAlign_Impl_.boot","openfl/display/StageAlign.hx",15,0x49ee790b)
HX_LOCAL_STACK_FRAME(_hx_pos_9f809a2b617ac4f8_20_boot,"openfl.display._StageAlign.StageAlign_Impl_","boot",0xfaa1a147,"openfl.display._StageAlign.StageAlign_Impl_.boot","openfl/display/StageAlign.hx",20,0x49ee790b)
HX_LOCAL_STACK_FRAME(_hx_pos_9f809a2b617ac4f8_25_boot,"openfl.display._StageAlign.StageAlign_Impl_","boot",0xfaa1a147,"openfl.display._StageAlign.StageAlign_Impl_.boot","openfl/display/StageAlign.hx",25,0x49ee790b)
HX_LOCAL_STACK_FRAME(_hx_pos_9f809a2b617ac4f8_30_boot,"openfl.display._StageAlign.StageAlign_Impl_","boot",0xfaa1a147,"openfl.display._StageAlign.StageAlign_Impl_.boot","openfl/display/StageAlign.hx",30,0x49ee790b)
HX_LOCAL_STACK_FRAME(_hx_pos_9f809a2b617ac4f8_35_boot,"openfl.display._StageAlign.StageAlign_Impl_","boot",0xfaa1a147,"openfl.display._StageAlign.StageAlign_Impl_.boot","openfl/display/StageAlign.hx",35,0x49ee790b)
HX_LOCAL_STACK_FRAME(_hx_pos_9f809a2b617ac4f8_40_boot,"openfl.display._StageAlign.StageAlign_Impl_","boot",0xfaa1a147,"openfl.display._StageAlign.StageAlign_Impl_.boot","openfl/display/StageAlign.hx",40,0x49ee790b)
HX_LOCAL_STACK_FRAME(_hx_pos_9f809a2b617ac4f8_45_boot,"openfl.display._StageAlign.StageAlign_Impl_","boot",0xfaa1a147,"openfl.display._StageAlign.StageAlign_Impl_.boot","openfl/display/StageAlign.hx",45,0x49ee790b)
HX_LOCAL_STACK_FRAME(_hx_pos_9f809a2b617ac4f8_50_boot,"openfl.display._StageAlign.StageAlign_Impl_","boot",0xfaa1a147,"openfl.display._StageAlign.StageAlign_Impl_.boot","openfl/display/StageAlign.hx",50,0x49ee790b)
namespace openfl{
namespace display{
namespace _StageAlign{

void StageAlign_Impl__obj::__construct() { }

Dynamic StageAlign_Impl__obj::__CreateEmpty() { return new StageAlign_Impl__obj; }

void *StageAlign_Impl__obj::_hx_vtable = 0;

Dynamic StageAlign_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StageAlign_Impl__obj > _hx_result = new StageAlign_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StageAlign_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7bbcf61b;
}

 ::Dynamic StageAlign_Impl__obj::BOTTOM;

 ::Dynamic StageAlign_Impl__obj::BOTTOM_LEFT;

 ::Dynamic StageAlign_Impl__obj::BOTTOM_RIGHT;

 ::Dynamic StageAlign_Impl__obj::LEFT;

 ::Dynamic StageAlign_Impl__obj::RIGHT;

 ::Dynamic StageAlign_Impl__obj::TOP;

 ::Dynamic StageAlign_Impl__obj::TOP_LEFT;

 ::Dynamic StageAlign_Impl__obj::TOP_RIGHT;

 ::Dynamic StageAlign_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_9f809a2b617ac4f8_54_fromString)
            	HX_STACK_ARG(value,"value")
HXLINE(  54)
HXDLIN(  54)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("bottom",eb,e6,78,65)) ){
HXLINE(  56)			return 0;
HXDLIN(  56)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bottomLeft",92,6c,97,2c)) ){
HXLINE(  57)			return 1;
HXDLIN(  57)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bottomRight",f1,a0,f4,4e)) ){
HXLINE(  58)			return 2;
HXDLIN(  58)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE(  59)			return 3;
HXDLIN(  59)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(  60)			return 4;
HXDLIN(  60)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("top",95,66,58,00)) ){
HXLINE(  61)			return 5;
HXDLIN(  61)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("topLeft",3c,09,c1,e8)) ){
HXLINE(  62)			return 6;
HXDLIN(  62)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("topRight",07,19,34,37)) ){
HXLINE(  63)			return 7;
HXDLIN(  63)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  64)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  54)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageAlign_Impl__obj,fromString,return )

::String StageAlign_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_9f809a2b617ac4f8_70_toString)
HXLINE(  70)
HXDLIN(  70)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  72)			return HX_("bottom",eb,e6,78,65);
HXDLIN(  72)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  73)			return HX_("bottomLeft",92,6c,97,2c);
HXDLIN(  73)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  74)			return HX_("bottomRight",f1,a0,f4,4e);
HXDLIN(  74)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE(  75)			return HX_("left",07,08,b0,47);
HXDLIN(  75)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==4) ){
HXLINE(  76)			return HX_("right",dc,0b,64,e9);
HXDLIN(  76)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==5) ){
HXLINE(  77)			return HX_("top",95,66,58,00);
HXDLIN(  77)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==6) ){
HXLINE(  78)			return HX_("topLeft",3c,09,c1,e8);
HXDLIN(  78)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==7) ){
HXLINE(  79)			return HX_("topRight",07,19,34,37);
HXDLIN(  79)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  80)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  70)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageAlign_Impl__obj,toString,return )


StageAlign_Impl__obj::StageAlign_Impl__obj()
{
}

bool StageAlign_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StageAlign_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo StageAlign_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &StageAlign_Impl__obj::BOTTOM,HX_("BOTTOM",eb,92,fb,17)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &StageAlign_Impl__obj::BOTTOM_LEFT,HX_("BOTTOM_LEFT",1b,e5,32,10)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &StageAlign_Impl__obj::BOTTOM_RIGHT,HX_("BOTTOM_RIGHT",28,a0,62,93)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &StageAlign_Impl__obj::LEFT,HX_("LEFT",07,d0,70,32)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &StageAlign_Impl__obj::RIGHT,HX_("RIGHT",bc,43,52,67)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &StageAlign_Impl__obj::TOP,HX_("TOP",75,02,40,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &StageAlign_Impl__obj::TOP_LEFT,HX_("TOP_LEFT",51,e1,bb,7b)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &StageAlign_Impl__obj::TOP_RIGHT,HX_("TOP_RIGHT",32,53,b6,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void StageAlign_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM_LEFT,"BOTTOM_LEFT");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM_RIGHT,"BOTTOM_RIGHT");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::TOP_LEFT,"TOP_LEFT");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::TOP_RIGHT,"TOP_RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StageAlign_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM_LEFT,"BOTTOM_LEFT");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM_RIGHT,"BOTTOM_RIGHT");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::TOP_LEFT,"TOP_LEFT");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::TOP_RIGHT,"TOP_RIGHT");
};

#endif

::hx::Class StageAlign_Impl__obj::__mClass;

static ::String StageAlign_Impl__obj_sStaticFields[] = {
	HX_("BOTTOM",eb,92,fb,17),
	HX_("BOTTOM_LEFT",1b,e5,32,10),
	HX_("BOTTOM_RIGHT",28,a0,62,93),
	HX_("LEFT",07,d0,70,32),
	HX_("RIGHT",bc,43,52,67),
	HX_("TOP",75,02,40,00),
	HX_("TOP_LEFT",51,e1,bb,7b),
	HX_("TOP_RIGHT",32,53,b6,3f),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void StageAlign_Impl__obj::__register()
{
	StageAlign_Impl__obj _hx_dummy;
	StageAlign_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._StageAlign.StageAlign_Impl_",79,5b,cd,d6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StageAlign_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StageAlign_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StageAlign_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StageAlign_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StageAlign_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StageAlign_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StageAlign_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StageAlign_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9f809a2b617ac4f8_15_boot)
HXDLIN(  15)		BOTTOM = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9f809a2b617ac4f8_20_boot)
HXDLIN(  20)		BOTTOM_LEFT = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9f809a2b617ac4f8_25_boot)
HXDLIN(  25)		BOTTOM_RIGHT = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9f809a2b617ac4f8_30_boot)
HXDLIN(  30)		LEFT = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9f809a2b617ac4f8_35_boot)
HXDLIN(  35)		RIGHT = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9f809a2b617ac4f8_40_boot)
HXDLIN(  40)		TOP = 5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9f809a2b617ac4f8_45_boot)
HXDLIN(  45)		TOP_LEFT = 6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9f809a2b617ac4f8_50_boot)
HXDLIN(  50)		TOP_RIGHT = 7;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _StageAlign
