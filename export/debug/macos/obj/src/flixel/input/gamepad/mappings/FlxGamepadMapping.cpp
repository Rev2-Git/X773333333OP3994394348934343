// Generated by Haxe 4.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_Manufacturer
#include <flixel/input/gamepad/mappings/Manufacturer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1d930114df1f84ac_10_new,"flixel.input.gamepad.mappings.FlxGamepadMapping","new",0xf72cefab,"flixel.input.gamepad.mappings.FlxGamepadMapping.new","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",10,0x5edd1803)
HX_LOCAL_STACK_FRAME(_hx_pos_1d930114df1f84ac_40_initValues,"flixel.input.gamepad.mappings.FlxGamepadMapping","initValues",0xb7dc8f27,"flixel.input.gamepad.mappings.FlxGamepadMapping.initValues","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",40,0x5edd1803)
HX_LOCAL_STACK_FRAME(_hx_pos_1d930114df1f84ac_44_getAnalogStick,"flixel.input.gamepad.mappings.FlxGamepadMapping","getAnalogStick",0x7f97569f,"flixel.input.gamepad.mappings.FlxGamepadMapping.getAnalogStick","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",44,0x5edd1803)
HX_LOCAL_STACK_FRAME(_hx_pos_1d930114df1f84ac_60_getID,"flixel.input.gamepad.mappings.FlxGamepadMapping","getID",0xc83859fc,"flixel.input.gamepad.mappings.FlxGamepadMapping.getID","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",60,0x5edd1803)
HX_LOCAL_STACK_FRAME(_hx_pos_1d930114df1f84ac_68_getRawID,"flixel.input.gamepad.mappings.FlxGamepadMapping","getRawID",0xe7780022,"flixel.input.gamepad.mappings.FlxGamepadMapping.getRawID","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",68,0x5edd1803)
HX_LOCAL_STACK_FRAME(_hx_pos_1d930114df1f84ac_76_isAxisFlipped,"flixel.input.gamepad.mappings.FlxGamepadMapping","isAxisFlipped",0x941958e2,"flixel.input.gamepad.mappings.FlxGamepadMapping.isAxisFlipped","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",76,0x5edd1803)
HX_LOCAL_STACK_FRAME(_hx_pos_1d930114df1f84ac_81_isAxisForMotion,"flixel.input.gamepad.mappings.FlxGamepadMapping","isAxisForMotion",0x69ad82bf,"flixel.input.gamepad.mappings.FlxGamepadMapping.isAxisForMotion","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",81,0x5edd1803)
HX_LOCAL_STACK_FRAME(_hx_pos_1d930114df1f84ac_102_set_attachment,"flixel.input.gamepad.mappings.FlxGamepadMapping","set_attachment",0x9aaad735,"flixel.input.gamepad.mappings.FlxGamepadMapping.set_attachment","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",102,0x5edd1803)
HX_LOCAL_STACK_FRAME(_hx_pos_1d930114df1f84ac_106_getInputLabel,"flixel.input.gamepad.mappings.FlxGamepadMapping","getInputLabel",0x5a9b7ccb,"flixel.input.gamepad.mappings.FlxGamepadMapping.getInputLabel","flixel/input/gamepad/mappings/FlxGamepadMapping.hx",106,0x5edd1803)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void FlxGamepadMapping_obj::__construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_10_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(attachment,"attachment")
HXLINE(  10)
HXLINE(  19)		this->attachment = ::flixel::input::gamepad::FlxGamepadAttachment_obj::NONE_dyn();
HXLINE(  13)		this->supportsPointer = false;
HXLINE(  12)		this->supportsMotion = false;
HXLINE(  25)		if (::hx::IsNotNull( attachment )) {
HXLINE(  26)			this->set_attachment(attachment);
            		}
HXLINE(  37)		this->initValues();
            	}

Dynamic FlxGamepadMapping_obj::__CreateEmpty() { return new FlxGamepadMapping_obj; }

void *FlxGamepadMapping_obj::_hx_vtable = 0;

Dynamic FlxGamepadMapping_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxGamepadMapping_obj > _hx_result = new FlxGamepadMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxGamepadMapping_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x21e2b607;
}

void FlxGamepadMapping_obj::initValues(){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_40_initValues)
            	HX_STACK_THIS(this)
HXLINE(  40)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadMapping_obj,initValues,(void))

 ::flixel::input::gamepad::FlxGamepadAnalogStick FlxGamepadMapping_obj::getAnalogStick(int ID){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_44_getAnalogStick)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE(  44)
HXDLIN(  44)		switch((int)(ID)){
            			case (int)19: {
HXLINE(  47)				return this->leftStick;
            			}
            			break;
            			case (int)20: {
HXLINE(  49)				return this->rightStick;
            			}
            			break;
            			default:{
HXLINE(  51)				return null();
            			}
            		}
HXLINE(  44)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,getAnalogStick,return )

int FlxGamepadMapping_obj::getID(int rawID){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_60_getID)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  60)
HXDLIN(  60)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,getID,return )

int FlxGamepadMapping_obj::getRawID(int ID){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_68_getRawID)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE(  68)
HXDLIN(  68)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,getRawID,return )

bool FlxGamepadMapping_obj::isAxisFlipped(int axisID){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_76_isAxisFlipped)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(axisID,"axisID")
HXLINE(  76)
HXDLIN(  76)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,isAxisFlipped,return )

bool FlxGamepadMapping_obj::isAxisForMotion(int ID){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_81_isAxisForMotion)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE(  81)
HXDLIN(  81)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,isAxisForMotion,return )

 ::flixel::input::gamepad::FlxGamepadAttachment FlxGamepadMapping_obj::set_attachment( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_102_set_attachment)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(attachment,"attachment")
HXLINE( 102)
HXDLIN( 102)		return (this->attachment = attachment);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,set_attachment,return )

::String FlxGamepadMapping_obj::getInputLabel(int id){
            	HX_STACKFRAME(&_hx_pos_1d930114df1f84ac_106_getInputLabel)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE( 106)
HXLINE( 107)		if ((this->getRawID(id) == -1)) {
HXLINE( 108)			return null();
            		}
HXLINE( 110)		switch((int)(id)){
            			case (int)0: {
HXLINE( 112)				return HX_("a",61,00,00,00);
            			}
            			break;
            			case (int)1: {
HXLINE( 113)				return HX_("b",62,00,00,00);
            			}
            			break;
            			case (int)2: {
HXLINE( 114)				return HX_("x",78,00,00,00);
            			}
            			break;
            			case (int)3: {
HXLINE( 115)				return HX_("y",79,00,00,00);
            			}
            			break;
            			case (int)4: {
HXLINE( 121)				return HX_("lb",76,5e,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE( 122)				return HX_("rb",b0,63,00,00);
            			}
            			break;
            			case (int)6: {
HXLINE( 116)				return HX_("back",27,da,10,41);
            			}
            			break;
            			case (int)7: {
HXLINE( 118)				return HX_("start",62,74,0b,84);
            			}
            			break;
            			case (int)8: {
HXLINE( 119)				return HX_("ls-click",c2,36,da,15);
            			}
            			break;
            			case (int)9: {
HXLINE( 120)				return HX_("rs-click",7c,e3,08,6d);
            			}
            			break;
            			case (int)10: {
HXLINE( 117)				return HX_("guide",bc,ba,eb,9b);
            			}
            			break;
            			case (int)11: {
HXLINE( 128)				return HX_("up",5b,66,00,00);
            			}
            			break;
            			case (int)12: {
HXLINE( 129)				return HX_("down",62,f8,6d,42);
            			}
            			break;
            			case (int)13: {
HXLINE( 130)				return HX_("left",07,08,b0,47);
            			}
            			break;
            			case (int)14: {
HXLINE( 131)				return HX_("right",dc,0b,64,e9);
            			}
            			break;
            			case (int)15: {
HXLINE( 125)				return HX_("l2-click",c1,0f,e7,86);
            			}
            			break;
            			case (int)16: {
HXLINE( 126)				return HX_("r2-click",7b,bc,15,de);
            			}
            			break;
            			case (int)17: {
HXLINE( 123)				return HX_("lt",88,5e,00,00);
            			}
            			break;
            			case (int)18: {
HXLINE( 124)				return HX_("rt",c2,63,00,00);
            			}
            			break;
            			case (int)19: {
HXLINE( 132)				return HX_("ls",87,5e,00,00);
            			}
            			break;
            			case (int)20: {
HXLINE( 133)				return HX_("rs",c1,63,00,00);
            			}
            			break;
            			case (int)21: {
HXLINE( 127)				return HX_("dpad",6f,a7,6e,42);
            			}
            			break;
            			case (int)34: {
HXLINE( 134)				return HX_("ls-up",a1,bb,6c,7b);
            			}
            			break;
            			case (int)35: {
HXLINE( 137)				return HX_("ls-right",56,c6,df,b6);
            			}
            			break;
            			case (int)36: {
HXLINE( 135)				return HX_("ls-down",28,ab,8e,b1);
            			}
            			break;
            			case (int)37: {
HXLINE( 136)				return HX_("ls-left",cd,ba,d0,b6);
            			}
            			break;
            			case (int)38: {
HXLINE( 138)				return HX_("rs-up",a7,36,d4,ef);
            			}
            			break;
            			case (int)39: {
HXLINE( 141)				return HX_("rs-right",10,73,0e,0e);
            			}
            			break;
            			case (int)40: {
HXLINE( 139)				return HX_("rs-down",ae,73,0f,ab);
            			}
            			break;
            			case (int)41: {
HXLINE( 140)				return HX_("rs-left",53,83,51,b0);
            			}
            			break;
            			default:{
HXLINE( 146)				return null();
            			}
            		}
HXLINE( 110)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMapping_obj,getInputLabel,return )


::hx::ObjectPtr< FlxGamepadMapping_obj > FlxGamepadMapping_obj::__new( ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	::hx::ObjectPtr< FlxGamepadMapping_obj > __this = new FlxGamepadMapping_obj();
	__this->__construct(attachment);
	return __this;
}

::hx::ObjectPtr< FlxGamepadMapping_obj > FlxGamepadMapping_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	FlxGamepadMapping_obj *__this = (FlxGamepadMapping_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxGamepadMapping_obj), true, "flixel.input.gamepad.mappings.FlxGamepadMapping"));
	*(void **)__this = FlxGamepadMapping_obj::_hx_vtable;
	__this->__construct(attachment);
	return __this;
}

FlxGamepadMapping_obj::FlxGamepadMapping_obj()
{
}

void FlxGamepadMapping_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadMapping);
	HX_MARK_MEMBER_NAME(supportsMotion,"supportsMotion");
	HX_MARK_MEMBER_NAME(supportsPointer,"supportsPointer");
	HX_MARK_MEMBER_NAME(leftStick,"leftStick");
	HX_MARK_MEMBER_NAME(rightStick,"rightStick");
	HX_MARK_MEMBER_NAME(attachment,"attachment");
	HX_MARK_MEMBER_NAME(manufacturer,"manufacturer");
	HX_MARK_END_CLASS();
}

void FlxGamepadMapping_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(supportsMotion,"supportsMotion");
	HX_VISIT_MEMBER_NAME(supportsPointer,"supportsPointer");
	HX_VISIT_MEMBER_NAME(leftStick,"leftStick");
	HX_VISIT_MEMBER_NAME(rightStick,"rightStick");
	HX_VISIT_MEMBER_NAME(attachment,"attachment");
	HX_VISIT_MEMBER_NAME(manufacturer,"manufacturer");
}

::hx::Val FlxGamepadMapping_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return ::hx::Val( getID_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return ::hx::Val( getRawID_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"leftStick") ) { return ::hx::Val( leftStick ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightStick") ) { return ::hx::Val( rightStick ); }
		if (HX_FIELD_EQ(inName,"attachment") ) { return ::hx::Val( attachment ); }
		if (HX_FIELD_EQ(inName,"initValues") ) { return ::hx::Val( initValues_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"manufacturer") ) { return ::hx::Val( manufacturer ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isAxisFlipped") ) { return ::hx::Val( isAxisFlipped_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInputLabel") ) { return ::hx::Val( getInputLabel_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportsMotion") ) { return ::hx::Val( supportsMotion ); }
		if (HX_FIELD_EQ(inName,"getAnalogStick") ) { return ::hx::Val( getAnalogStick_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_attachment") ) { return ::hx::Val( set_attachment_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"supportsPointer") ) { return ::hx::Val( supportsPointer ); }
		if (HX_FIELD_EQ(inName,"isAxisForMotion") ) { return ::hx::Val( isAxisForMotion_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxGamepadMapping_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"leftStick") ) { leftStick=inValue.Cast<  ::flixel::input::gamepad::FlxGamepadAnalogStick >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightStick") ) { rightStick=inValue.Cast<  ::flixel::input::gamepad::FlxGamepadAnalogStick >(); return inValue; }
		if (HX_FIELD_EQ(inName,"attachment") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_attachment(inValue.Cast<  ::flixel::input::gamepad::FlxGamepadAttachment >()) );attachment=inValue.Cast<  ::flixel::input::gamepad::FlxGamepadAttachment >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"manufacturer") ) { manufacturer=inValue.Cast<  ::flixel::input::gamepad::mappings::Manufacturer >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportsMotion") ) { supportsMotion=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"supportsPointer") ) { supportsPointer=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadMapping_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("supportsMotion",da,76,a1,62));
	outFields->push(HX_("supportsPointer",99,5f,50,15));
	outFields->push(HX_("leftStick",c9,67,f1,98));
	outFields->push(HX_("rightStick",d4,5f,d6,86));
	outFields->push(HX_("attachment",e3,07,73,dd));
	outFields->push(HX_("manufacturer",51,1a,55,14));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxGamepadMapping_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxGamepadMapping_obj,supportsMotion),HX_("supportsMotion",da,76,a1,62)},
	{::hx::fsBool,(int)offsetof(FlxGamepadMapping_obj,supportsPointer),HX_("supportsPointer",99,5f,50,15)},
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepadAnalogStick */ ,(int)offsetof(FlxGamepadMapping_obj,leftStick),HX_("leftStick",c9,67,f1,98)},
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepadAnalogStick */ ,(int)offsetof(FlxGamepadMapping_obj,rightStick),HX_("rightStick",d4,5f,d6,86)},
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepadAttachment */ ,(int)offsetof(FlxGamepadMapping_obj,attachment),HX_("attachment",e3,07,73,dd)},
	{::hx::fsObject /*  ::flixel::input::gamepad::mappings::Manufacturer */ ,(int)offsetof(FlxGamepadMapping_obj,manufacturer),HX_("manufacturer",51,1a,55,14)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxGamepadMapping_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGamepadMapping_obj_sMemberFields[] = {
	HX_("supportsMotion",da,76,a1,62),
	HX_("supportsPointer",99,5f,50,15),
	HX_("leftStick",c9,67,f1,98),
	HX_("rightStick",d4,5f,d6,86),
	HX_("attachment",e3,07,73,dd),
	HX_("manufacturer",51,1a,55,14),
	HX_("initValues",12,5f,fc,53),
	HX_("getAnalogStick",0a,f8,74,58),
	HX_("getID",f1,91,60,91),
	HX_("getRawID",4d,6f,fd,43),
	HX_("isAxisFlipped",d7,0d,da,83),
	HX_("isAxisForMotion",f4,1e,bd,52),
	HX_("set_attachment",a0,78,88,73),
	HX_("getInputLabel",c0,31,5c,4a),
	::String(null()) };

::hx::Class FlxGamepadMapping_obj::__mClass;

void FlxGamepadMapping_obj::__register()
{
	FlxGamepadMapping_obj _hx_dummy;
	FlxGamepadMapping_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.mappings.FlxGamepadMapping",39,3e,23,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxGamepadMapping_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxGamepadMapping_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGamepadMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGamepadMapping_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
