// Generated by Haxe 4.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_text__internal__TextLayout_TextDirection_Impl_
#include <openfl/text/_internal/_TextLayout/TextDirection_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fecd85f16d8632f8_303_reverse,"openfl.text._internal._TextLayout.TextDirection_Impl_","reverse",0x2436bfd9,"openfl.text._internal._TextLayout.TextDirection_Impl_.reverse","openfl/text/_internal/TextLayout.hx",303,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_fecd85f16d8632f8_308_toString,"openfl.text._internal._TextLayout.TextDirection_Impl_","toString",0x426a2a15,"openfl.text._internal._TextLayout.TextDirection_Impl_.toString","openfl/text/_internal/TextLayout.hx",308,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_fecd85f16d8632f8_321_toHBDirection,"openfl.text._internal._TextLayout.TextDirection_Impl_","toHBDirection",0x47c8a441,"openfl.text._internal._TextLayout.TextDirection_Impl_.toHBDirection","openfl/text/_internal/TextLayout.hx",321,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_fecd85f16d8632f8_334_get_backward,"openfl.text._internal._TextLayout.TextDirection_Impl_","get_backward",0x1e6151d5,"openfl.text._internal._TextLayout.TextDirection_Impl_.get_backward","openfl/text/_internal/TextLayout.hx",334,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_fecd85f16d8632f8_339_get_forward,"openfl.text._internal._TextLayout.TextDirection_Impl_","get_forward",0xaa0ef013,"openfl.text._internal._TextLayout.TextDirection_Impl_.get_forward","openfl/text/_internal/TextLayout.hx",339,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_fecd85f16d8632f8_344_get_horizontal,"openfl.text._internal._TextLayout.TextDirection_Impl_","get_horizontal",0xc88b5356,"openfl.text._internal._TextLayout.TextDirection_Impl_.get_horizontal","openfl/text/_internal/TextLayout.hx",344,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_fecd85f16d8632f8_349_get_vertical,"openfl.text._internal._TextLayout.TextDirection_Impl_","get_vertical",0x615e3268,"openfl.text._internal._TextLayout.TextDirection_Impl_.get_vertical","openfl/text/_internal/TextLayout.hx",349,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_fecd85f16d8632f8_291_boot,"openfl.text._internal._TextLayout.TextDirection_Impl_","boot",0x0be1b51b,"openfl.text._internal._TextLayout.TextDirection_Impl_.boot","openfl/text/_internal/TextLayout.hx",291,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_fecd85f16d8632f8_292_boot,"openfl.text._internal._TextLayout.TextDirection_Impl_","boot",0x0be1b51b,"openfl.text._internal._TextLayout.TextDirection_Impl_.boot","openfl/text/_internal/TextLayout.hx",292,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_fecd85f16d8632f8_293_boot,"openfl.text._internal._TextLayout.TextDirection_Impl_","boot",0x0be1b51b,"openfl.text._internal._TextLayout.TextDirection_Impl_.boot","openfl/text/_internal/TextLayout.hx",293,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_fecd85f16d8632f8_294_boot,"openfl.text._internal._TextLayout.TextDirection_Impl_","boot",0x0be1b51b,"openfl.text._internal._TextLayout.TextDirection_Impl_.boot","openfl/text/_internal/TextLayout.hx",294,0xf9c6f251)
HX_LOCAL_STACK_FRAME(_hx_pos_fecd85f16d8632f8_295_boot,"openfl.text._internal._TextLayout.TextDirection_Impl_","boot",0x0be1b51b,"openfl.text._internal._TextLayout.TextDirection_Impl_.boot","openfl/text/_internal/TextLayout.hx",295,0xf9c6f251)
namespace openfl{
namespace text{
namespace _internal{
namespace _TextLayout{

void TextDirection_Impl__obj::__construct() { }

Dynamic TextDirection_Impl__obj::__CreateEmpty() { return new TextDirection_Impl__obj; }

void *TextDirection_Impl__obj::_hx_vtable = 0;

Dynamic TextDirection_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextDirection_Impl__obj > _hx_result = new TextDirection_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextDirection_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0547e90b;
}

int TextDirection_Impl__obj::INVALID;

int TextDirection_Impl__obj::LEFT_TO_RIGHT;

int TextDirection_Impl__obj::RIGHT_TO_LEFT;

int TextDirection_Impl__obj::TOP_TO_BOTTOM;

int TextDirection_Impl__obj::BOTTOM_TO_TOP;

void TextDirection_Impl__obj::reverse(int this1){
            	HX_STACKFRAME(&_hx_pos_fecd85f16d8632f8_303_reverse)
HXLINE( 303)
HXDLIN( 303)		this1 = (this1 ^ 1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,reverse,(void))

::String TextDirection_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_fecd85f16d8632f8_308_toString)
HXLINE( 308)
HXDLIN( 308)		switch((int)(this1)){
            			case (int)4: {
HXLINE( 310)				return HX_("leftToRight",1a,97,7b,b5);
            			}
            			break;
            			case (int)5: {
HXLINE( 311)				return HX_("rightToLeft",1e,40,ee,e6);
            			}
            			break;
            			case (int)6: {
HXLINE( 312)				return HX_("topToBottom",7b,ce,19,75);
            			}
            			break;
            			case (int)7: {
HXLINE( 313)				return HX_("bottomToTop",ef,ac,aa,79);
            			}
            			break;
            			default:{
HXLINE( 314)				return HX_("",00,00,00,00);
            			}
            		}
HXLINE( 308)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,toString,return )

int TextDirection_Impl__obj::toHBDirection(int this1){
            	HX_STACKFRAME(&_hx_pos_fecd85f16d8632f8_321_toHBDirection)
HXLINE( 321)
HXDLIN( 321)		switch((int)(this1)){
            			case (int)4: {
HXLINE( 323)				return 4;
            			}
            			break;
            			case (int)5: {
HXLINE( 324)				return 5;
            			}
            			break;
            			case (int)6: {
HXLINE( 325)				return 6;
            			}
            			break;
            			case (int)7: {
HXLINE( 326)				return 7;
            			}
            			break;
            			default:{
HXLINE( 327)				return 0;
            			}
            		}
HXLINE( 321)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,toHBDirection,return )

bool TextDirection_Impl__obj::get_backward(int this1){
            	HX_STACKFRAME(&_hx_pos_fecd85f16d8632f8_334_get_backward)
HXLINE( 334)
HXDLIN( 334)		return ((this1 & -3) == 5);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,get_backward,return )

bool TextDirection_Impl__obj::get_forward(int this1){
            	HX_STACKFRAME(&_hx_pos_fecd85f16d8632f8_339_get_forward)
HXLINE( 339)
HXDLIN( 339)		return ((this1 & -3) == 4);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,get_forward,return )

bool TextDirection_Impl__obj::get_horizontal(int this1){
            	HX_STACKFRAME(&_hx_pos_fecd85f16d8632f8_344_get_horizontal)
HXLINE( 344)
HXDLIN( 344)		return ((this1 & -2) == 4);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,get_horizontal,return )

bool TextDirection_Impl__obj::get_vertical(int this1){
            	HX_STACKFRAME(&_hx_pos_fecd85f16d8632f8_349_get_vertical)
HXLINE( 349)
HXDLIN( 349)		return ((this1 & -2) == 6);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,get_vertical,return )


TextDirection_Impl__obj::TextDirection_Impl__obj()
{
}

bool TextDirection_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { outValue = reverse_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_forward") ) { outValue = get_forward_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_backward") ) { outValue = get_backward_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_vertical") ) { outValue = get_vertical_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toHBDirection") ) { outValue = toHBDirection_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_horizontal") ) { outValue = get_horizontal_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextDirection_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo TextDirection_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &TextDirection_Impl__obj::INVALID,HX_("INVALID",d7,ae,1b,bb)},
	{::hx::fsInt,(void *) &TextDirection_Impl__obj::LEFT_TO_RIGHT,HX_("LEFT_TO_RIGHT",30,11,7b,07)},
	{::hx::fsInt,(void *) &TextDirection_Impl__obj::RIGHT_TO_LEFT,HX_("RIGHT_TO_LEFT",c8,1d,8d,7b)},
	{::hx::fsInt,(void *) &TextDirection_Impl__obj::TOP_TO_BOTTOM,HX_("TOP_TO_BOTTOM",e5,52,9a,32)},
	{::hx::fsInt,(void *) &TextDirection_Impl__obj::BOTTOM_TO_TOP,HX_("BOTTOM_TO_TOP",85,ec,ed,b3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void TextDirection_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::INVALID,"INVALID");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::LEFT_TO_RIGHT,"LEFT_TO_RIGHT");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::RIGHT_TO_LEFT,"RIGHT_TO_LEFT");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::TOP_TO_BOTTOM,"TOP_TO_BOTTOM");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::BOTTOM_TO_TOP,"BOTTOM_TO_TOP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextDirection_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::INVALID,"INVALID");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::LEFT_TO_RIGHT,"LEFT_TO_RIGHT");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::RIGHT_TO_LEFT,"RIGHT_TO_LEFT");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::TOP_TO_BOTTOM,"TOP_TO_BOTTOM");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::BOTTOM_TO_TOP,"BOTTOM_TO_TOP");
};

#endif

::hx::Class TextDirection_Impl__obj::__mClass;

static ::String TextDirection_Impl__obj_sStaticFields[] = {
	HX_("INVALID",d7,ae,1b,bb),
	HX_("LEFT_TO_RIGHT",30,11,7b,07),
	HX_("RIGHT_TO_LEFT",c8,1d,8d,7b),
	HX_("TOP_TO_BOTTOM",e5,52,9a,32),
	HX_("BOTTOM_TO_TOP",85,ec,ed,b3),
	HX_("reverse",22,39,fc,1a),
	HX_("toString",ac,d0,6e,38),
	HX_("toHBDirection",4a,ba,0d,a1),
	HX_("get_backward",ec,8f,32,dc),
	HX_("get_forward",dc,41,c5,6b),
	HX_("get_horizontal",2d,85,b9,8b),
	HX_("get_vertical",7f,70,2f,1f),
	::String(null())
};

void TextDirection_Impl__obj::__register()
{
	TextDirection_Impl__obj _hx_dummy;
	TextDirection_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._internal._TextLayout.TextDirection_Impl_",25,d8,ad,9f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextDirection_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextDirection_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextDirection_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TextDirection_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextDirection_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextDirection_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextDirection_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextDirection_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fecd85f16d8632f8_291_boot)
HXDLIN( 291)		INVALID = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fecd85f16d8632f8_292_boot)
HXDLIN( 292)		LEFT_TO_RIGHT = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fecd85f16d8632f8_293_boot)
HXDLIN( 293)		RIGHT_TO_LEFT = 5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fecd85f16d8632f8_294_boot)
HXDLIN( 294)		TOP_TO_BOTTOM = 6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fecd85f16d8632f8_295_boot)
HXDLIN( 295)		BOTTOM_TO_TOP = 7;
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _internal
} // end namespace _TextLayout