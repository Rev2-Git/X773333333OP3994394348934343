// Generated by Haxe 4.3.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_RatioScaleMode
#include <flixel/system/scaleModes/RatioScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_35d034ea7d537e63_21_new,"flixel.system.scaleModes.RatioScaleMode","new",0x00d4d0cf,"flixel.system.scaleModes.RatioScaleMode.new","flixel/system/scaleModes/RatioScaleMode.hx",21,0x35e4ce80)
HX_LOCAL_STACK_FRAME(_hx_pos_35d034ea7d537e63_27_updateGameSize,"flixel.system.scaleModes.RatioScaleMode","updateGameSize",0xacc31ced,"flixel.system.scaleModes.RatioScaleMode.updateGameSize","flixel/system/scaleModes/RatioScaleMode.hx",27,0x35e4ce80)
namespace flixel{
namespace _hx_system{
namespace scaleModes{

void RatioScaleMode_obj::__construct(::hx::Null< bool >  __o_fillScreen){
            		bool fillScreen = __o_fillScreen.Default(false);
            	HX_STACKFRAME(&_hx_pos_35d034ea7d537e63_21_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(fillScreen,"fillScreen")
HXLINE(  21)
HXLINE(  22)		super::__construct();
HXLINE(  23)		this->fillScreen = fillScreen;
            	}

Dynamic RatioScaleMode_obj::__CreateEmpty() { return new RatioScaleMode_obj; }

void *RatioScaleMode_obj::_hx_vtable = 0;

Dynamic RatioScaleMode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RatioScaleMode_obj > _hx_result = new RatioScaleMode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RatioScaleMode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x38ddfe97) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x38ddfe97;
	} else {
		return inClassId==(int)0x5671ae2b;
	}
}

void RatioScaleMode_obj::updateGameSize(int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_35d034ea7d537e63_27_updateGameSize)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Width,"Width")
            	HX_STACK_ARG(Height,"Height")
HXLINE(  27)
HXLINE(  28)		HX_VARI( Float,ratio) = (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(::flixel::FlxG_obj::height) ));
HXLINE(  29)		HX_VARI( Float,realRatio) = (( (Float)(Width) ) / ( (Float)(Height) ));
HXLINE(  31)		HX_VARI( bool,scaleY) = (realRatio < ratio);
HXLINE(  32)		if (this->fillScreen) {
HXLINE(  34)			scaleY = !(scaleY);
            		}
HXLINE(  37)		if (scaleY) {
HXLINE(  39)			this->gameSize->set_x(( (Float)(Width) ));
HXLINE(  40)			this->gameSize->set_y(( (Float)(::Math_obj::floor((this->gameSize->x / ratio))) ));
            		}
            		else {
HXLINE(  44)			this->gameSize->set_y(( (Float)(Height) ));
HXLINE(  45)			this->gameSize->set_x(( (Float)(::Math_obj::floor((this->gameSize->y * ratio))) ));
            		}
            	}



::hx::ObjectPtr< RatioScaleMode_obj > RatioScaleMode_obj::__new(::hx::Null< bool >  __o_fillScreen) {
	::hx::ObjectPtr< RatioScaleMode_obj > __this = new RatioScaleMode_obj();
	__this->__construct(__o_fillScreen);
	return __this;
}

::hx::ObjectPtr< RatioScaleMode_obj > RatioScaleMode_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_fillScreen) {
	RatioScaleMode_obj *__this = (RatioScaleMode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RatioScaleMode_obj), true, "flixel.system.scaleModes.RatioScaleMode"));
	*(void **)__this = RatioScaleMode_obj::_hx_vtable;
	__this->__construct(__o_fillScreen);
	return __this;
}

RatioScaleMode_obj::RatioScaleMode_obj()
{
}

::hx::Val RatioScaleMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fillScreen") ) { return ::hx::Val( fillScreen ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateGameSize") ) { return ::hx::Val( updateGameSize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RatioScaleMode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fillScreen") ) { fillScreen=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RatioScaleMode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fillScreen",4f,c2,f7,4a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RatioScaleMode_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(RatioScaleMode_obj,fillScreen),HX_("fillScreen",4f,c2,f7,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RatioScaleMode_obj_sStaticStorageInfo = 0;
#endif

static ::String RatioScaleMode_obj_sMemberFields[] = {
	HX_("fillScreen",4f,c2,f7,4a),
	HX_("updateGameSize",fc,94,a3,ed),
	::String(null()) };

::hx::Class RatioScaleMode_obj::__mClass;

void RatioScaleMode_obj::__register()
{
	RatioScaleMode_obj _hx_dummy;
	RatioScaleMode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.scaleModes.RatioScaleMode",5d,bd,32,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RatioScaleMode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RatioScaleMode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RatioScaleMode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RatioScaleMode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes
