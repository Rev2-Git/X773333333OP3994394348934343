// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_CrashHandler
#include <CrashHandler.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1ab988734bf19ca4_19_new,"CrashHandler","new",0x0e49fd35,"CrashHandler.new","CrashHandler.hx",19,0x764e5fdb)
HX_LOCAL_STACK_FRAME(_hx_pos_1ab988734bf19ca4_32_create,"CrashHandler","create",0xae072d47,"CrashHandler.create","CrashHandler.hx",32,0x764e5fdb)
HX_LOCAL_STACK_FRAME(_hx_pos_1ab988734bf19ca4_43_update,"CrashHandler","update",0xb8fd4c54,"CrashHandler.update","CrashHandler.hx",43,0x764e5fdb)

void CrashHandler_obj::__construct(::String __o_errorString){
            		::String errorString = __o_errorString;
            		if (::hx::IsNull(__o_errorString)) errorString = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_1ab988734bf19ca4_19_new)
HXLINE(  21)		this->errorString = HX_("",00,00,00,00);
HXLINE(  25)		this->errorString = errorString;
HXLINE(  26)		super::__construct(null(),null());
            	}

Dynamic CrashHandler_obj::__CreateEmpty() { return new CrashHandler_obj; }

void *CrashHandler_obj::_hx_vtable = 0;

Dynamic CrashHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CrashHandler_obj > _hx_result = new CrashHandler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CrashHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x6f559183 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void CrashHandler_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_1ab988734bf19ca4_32_create)
HXLINE(  33)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  35)		this->errorField =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,this->errorString,32,null());
HXLINE(  36)		this->errorField->set_font(HX_("VCR OSD Mono",be,44,e4,b8));
HXLINE(  37)		this->errorField->set_alignment(HX_("center",d5,25,db,05));
HXLINE(  38)		{
HXLINE(  38)			 ::flixel::text::FlxText _this = this->errorField;
HXDLIN(  38)			int axes = 17;
HXDLIN(  38)			bool _hx_tmp;
HXDLIN(  38)			if ((axes != 1)) {
HXLINE(  38)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  38)				_hx_tmp = true;
            			}
HXDLIN(  38)			if (_hx_tmp) {
HXLINE(  38)				int _hx_tmp1 = ::flixel::FlxG_obj::width;
HXDLIN(  38)				_this->set_x(((( (Float)(_hx_tmp1) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  38)			bool _hx_tmp2;
HXDLIN(  38)			if ((axes != 16)) {
HXLINE(  38)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE(  38)				_hx_tmp2 = true;
            			}
HXDLIN(  38)			if (_hx_tmp2) {
HXLINE(  38)				int _hx_tmp3 = ::flixel::FlxG_obj::height;
HXDLIN(  38)				_this->set_y(((( (Float)(_hx_tmp3) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  39)		this->add(this->errorField);
            	}


void CrashHandler_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_1ab988734bf19ca4_43_update)
HXLINE(  44)		this->super::update(elapsed);
HXLINE(  46)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  46)		if (_this->keyManager->checkStatusUnsafe(32,_this->status)) {
HXLINE(  51)			::String prefix = HX_("",00,00,00,00);
HXDLIN(  51)			if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^https?://",48,ee,dd,38),HX_("",00,00,00,00))->match(HX_("https://github.com/ShadowMario/FNF-PsychEngine",39,e9,a2,75)))) {
HXLINE(  51)				prefix = HX_("http://",52,75,cd,5a);
            			}
HXDLIN(  51)			::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,(prefix + HX_("https://github.com/ShadowMario/FNF-PsychEngine",39,e9,a2,75))),HX_("_blank",95,26,d9,b0));
            		}
HXLINE(  55)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  55)		if (_this1->keyManager->checkStatusUnsafe(27,_this1->status)) {
HXLINE(  57)			::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE(  58)			{
HXLINE(  58)				 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::hx::ClassOf< ::MainMenuState >(),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN(  58)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  58)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
            	}



::hx::ObjectPtr< CrashHandler_obj > CrashHandler_obj::__new(::String __o_errorString) {
	::hx::ObjectPtr< CrashHandler_obj > __this = new CrashHandler_obj();
	__this->__construct(__o_errorString);
	return __this;
}

::hx::ObjectPtr< CrashHandler_obj > CrashHandler_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_errorString) {
	CrashHandler_obj *__this = (CrashHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CrashHandler_obj), true, "CrashHandler"));
	*(void **)__this = CrashHandler_obj::_hx_vtable;
	__this->__construct(__o_errorString);
	return __this;
}

CrashHandler_obj::CrashHandler_obj()
{
}

void CrashHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CrashHandler);
	HX_MARK_MEMBER_NAME(errorString,"errorString");
	HX_MARK_MEMBER_NAME(errorField,"errorField");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CrashHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(errorString,"errorString");
	HX_VISIT_MEMBER_NAME(errorField,"errorField");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CrashHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"errorField") ) { return ::hx::Val( errorField ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"errorString") ) { return ::hx::Val( errorString ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CrashHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"errorField") ) { errorField=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"errorString") ) { errorString=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CrashHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("errorString",b9,6e,9d,ff));
	outFields->push(HX_("errorField",d2,83,97,75));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CrashHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(CrashHandler_obj,errorString),HX_("errorString",b9,6e,9d,ff)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CrashHandler_obj,errorField),HX_("errorField",d2,83,97,75)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CrashHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String CrashHandler_obj_sMemberFields[] = {
	HX_("errorString",b9,6e,9d,ff),
	HX_("errorField",d2,83,97,75),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class CrashHandler_obj::__mClass;

void CrashHandler_obj::__register()
{
	CrashHandler_obj _hx_dummy;
	CrashHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CrashHandler",c3,3e,74,86);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CrashHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CrashHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CrashHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CrashHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

