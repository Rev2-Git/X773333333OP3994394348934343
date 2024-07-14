// Generated by Haxe 4.3.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxBasePoint
#include <flixel/util/FlxPool_flixel_math_FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4bc163271948760e_1436_new,"flixel.math.FlxBasePoint","new",0x6212f113,"flixel.math.FlxBasePoint.new","flixel/math/FlxPoint.hx",1436,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_4bc163271948760e_1499_set,"flixel.math.FlxBasePoint","set",0x6216bc55,"flixel.math.FlxBasePoint.set","flixel/math/FlxPoint.hx",1499,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_4bc163271948760e_1511_put,"flixel.math.FlxBasePoint","put",0x62148382,"flixel.math.FlxBasePoint.put","flixel/math/FlxPoint.hx",1511,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_4bc163271948760e_1526_putWeak,"flixel.math.FlxBasePoint","putWeak",0x8df7f51a,"flixel.math.FlxBasePoint.putWeak","flixel/math/FlxPoint.hx",1526,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_4bc163271948760e_1540_equals,"flixel.math.FlxBasePoint","equals",0x5cb8ff6c,"flixel.math.FlxBasePoint.equals","flixel/math/FlxPoint.hx",1540,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_4bc163271948760e_1549_destroy,"flixel.math.FlxBasePoint","destroy",0xb50f232d,"flixel.math.FlxBasePoint.destroy","flixel/math/FlxPoint.hx",1549,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_4bc163271948760e_1556_toString,"flixel.math.FlxBasePoint","toString",0x1fbd4719,"flixel.math.FlxBasePoint.toString","flixel/math/FlxPoint.hx",1556,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_4bc163271948760e_1564_set_x,"flixel.math.FlxBasePoint","set_x",0x227e8ece,"flixel.math.FlxBasePoint.set_x","flixel/math/FlxPoint.hx",1564,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_4bc163271948760e_1572_set_y,"flixel.math.FlxBasePoint","set_y",0x227e8ecf,"flixel.math.FlxBasePoint.set_y","flixel/math/FlxPoint.hx",1572,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_4bc163271948760e_1451_get,"flixel.math.FlxBasePoint","get",0x620da149,"flixel.math.FlxBasePoint.get","flixel/math/FlxPoint.hx",1451,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_4bc163271948760e_1470_weak,"flixel.math.FlxBasePoint","weak",0x7472d865,"flixel.math.FlxBasePoint.weak","flixel/math/FlxPoint.hx",1470,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_4bc163271948760e_1439_boot,"flixel.math.FlxBasePoint","boot",0x6699001f,"flixel.math.FlxBasePoint.boot","flixel/math/FlxPoint.hx",1439,0xb3e1cd2c)
namespace flixel{
namespace math{

void FlxBasePoint_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_4bc163271948760e_1436_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE(1436)
HXLINE(1483)		this->_inPool = false;
HXLINE(1482)		this->_weak = false;
HXLINE(1479)		this->y = ((Float)0);
HXLINE(1478)		this->x = ((Float)0);
HXLINE(1489)		this->set(x,y);
            	}

Dynamic FlxBasePoint_obj::__CreateEmpty() { return new FlxBasePoint_obj; }

void *FlxBasePoint_obj::_hx_vtable = 0;

Dynamic FlxBasePoint_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBasePoint_obj > _hx_result = new FlxBasePoint_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxBasePoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x04527695;
}

static ::flixel::util::IFlxPooled_obj _hx_flixel_math_FlxBasePoint__hx_flixel_util_IFlxPooled= {
	( void (::hx::Object::*)())&::flixel::math::FlxBasePoint_obj::destroy,
	( void (::hx::Object::*)())&::flixel::math::FlxBasePoint_obj::put,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_math_FlxBasePoint__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::math::FlxBasePoint_obj::destroy,
};

void *FlxBasePoint_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9aa322a2: return &_hx_flixel_math_FlxBasePoint__hx_flixel_util_IFlxPooled;
		case (int)0xd4fe2fcd: return &_hx_flixel_math_FlxBasePoint__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::math::FlxBasePoint FlxBasePoint_obj::set(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_4bc163271948760e_1499_set)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE(1499)
HXLINE(1500)		this->set_x(x);
HXLINE(1501)		this->set_y(y);
HXLINE(1502)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBasePoint_obj,set,return )

void FlxBasePoint_obj::put(){
            	HX_STACKFRAME(&_hx_pos_4bc163271948760e_1511_put)
            	HX_STACK_THIS(this)
HXLINE(1511)
HXDLIN(1511)		if (!(this->_inPool)) {
HXLINE(1513)			this->_inPool = true;
HXLINE(1514)			this->_weak = false;
HXLINE(1515)			::flixel::math::FlxBasePoint_obj::pool->putUnsafe(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasePoint_obj,put,(void))

void FlxBasePoint_obj::putWeak(){
            	HX_STACKFRAME(&_hx_pos_4bc163271948760e_1526_putWeak)
            	HX_STACK_THIS(this)
HXLINE(1526)
HXDLIN(1526)		if (this->_weak) {
HXLINE(1528)			this->put();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasePoint_obj,putWeak,(void))

bool FlxBasePoint_obj::equals( ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_4bc163271948760e_1540_equals)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(point,"point")
HXLINE(1540)
HXLINE(1541)		HX_VAR( bool,result);
HXDLIN(1541)		if ((::Math_obj::abs((this->x - point->x)) <= ((Float)0.0000001))) {
HXLINE(1541)			result = (::Math_obj::abs((this->y - point->y)) <= ((Float)0.0000001));
            		}
            		else {
HXLINE(1541)			result = false;
            		}
HXLINE(1542)		if (point->_weak) {
HXLINE(1542)			point->put();
            		}
HXLINE(1543)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasePoint_obj,equals,return )

void FlxBasePoint_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_4bc163271948760e_1549_destroy)
            	HX_STACK_THIS(this)
HXLINE(1549)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasePoint_obj,destroy,(void))

::String FlxBasePoint_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_4bc163271948760e_1556_toString)
            	HX_STACK_THIS(this)
HXLINE(1556)
HXDLIN(1556)		 ::Dynamic value = this->x;
HXDLIN(1556)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1556)		_this->label = HX_("x",78,00,00,00);
HXDLIN(1556)		_this->value = value;
HXDLIN(1556)		 ::Dynamic value1 = this->y;
HXDLIN(1556)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(1556)		_this1->label = HX_("y",79,00,00,00);
HXDLIN(1556)		_this1->value = value1;
HXDLIN(1556)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(2)->init(0,_this)->init(1,_this1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBasePoint_obj,toString,return )

Float FlxBasePoint_obj::set_x(Float Value){
            	HX_STACKFRAME(&_hx_pos_4bc163271948760e_1564_set_x)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Value,"Value")
HXLINE(1564)
HXDLIN(1564)		return (this->x = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasePoint_obj,set_x,return )

Float FlxBasePoint_obj::set_y(Float Value){
            	HX_STACKFRAME(&_hx_pos_4bc163271948760e_1572_set_y)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Value,"Value")
HXLINE(1572)
HXDLIN(1572)		return (this->y = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBasePoint_obj,set_y,return )

 ::flixel::util::FlxPool_flixel_math_FlxBasePoint FlxBasePoint_obj::pool;

 ::flixel::math::FlxBasePoint FlxBasePoint_obj::get(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_4bc163271948760e_1451_get)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE(1451)
HXLINE(1453)		HX_VARI(  ::flixel::math::FlxBasePoint,point) = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXLINE(1454)		point->_inPool = false;
HXLINE(1455)		return point;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBasePoint_obj,get,return )

 ::flixel::math::FlxBasePoint FlxBasePoint_obj::weak(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_4bc163271948760e_1470_weak)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE(1470)
HXLINE(1471)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN(1471)		point->_inPool = false;
HXDLIN(1471)		HX_VARI_NAME(  ::flixel::math::FlxBasePoint,point1,"point") = point;
HXLINE(1473)		point1->_weak = true;
HXLINE(1475)		return point1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBasePoint_obj,weak,return )


::hx::ObjectPtr< FlxBasePoint_obj > FlxBasePoint_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	::hx::ObjectPtr< FlxBasePoint_obj > __this = new FlxBasePoint_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< FlxBasePoint_obj > FlxBasePoint_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	FlxBasePoint_obj *__this = (FlxBasePoint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBasePoint_obj), false, "flixel.math.FlxBasePoint"));
	*(void **)__this = FlxBasePoint_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

FlxBasePoint_obj::FlxBasePoint_obj()
{
}

::hx::Val FlxBasePoint_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"put") ) { return ::hx::Val( put_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_weak") ) { return ::hx::Val( _weak ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inPool") ) { return ::hx::Val( _inPool ); }
		if (HX_FIELD_EQ(inName,"putWeak") ) { return ::hx::Val( putWeak_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxBasePoint_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { outValue = ( pool ); return true; }
		if (HX_FIELD_EQ(inName,"weak") ) { outValue = weak_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxBasePoint_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) );x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) );y=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_weak") ) { _weak=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inPool") ) { _inPool=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxBasePoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { pool=ioValue.Cast<  ::flixel::util::FlxPool_flixel_math_FlxBasePoint >(); return true; }
	}
	return false;
}

void FlxBasePoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("_weak",57,78,06,02));
	outFields->push(HX_("_inPool",00,71,39,f5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxBasePoint_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxBasePoint_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxBasePoint_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsBool,(int)offsetof(FlxBasePoint_obj,_weak),HX_("_weak",57,78,06,02)},
	{::hx::fsBool,(int)offsetof(FlxBasePoint_obj,_inPool),HX_("_inPool",00,71,39,f5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxBasePoint_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::util::FlxPool_flixel_math_FlxBasePoint */ ,(void *) &FlxBasePoint_obj::pool,HX_("pool",dc,80,5c,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxBasePoint_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("_weak",57,78,06,02),
	HX_("_inPool",00,71,39,f5),
	HX_("set",a2,9b,57,00),
	HX_("put",cf,62,55,00),
	HX_("putWeak",e7,fe,6e,fd),
	HX_("equals",3f,ee,f2,bf),
	HX_("destroy",fa,2c,86,24),
	HX_("toString",ac,d0,6e,38),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	::String(null()) };

static void FlxBasePoint_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBasePoint_obj::pool,"pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxBasePoint_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBasePoint_obj::pool,"pool");
};

#endif

::hx::Class FlxBasePoint_obj::__mClass;

static ::String FlxBasePoint_obj_sStaticFields[] = {
	HX_("pool",dc,80,5c,4a),
	HX_("get",96,80,4e,00),
	HX_("weak",78,5c,f5,4e),
	::String(null())
};

void FlxBasePoint_obj::__register()
{
	FlxBasePoint_obj _hx_dummy;
	FlxBasePoint_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.math.FlxBasePoint",a1,6b,c2,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxBasePoint_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxBasePoint_obj::__SetStatic;
	__mClass->mMarkFunc = FlxBasePoint_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxBasePoint_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxBasePoint_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxBasePoint_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxBasePoint_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBasePoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBasePoint_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxBasePoint_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_4bc163271948760e_1439_boot)
HXDLIN(1439)		pool =  ::flixel::util::FlxPool_flixel_math_FlxBasePoint_obj::__alloc( HX_CTX ,::hx::ClassOf< ::flixel::math::FlxBasePoint >());
            	}
}

} // end namespace flixel
} // end namespace math
