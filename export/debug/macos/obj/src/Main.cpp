// Generated by Haxe 4.3.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
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
#ifndef INCLUDED_openfl_display_FPS
#include <openfl/display/FPS.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display__StageAlign_StageAlign_Impl_
#include <openfl/display/_StageAlign/StageAlign_Impl_.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e47a9afac0942eb9_27_new,"Main","new",0x6616a5cb,"Main.new","Main.hx",27,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_63_init,"Main","init",0xea732345,"Main.init","Main.hx",63,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_73_setupGame,"Main","setupGame",0x7f7688ba,"Main.setupGame","Main.hx",73,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_109_setupGame,"Main","setupGame",0x7f7688ba,"Main.setupGame","Main.hx",109,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_45_main,"Main","main",0xed0e206e,"Main.main","Main.hx",45,0x087e5c05)

void Main_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_27_new)
            	HX_STACK_THIS(this)
HXLINE(  27)
HXLINE(  29)		this->game =  ::Dynamic(::hx::Anon_obj::Create(7)
            			->setFixed(0,HX_("width",06,b6,62,ca),1280)
            			->setFixed(1,HX_("height",e7,07,4c,02),720)
            			->setFixed(2,HX_("skipSplash",46,75,9c,27),false)
            			->setFixed(3,HX_("startFullscreen",3d,c1,ee,2d),false)
            			->setFixed(4,HX_("initialState",ed,76,1b,48),::hx::ClassOf< ::TitleState >())
            			->setFixed(5,HX_("framerate",8d,e5,4b,4e),60)
            			->setFixed(6,HX_("zoom",13,a3,f8,50),((Float)-1.0)));
HXLINE(  50)		super::__construct();
HXLINE(  52)		if (::hx::IsNotNull( this->stage )) {
HXLINE(  54)			this->init(null());
            		}
            		else {
HXLINE(  58)			this->addEventListener(HX_("addedToStage",63,22,55,0c),this->init_dyn(),null(),null(),null());
            		}
            	}

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x07825a7d) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x07825a7d;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Main_obj::init( ::openfl::events::Event E){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_63_init)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(E,"E")
HXLINE(  63)
HXLINE(  64)		if (this->hasEventListener(HX_("addedToStage",63,22,55,0c))) {
HXLINE(  66)			this->removeEventListener(HX_("addedToStage",63,22,55,0c),this->init_dyn(),null());
            		}
HXLINE(  69)		this->setupGame();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,init,(void))

void Main_obj::setupGame(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_73_setupGame)
            	HX_STACK_THIS(this)
HXLINE(  73)
HXLINE(  74)		HX_VARI( int,stageWidth) = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXLINE(  75)		HX_VARI( int,stageHeight) = ::openfl::Lib_obj::get_current()->stage->stageHeight;
HXLINE(  77)		if (::hx::IsEq( this->game->__Field(HX_("zoom",13,a3,f8,50),::hx::paccDynamic),((Float)-1.0) )) {
HXLINE(  79)			HX_VARI( Float,ratioX) = (( (Float)(stageWidth) ) / ( (Float)(this->game->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ));
HXLINE(  80)			HX_VARI( Float,ratioY) = (( (Float)(stageHeight) ) / ( (Float)(this->game->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ));
HXLINE(  81)			this->game->__SetField(HX_("zoom",13,a3,f8,50),::Math_obj::min(ratioX,ratioY),::hx::paccDynamic);
HXLINE(  82)			this->game->__SetField(HX_("width",06,b6,62,ca),::Math_obj::ceil((( (Float)(stageWidth) ) / ( (Float)(this->game->__Field(HX_("zoom",13,a3,f8,50),::hx::paccDynamic)) ))),::hx::paccDynamic);
HXLINE(  83)			this->game->__SetField(HX_("height",e7,07,4c,02),::Math_obj::ceil((( (Float)(stageHeight) ) / ( (Float)(this->game->__Field(HX_("zoom",13,a3,f8,50),::hx::paccDynamic)) ))),::hx::paccDynamic);
            		}
HXLINE(  86)		::ClientPrefs_obj::loadDefaultKeys();
HXLINE(  87)		this->addChild( ::flixel::FlxGame_obj::__alloc( HX_CTX ,this->game->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic),this->game->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic),this->game->__Field(HX_("initialState",ed,76,1b,48),::hx::paccDynamic),this->game->__Field(HX_("framerate",8d,e5,4b,4e),::hx::paccDynamic),this->game->__Field(HX_("framerate",8d,e5,4b,4e),::hx::paccDynamic),this->game->__Field(HX_("skipSplash",46,75,9c,27),::hx::paccDynamic),this->game->__Field(HX_("startFullscreen",3d,c1,ee,2d),::hx::paccDynamic)));
HXLINE(  90)		::Main_obj::fpsVar =  ::openfl::display::FPS_obj::__alloc( HX_CTX ,10,3,16777215);
HXLINE(  91)		this->addChild(::Main_obj::fpsVar);
HXLINE(  92)		::openfl::Lib_obj::get_current()->stage->align = ::openfl::display::_StageAlign::StageAlign_Impl__obj::fromString(HX_("tl",78,65,00,00));
HXLINE(  93)		::openfl::Lib_obj::get_current()->stage->set_scaleMode(2);
HXLINE(  94)		if (::hx::IsNotNull( ::Main_obj::fpsVar )) {
HXLINE(  95)			::Main_obj::fpsVar->set_visible(::ClientPrefs_obj::showFPS);
            		}
HXLINE( 106)		if (!(::DiscordClient_obj::isInitialized)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_109_setupGame)
HXLINE( 109)
HXLINE( 109)				::DiscordClient_obj::shutdown();
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 107)			::DiscordClient_obj::initialize();
HXLINE( 108)			::lime::app::Application_obj::current->_hx___window->onClose->add( ::Dynamic(new _hx_Closure_0()),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,setupGame,(void))

 ::openfl::display::FPS Main_obj::fpsVar;

void Main_obj::main(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_45_main)
HXLINE(  45)
HXDLIN(  45)		 ::openfl::display::MovieClip _hx_tmp = ::openfl::Lib_obj::get_current();
HXDLIN(  45)		_hx_tmp->addChild( ::Main_obj::__alloc( HX_CTX ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


::hx::ObjectPtr< Main_obj > Main_obj::__new() {
	::hx::ObjectPtr< Main_obj > __this = new Main_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Main_obj > Main_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Main_obj *__this = (Main_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), true, "Main"));
	*(void **)__this = Main_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(game,"game");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(game,"game");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Main_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return ::hx::Val( game ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setupGame") ) { return ::hx::Val( setupGame_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fpsVar") ) { outValue = ( fpsVar ); return true; }
	}
	return false;
}

::hx::Val Main_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"fpsVar") ) { fpsVar=ioValue.Cast<  ::openfl::display::FPS >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("game",f2,f3,5e,44));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Main_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Main_obj,game),HX_("game",f2,f3,5e,44)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::FPS */ ,(void *) &Main_obj::fpsVar,HX_("fpsVar",7e,e6,8c,91)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Main_obj_sMemberFields[] = {
	HX_("game",f2,f3,5e,44),
	HX_("init",10,3b,bb,45),
	HX_("setupGame",0f,51,ed,9e),
	::String(null()) };

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::fpsVar,"fpsVar");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::fpsVar,"fpsVar");
};

#endif

::hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("fpsVar",7e,e6,8c,91),
	HX_("main",39,38,56,48),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Main_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

