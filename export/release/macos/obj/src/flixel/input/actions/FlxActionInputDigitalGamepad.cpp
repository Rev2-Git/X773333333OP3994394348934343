// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalGamepad
#include <flixel/input/actions/FlxActionInputDigitalGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputType
#include <flixel/input/actions/FlxInputType.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e9c5cc6979f713b4_90_new,"flixel.input.actions.FlxActionInputDigitalGamepad","new",0x4f346744,"flixel.input.actions.FlxActionInputDigitalGamepad.new","flixel/input/actions/FlxActionInputDigital.hx",90,0x47a4ecd2)
HX_LOCAL_STACK_FRAME(_hx_pos_e9c5cc6979f713b4_97_toString,"flixel.input.actions.FlxActionInputDigitalGamepad","toString",0xaf0cbf48,"flixel.input.actions.FlxActionInputDigitalGamepad.toString","flixel/input/actions/FlxActionInputDigital.hx",97,0x47a4ecd2)
HX_LOCAL_STACK_FRAME(_hx_pos_e9c5cc6979f713b4_102_update,"flixel.input.actions.FlxActionInputDigitalGamepad","update",0x80db55a5,"flixel.input.actions.FlxActionInputDigitalGamepad.update","flixel/input/actions/FlxActionInputDigital.hx",102,0x47a4ecd2)
HX_LOCAL_STACK_FRAME(_hx_pos_e9c5cc6979f713b4_167_check,"flixel.input.actions.FlxActionInputDigitalGamepad","check",0x7f15b0ac,"flixel.input.actions.FlxActionInputDigitalGamepad.check","flixel/input/actions/FlxActionInputDigital.hx",167,0x47a4ecd2)
namespace flixel{
namespace input{
namespace actions{

void FlxActionInputDigitalGamepad_obj::__construct(int InputID,int Trigger,::hx::Null< int >  __o_GamepadID){
            		int GamepadID = __o_GamepadID.Default(-2);
            	HX_GC_STACKFRAME(&_hx_pos_e9c5cc6979f713b4_90_new)
HXLINE(  91)		super::__construct(::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn(),InputID,Trigger,GamepadID);
HXLINE(  92)		this->input =  ::flixel::input::FlxInput_obj::__alloc( HX_CTX ,InputID);
            	}

Dynamic FlxActionInputDigitalGamepad_obj::__CreateEmpty() { return new FlxActionInputDigitalGamepad_obj; }

void *FlxActionInputDigitalGamepad_obj::_hx_vtable = 0;

Dynamic FlxActionInputDigitalGamepad_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionInputDigitalGamepad_obj > _hx_result = new FlxActionInputDigitalGamepad_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxActionInputDigitalGamepad_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1db1ff86) {
		if (inClassId<=(int)0x1600da07) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1600da07;
		} else {
			return inClassId==(int)0x1db1ff86;
		}
	} else {
		return inClassId==(int)0x20308a99;
	}
}

::String FlxActionInputDigitalGamepad_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_e9c5cc6979f713b4_97_toString)
HXDLIN(  97)		::String _hx_tmp = ((((((HX_("FlxActionInputDigitalGamepad{inputID:",c5,1b,0a,51) + this->inputID) + HX_(",trigger:",2e,48,09,3f)) + this->trigger) + HX_(",deviceID:",7d,df,03,6e)) + this->deviceID) + HX_(",device:",38,c4,14,ac));
HXDLIN(  97)		::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::string(this->device)) + HX_(",type:",94,50,7f,b2));
HXDLIN(  97)		return ((_hx_tmp1 + ::Std_obj::string(this->type)) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionInputDigitalGamepad_obj,toString,return )

void FlxActionInputDigitalGamepad_obj::update(){
            	HX_STACKFRAME(&_hx_pos_e9c5cc6979f713b4_102_update)
HXLINE( 103)		this->super::update();
HXLINE( 105)		if ((this->deviceID == -1)) {
HXLINE( 107)			bool _hx_tmp;
HXDLIN( 107)			if (!(::flixel::FlxG_obj::gamepads->anyHasState(this->inputID,1))) {
HXLINE( 107)				_hx_tmp = ::flixel::FlxG_obj::gamepads->anyHasState(this->inputID,2);
            			}
            			else {
HXLINE( 107)				_hx_tmp = true;
            			}
HXDLIN( 107)			if (_hx_tmp) {
HXLINE( 109)				this->input->press();
            			}
            			else {
HXLINE( 113)				this->input->release();
            			}
            		}
            		else {
HXLINE( 118)			 ::flixel::input::gamepad::FlxGamepad gamepad = null();
HXLINE( 120)			if ((this->deviceID == -2)) {
HXLINE( 122)				gamepad = ::flixel::FlxG_obj::gamepads->getFirstActiveGamepad();
            			}
            			else {
HXLINE( 124)				if ((this->deviceID >= 0)) {
HXLINE( 126)					gamepad = ::flixel::FlxG_obj::gamepads->_activeGamepads->__get(this->deviceID).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
            				}
            			}
HXLINE( 129)			if (::hx::IsNotNull( gamepad )) {
HXLINE( 131)				bool _hx_tmp1;
HXDLIN( 131)				if ((this->inputID == -2)) {
HXLINE( 131)					_hx_tmp1 = (this->trigger == 0);
            				}
            				else {
HXLINE( 131)					_hx_tmp1 = false;
            				}
HXDLIN( 131)				if (_hx_tmp1) {
HXLINE( 133)					if (gamepad->released->get_ANY()) {
HXLINE( 135)						this->input->release();
            					}
            					else {
HXLINE( 139)						this->input->press();
            					}
            				}
            				else {
HXLINE( 144)					bool _hx_tmp2;
HXDLIN( 144)					int ID = this->inputID;
HXDLIN( 144)					int Status = 1;
HXDLIN( 144)					bool _hx_tmp3;
HXDLIN( 144)					switch((int)(ID)){
            						case (int)-2: {
HXLINE( 144)							_hx_tmp3 = gamepad->anyButton(Status);
            						}
            						break;
            						case (int)-1: {
HXLINE( 144)							_hx_tmp3 = !(gamepad->anyButton(Status));
            						}
            						break;
            						default:{
HXLINE( 144)							int RawID = gamepad->mapping->getRawID(ID);
HXDLIN( 144)							 ::flixel::input::gamepad::FlxGamepadButton button = gamepad->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 144)							if (::hx::IsNotNull( button )) {
HXLINE( 144)								_hx_tmp3 = button->hasState(Status);
            							}
            							else {
HXLINE( 144)								_hx_tmp3 = false;
            							}
            						}
            					}
HXDLIN( 144)					if (!(_hx_tmp3)) {
HXLINE( 144)						int ID1 = this->inputID;
HXDLIN( 144)						int Status1 = 2;
HXDLIN( 144)						switch((int)(ID1)){
            							case (int)-2: {
HXLINE( 144)								_hx_tmp2 = gamepad->anyButton(Status1);
            							}
            							break;
            							case (int)-1: {
HXLINE( 144)								_hx_tmp2 = !(gamepad->anyButton(Status1));
            							}
            							break;
            							default:{
HXLINE( 144)								int RawID1 = gamepad->mapping->getRawID(ID1);
HXDLIN( 144)								 ::flixel::input::gamepad::FlxGamepadButton button1 = gamepad->buttons->__get(RawID1).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 144)								if (::hx::IsNotNull( button1 )) {
HXLINE( 144)									_hx_tmp2 = button1->hasState(Status1);
            								}
            								else {
HXLINE( 144)									_hx_tmp2 = false;
            								}
            							}
            						}
            					}
            					else {
HXLINE( 144)						_hx_tmp2 = true;
            					}
HXDLIN( 144)					if (_hx_tmp2) {
HXLINE( 146)						this->input->press();
            					}
            					else {
HXLINE( 150)						this->input->release();
            					}
            				}
            			}
            			else {
HXLINE( 156)				if ((this->deviceID == -2)) {
HXLINE( 158)					this->input->release();
            				}
            			}
            		}
            	}


bool FlxActionInputDigitalGamepad_obj::check( ::flixel::input::actions::FlxAction Action){
            	HX_STACKFRAME(&_hx_pos_e9c5cc6979f713b4_167_check)
HXDLIN( 167)		switch((int)(this->trigger)){
            			case (int)-1: {
HXLINE( 172)				return (this->input->current == -1);
            			}
            			break;
            			case (int)0: {
HXLINE( 170)				 ::flixel::input::FlxInput _this = this->input;
HXDLIN( 170)				bool _hx_tmp;
HXDLIN( 170)				if ((_this->current != 0)) {
HXLINE( 170)					_hx_tmp = (_this->current == -1);
            				}
            				else {
HXLINE( 170)					_hx_tmp = true;
            				}
HXDLIN( 170)				if (!(_hx_tmp)) {
HXLINE( 170)					return (this->input->current == -1);
            				}
            				else {
HXLINE( 170)					return true;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 169)				 ::flixel::input::FlxInput _this1 = this->input;
HXDLIN( 169)				bool _hx_tmp1;
HXDLIN( 169)				if ((_this1->current != 1)) {
HXLINE( 169)					_hx_tmp1 = (_this1->current == 2);
            				}
            				else {
HXLINE( 169)					_hx_tmp1 = true;
            				}
HXDLIN( 169)				if (!(_hx_tmp1)) {
HXLINE( 169)					return (this->input->current == 2);
            				}
            				else {
HXLINE( 169)					return true;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 171)				return (this->input->current == 2);
            			}
            			break;
            			default:{
HXLINE( 173)				return false;
            			}
            		}
HXLINE( 167)		return false;
            	}



::hx::ObjectPtr< FlxActionInputDigitalGamepad_obj > FlxActionInputDigitalGamepad_obj::__new(int InputID,int Trigger,::hx::Null< int >  __o_GamepadID) {
	::hx::ObjectPtr< FlxActionInputDigitalGamepad_obj > __this = new FlxActionInputDigitalGamepad_obj();
	__this->__construct(InputID,Trigger,__o_GamepadID);
	return __this;
}

::hx::ObjectPtr< FlxActionInputDigitalGamepad_obj > FlxActionInputDigitalGamepad_obj::__alloc(::hx::Ctx *_hx_ctx,int InputID,int Trigger,::hx::Null< int >  __o_GamepadID) {
	FlxActionInputDigitalGamepad_obj *__this = (FlxActionInputDigitalGamepad_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionInputDigitalGamepad_obj), true, "flixel.input.actions.FlxActionInputDigitalGamepad"));
	*(void **)__this = FlxActionInputDigitalGamepad_obj::_hx_vtable;
	__this->__construct(InputID,Trigger,__o_GamepadID);
	return __this;
}

FlxActionInputDigitalGamepad_obj::FlxActionInputDigitalGamepad_obj()
{
}

void FlxActionInputDigitalGamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxActionInputDigitalGamepad);
	HX_MARK_MEMBER_NAME(input,"input");
	 ::flixel::input::actions::FlxActionInput_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxActionInputDigitalGamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(input,"input");
	 ::flixel::input::actions::FlxActionInput_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxActionInputDigitalGamepad_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxActionInputDigitalGamepad_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::flixel::input::FlxInput >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxActionInputDigitalGamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("input",0a,c4,1d,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxActionInputDigitalGamepad_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::FlxInput */ ,(int)offsetof(FlxActionInputDigitalGamepad_obj,input),HX_("input",0a,c4,1d,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxActionInputDigitalGamepad_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionInputDigitalGamepad_obj_sMemberFields[] = {
	HX_("input",0a,c4,1d,be),
	HX_("toString",ac,d0,6e,38),
	HX_("update",09,86,05,87),
	HX_("check",c8,98,b6,45),
	::String(null()) };

::hx::Class FlxActionInputDigitalGamepad_obj::__mClass;

void FlxActionInputDigitalGamepad_obj::__register()
{
	FlxActionInputDigitalGamepad_obj _hx_dummy;
	FlxActionInputDigitalGamepad_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionInputDigitalGamepad",52,b5,9e,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionInputDigitalGamepad_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionInputDigitalGamepad_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionInputDigitalGamepad_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionInputDigitalGamepad_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
