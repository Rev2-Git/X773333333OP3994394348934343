// Generated by Haxe 4.3.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveDirection
#include <flixel/addons/effects/chainable/FlxWaveDirection.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveEffect
#include <flixel/addons/effects/chainable/FlxWaveEffect.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveMode
#include <flixel/addons/effects/chainable/FlxWaveMode.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxBasePoint
#include <flixel/util/FlxPool_flixel_math_FlxBasePoint.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b55e02553dd57653_17_new,"flixel.addons.effects.chainable.FlxWaveEffect","new",0xc67d1d26,"flixel.addons.effects.chainable.FlxWaveEffect.new","flixel/addons/effects/chainable/FlxWaveEffect.hx",17,0x614f926c)
HX_LOCAL_STACK_FRAME(_hx_pos_b55e02553dd57653_102_destroy,"flixel.addons.effects.chainable.FlxWaveEffect","destroy",0x289c54c0,"flixel.addons.effects.chainable.FlxWaveEffect.destroy","flixel/addons/effects/chainable/FlxWaveEffect.hx",102,0x614f926c)
HX_LOCAL_STACK_FRAME(_hx_pos_b55e02553dd57653_112_update,"flixel.addons.effects.chainable.FlxWaveEffect","update",0xff93f903,"flixel.addons.effects.chainable.FlxWaveEffect.update","flixel/addons/effects/chainable/FlxWaveEffect.hx",112,0x614f926c)
HX_LOCAL_STACK_FRAME(_hx_pos_b55e02553dd57653_116_apply,"flixel.addons.effects.chainable.FlxWaveEffect","apply",0xc0e60fb4,"flixel.addons.effects.chainable.FlxWaveEffect.apply","flixel/addons/effects/chainable/FlxWaveEffect.hx",116,0x614f926c)
HX_LOCAL_STACK_FRAME(_hx_pos_b55e02553dd57653_190_calculateOffset,"flixel.addons.effects.chainable.FlxWaveEffect","calculateOffset",0x0d360f5f,"flixel.addons.effects.chainable.FlxWaveEffect.calculateOffset","flixel/addons/effects/chainable/FlxWaveEffect.hx",190,0x614f926c)
HX_LOCAL_STACK_FRAME(_hx_pos_b55e02553dd57653_202_set_interlaceOffset,"flixel.addons.effects.chainable.FlxWaveEffect","set_interlaceOffset",0xb368184f,"flixel.addons.effects.chainable.FlxWaveEffect.set_interlaceOffset","flixel/addons/effects/chainable/FlxWaveEffect.hx",202,0x614f926c)
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{

void FlxWaveEffect_obj::__construct( ::flixel::addons::effects::chainable::FlxWaveMode Mode,::hx::Null< int >  __o_Strength,::hx::Null< Float >  __o_Center,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_Wavelength, ::flixel::addons::effects::chainable::FlxWaveDirection Direction,::hx::Null< Float >  __o_InterlaceOffset){
            		int Strength = __o_Strength.Default(10);
            		Float Center = __o_Center.Default(((Float)0.5));
            		Float Speed = __o_Speed.Default(3);
            		int Wavelength = __o_Wavelength.Default(5);
            		Float InterlaceOffset = __o_InterlaceOffset.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_b55e02553dd57653_17_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Mode,"Mode")
            	HX_STACK_ARG(Strength,"Strength")
            	HX_STACK_ARG(Center,"Center")
            	HX_STACK_ARG(Speed,"Speed")
            	HX_STACK_ARG(Wavelength,"Wavelength")
            	HX_STACK_ARG(Direction,"Direction")
            	HX_STACK_ARG(InterlaceOffset,"InterlaceOffset")
HXLINE(  17)
HXLINE(  71)		this->_flashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  66)		this->_flashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  61)		this->_time = ((Float)0);
HXLINE(  20)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  20)		point->_inPool = false;
HXDLIN(  20)		this->offset = point;
HXLINE(  19)		this->active = true;
HXLINE(  92)		this->strength = Strength;
HXLINE(  93)		 ::flixel::addons::effects::chainable::FlxWaveMode _hx_tmp;
HXDLIN(  93)		if (::hx::IsNull( Mode )) {
HXLINE(  93)			_hx_tmp = ::flixel::addons::effects::chainable::FlxWaveMode_obj::ALL_dyn();
            		}
            		else {
HXLINE(  93)			_hx_tmp = Mode;
            		}
HXDLIN(  93)		this->mode = _hx_tmp;
HXLINE(  94)		this->speed = Speed;
HXLINE(  95)		this->wavelength = Wavelength;
HXLINE(  96)		 ::flixel::addons::effects::chainable::FlxWaveDirection _hx_tmp1;
HXDLIN(  96)		if (::hx::IsNotNull( Direction )) {
HXLINE(  96)			_hx_tmp1 = Direction;
            		}
            		else {
HXLINE(  96)			_hx_tmp1 = ::flixel::addons::effects::chainable::FlxWaveDirection_obj::HORIZONTAL_dyn();
            		}
HXDLIN(  96)		this->direction = _hx_tmp1;
HXLINE(  97)		this->center = Center;
HXLINE(  98)		this->set_interlaceOffset(InterlaceOffset);
            	}

Dynamic FlxWaveEffect_obj::__CreateEmpty() { return new FlxWaveEffect_obj; }

void *FlxWaveEffect_obj::_hx_vtable = 0;

Dynamic FlxWaveEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxWaveEffect_obj > _hx_result = new FlxWaveEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool FlxWaveEffect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x029f6474;
}

static ::flixel::addons::effects::chainable::IFlxEffect_obj _hx_flixel_addons_effects_chainable_FlxWaveEffect__hx_flixel_addons_effects_chainable_IFlxEffect= {
	( void (::hx::Object::*)())&::flixel::addons::effects::chainable::FlxWaveEffect_obj::destroy,
	( void (::hx::Object::*)(Float))&::flixel::addons::effects::chainable::FlxWaveEffect_obj::update,
	(  ::openfl::display::BitmapData (::hx::Object::*)( ::openfl::display::BitmapData))&::flixel::addons::effects::chainable::FlxWaveEffect_obj::apply,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_effects_chainable_FlxWaveEffect__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::effects::chainable::FlxWaveEffect_obj::destroy,
};

void *FlxWaveEffect_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x4a1f9502: return &_hx_flixel_addons_effects_chainable_FlxWaveEffect__hx_flixel_addons_effects_chainable_IFlxEffect;
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_effects_chainable_FlxWaveEffect__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxWaveEffect_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_b55e02553dd57653_102_destroy)
            	HX_STACK_THIS(this)
HXLINE( 102)
HXLINE( 103)		this->_flashPoint = null();
HXLINE( 104)		this->_flashRect = null();
HXLINE( 106)		this->offset = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->offset)) );
HXLINE( 107)		this->_pixels = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_pixels);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxWaveEffect_obj,destroy,(void))

void FlxWaveEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_b55e02553dd57653_112_update)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE( 112)
HXDLIN( 112)		 ::flixel::addons::effects::chainable::FlxWaveEffect _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 112)		_hx_tmp->_time = (_hx_tmp->_time + (elapsed * this->speed));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxWaveEffect_obj,update,(void))

 ::openfl::display::BitmapData FlxWaveEffect_obj::apply( ::openfl::display::BitmapData bitmapData){
            	HX_GC_STACKFRAME(&_hx_pos_b55e02553dd57653_116_apply)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bitmapData,"bitmapData")
HXLINE( 116)
HXLINE( 117)		HX_VAR( int,horizontalStrength);
HXDLIN( 117)		if (::hx::IsPointerEq( this->direction,::flixel::addons::effects::chainable::FlxWaveDirection_obj::HORIZONTAL_dyn() )) {
HXLINE( 117)			horizontalStrength = this->strength;
            		}
            		else {
HXLINE( 117)			horizontalStrength = 0;
            		}
HXLINE( 118)		HX_VAR( int,verticalStrength);
HXDLIN( 118)		if (::hx::IsPointerEq( this->direction,::flixel::addons::effects::chainable::FlxWaveDirection_obj::VERTICAL_dyn() )) {
HXLINE( 118)			verticalStrength = this->strength;
            		}
            		else {
HXLINE( 118)			verticalStrength = 0;
            		}
HXLINE( 119)		{
HXLINE( 119)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 119)			this1->set_x(( (Float)(-(horizontalStrength)) ));
HXDLIN( 119)			this1->set_y(( (Float)(-(verticalStrength)) ));
            		}
HXLINE( 121)		bool _hx_tmp;
HXDLIN( 121)		bool _hx_tmp1;
HXDLIN( 121)		if (::hx::IsNotNull( this->_pixels )) {
HXLINE( 121)			_hx_tmp1 = (this->_pixels->width < (bitmapData->width + (horizontalStrength * 2)));
            		}
            		else {
HXLINE( 121)			_hx_tmp1 = true;
            		}
HXDLIN( 121)		if (!(_hx_tmp1)) {
HXLINE( 121)			_hx_tmp = (this->_pixels->height < (bitmapData->height + (verticalStrength * 2)));
            		}
            		else {
HXLINE( 121)			_hx_tmp = true;
            		}
HXDLIN( 121)		if (_hx_tmp) {
HXLINE( 125)			::flixel::util::FlxDestroyUtil_obj::dispose(this->_pixels);
HXLINE( 126)			this->_pixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,(bitmapData->width + (horizontalStrength * 2)),(bitmapData->height + (verticalStrength * 2)),true,0);
            		}
            		else {
HXLINE( 130)			this->_pixels->fillRect(this->_pixels->rect,0);
            		}
HXLINE( 133)		HX_VAR( int,length);
HXDLIN( 133)		if (::hx::IsPointerEq( this->direction,::flixel::addons::effects::chainable::FlxWaveDirection_obj::HORIZONTAL_dyn() )) {
HXLINE( 133)			length = bitmapData->height;
            		}
            		else {
HXLINE( 133)			length = bitmapData->width;
            		}
HXLINE( 134)		HX_VARI( int,p) = 0;
HXLINE( 135)		while((p < length)){
HXLINE( 137)			HX_VARI( Float,pixelOffset) = ( (Float)(0) );
HXLINE( 138)			HX_VARI( Float,offsetP) = (( (Float)(length) ) * this->center);
HXLINE( 139)			HX_VARI( int,size) = 1;
HXLINE( 140)			switch((int)(this->mode->_hx_getIndex())){
            				case (int)0: {
HXLINE( 143)					offsetP = ( (Float)(this->strength) );
            				}
            				break;
            				case (int)1: {
HXLINE( 146)					if ((p <= offsetP)) {
HXLINE( 148)						offsetP = ((( (Float)(1) ) - (( (Float)(p) ) / offsetP)) * ( (Float)(this->strength) ));
            					}
            					else {
HXLINE( 152)						size = (length - p);
HXLINE( 153)						offsetP = ( (Float)(0) );
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 157)					if ((p >= offsetP)) {
HXLINE( 159)						offsetP = ((( (Float)(1) ) - ((( (Float)(1) ) - (( (Float)(p) ) / ( (Float)(length) ))) / (( (Float)(1) ) - this->center))) * ( (Float)(this->strength) ));
            					}
            					else {
HXLINE( 163)						size = ::Math_obj::ceil(offsetP);
HXLINE( 164)						offsetP = ( (Float)(0) );
            					}
            				}
            				break;
            			}
HXLINE( 168)			Float waveOffset = ( (Float)(0) );
HXDLIN( 168)			bool pixelOffset1;
HXDLIN( 168)			bool pixelOffset2;
HXDLIN( 168)			if ((this->interlaceOffset != 0)) {
HXLINE( 168)				pixelOffset2 = (this->interlaceOffset != 1);
            			}
            			else {
HXLINE( 168)				pixelOffset2 = false;
            			}
HXDLIN( 168)			if (pixelOffset2) {
HXLINE( 168)				pixelOffset1 = ((::Std_obj::_hx_int(( (Float)(p) )) & 1) != 0);
            			}
            			else {
HXLINE( 168)				pixelOffset1 = false;
            			}
HXDLIN( 168)			if (pixelOffset1) {
HXLINE( 168)				waveOffset = ((::Math_obj::PI * ( (Float)(2) )) * this->interlaceOffset);
            			}
HXDLIN( 168)			Float n = (((( (Float)(p) ) / ( (Float)(this->wavelength) )) + this->_time) + waveOffset);
HXDLIN( 168)			n = (n * ((Float)0.3183098862));
HXDLIN( 168)			if ((n > 1)) {
HXLINE( 168)				n = (n - ( (Float)(((::Math_obj::ceil(n) >> 1) << 1)) ));
            			}
            			else {
HXLINE( 168)				if ((n < -1)) {
HXLINE( 168)					n = (n + ((::Math_obj::ceil(-(n)) >> 1) << 1));
            				}
            			}
HXDLIN( 168)			Float pixelOffset3;
HXDLIN( 168)			if ((n > 0)) {
HXLINE( 168)				pixelOffset3 = (n * (((Float)3.1) + (n * (((Float)0.5) + (n * (((Float)-7.2) + (n * ((Float)3.6))))))));
            			}
            			else {
HXLINE( 168)				pixelOffset3 = (n * (((Float)3.1) - (n * (((Float)0.5) + (n * (((Float)7.2) + (n * ((Float)3.6))))))));
            			}
HXDLIN( 168)			pixelOffset = (offsetP * pixelOffset3);
HXLINE( 170)			if (::hx::IsPointerEq( this->direction,::flixel::addons::effects::chainable::FlxWaveDirection_obj::HORIZONTAL_dyn() )) {
HXLINE( 172)				this->_flashPoint->setTo((this->strength + pixelOffset),( (Float)(p) ));
HXLINE( 173)				this->_flashRect->setTo(( (Float)(0) ),( (Float)(p) ),( (Float)(bitmapData->width) ),( (Float)(size) ));
            			}
            			else {
HXLINE( 177)				this->_flashPoint->setTo(( (Float)(p) ),(this->strength + pixelOffset));
HXLINE( 178)				this->_flashRect->setTo(( (Float)(p) ),( (Float)(0) ),( (Float)(size) ),( (Float)(bitmapData->height) ));
            			}
HXLINE( 180)			this->_pixels->copyPixels(bitmapData,this->_flashRect,this->_flashPoint,null(),null(),null());
HXLINE( 182)			p = (p + size);
            		}
HXLINE( 184)		::flixel::util::FlxDestroyUtil_obj::dispose(bitmapData);
HXLINE( 186)		return this->_pixels->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxWaveEffect_obj,apply,return )

Float FlxWaveEffect_obj::calculateOffset(Float p,int length){
            	HX_STACKFRAME(&_hx_pos_b55e02553dd57653_190_calculateOffset)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(p,"p")
            	HX_STACK_ARG(length,"length")
HXLINE( 190)
HXLINE( 191)		HX_VARI( Float,waveOffset) = ( (Float)(0) );
HXLINE( 192)		bool _hx_tmp;
HXDLIN( 192)		bool _hx_tmp1;
HXDLIN( 192)		if ((this->interlaceOffset != 0)) {
HXLINE( 192)			_hx_tmp1 = (this->interlaceOffset != 1);
            		}
            		else {
HXLINE( 192)			_hx_tmp1 = false;
            		}
HXDLIN( 192)		if (_hx_tmp1) {
HXLINE( 192)			_hx_tmp = ((::Std_obj::_hx_int(p) & 1) != 0);
            		}
            		else {
HXLINE( 192)			_hx_tmp = false;
            		}
HXDLIN( 192)		if (_hx_tmp) {
HXLINE( 194)			waveOffset = ((::Math_obj::PI * ( (Float)(2) )) * this->interlaceOffset);
            		}
HXLINE( 197)		Float n = (((p / ( (Float)(this->wavelength) )) + this->_time) + waveOffset);
HXDLIN( 197)		n = (n * ((Float)0.3183098862));
HXDLIN( 197)		if ((n > 1)) {
HXLINE( 197)			n = (n - ( (Float)(((::Math_obj::ceil(n) >> 1) << 1)) ));
            		}
            		else {
HXLINE( 197)			if ((n < -1)) {
HXLINE( 197)				n = (n + ((::Math_obj::ceil(-(n)) >> 1) << 1));
            			}
            		}
HXDLIN( 197)		if ((n > 0)) {
HXLINE( 197)			return (n * (((Float)3.1) + (n * (((Float)0.5) + (n * (((Float)-7.2) + (n * ((Float)3.6))))))));
            		}
            		else {
HXLINE( 197)			return (n * (((Float)3.1) - (n * (((Float)0.5) + (n * (((Float)7.2) + (n * ((Float)3.6))))))));
            		}
HXDLIN( 197)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxWaveEffect_obj,calculateOffset,return )

Float FlxWaveEffect_obj::set_interlaceOffset(Float InterlaceOffset){
            	HX_STACKFRAME(&_hx_pos_b55e02553dd57653_202_set_interlaceOffset)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(InterlaceOffset,"InterlaceOffset")
HXLINE( 202)
HXDLIN( 202)		Float lowerBound;
HXDLIN( 202)		if ((InterlaceOffset < 0)) {
HXDLIN( 202)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXDLIN( 202)			lowerBound = InterlaceOffset;
            		}
HXDLIN( 202)		Float _hx_tmp;
HXDLIN( 202)		if ((lowerBound > 1)) {
HXDLIN( 202)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXDLIN( 202)			_hx_tmp = lowerBound;
            		}
HXDLIN( 202)		return (this->interlaceOffset = _hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxWaveEffect_obj,set_interlaceOffset,return )


::hx::ObjectPtr< FlxWaveEffect_obj > FlxWaveEffect_obj::__new( ::flixel::addons::effects::chainable::FlxWaveMode Mode,::hx::Null< int >  __o_Strength,::hx::Null< Float >  __o_Center,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_Wavelength, ::flixel::addons::effects::chainable::FlxWaveDirection Direction,::hx::Null< Float >  __o_InterlaceOffset) {
	::hx::ObjectPtr< FlxWaveEffect_obj > __this = new FlxWaveEffect_obj();
	__this->__construct(Mode,__o_Strength,__o_Center,__o_Speed,__o_Wavelength,Direction,__o_InterlaceOffset);
	return __this;
}

::hx::ObjectPtr< FlxWaveEffect_obj > FlxWaveEffect_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::effects::chainable::FlxWaveMode Mode,::hx::Null< int >  __o_Strength,::hx::Null< Float >  __o_Center,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_Wavelength, ::flixel::addons::effects::chainable::FlxWaveDirection Direction,::hx::Null< Float >  __o_InterlaceOffset) {
	FlxWaveEffect_obj *__this = (FlxWaveEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxWaveEffect_obj), true, "flixel.addons.effects.chainable.FlxWaveEffect"));
	*(void **)__this = FlxWaveEffect_obj::_hx_vtable;
	__this->__construct(Mode,__o_Strength,__o_Center,__o_Speed,__o_Wavelength,Direction,__o_InterlaceOffset);
	return __this;
}

FlxWaveEffect_obj::FlxWaveEffect_obj()
{
}

void FlxWaveEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxWaveEffect);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(center,"center");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(wavelength,"wavelength");
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_MEMBER_NAME(interlaceOffset,"interlaceOffset");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_pixels,"_pixels");
	HX_MARK_END_CLASS();
}

void FlxWaveEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(mode,"mode");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(center,"center");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(wavelength,"wavelength");
	HX_VISIT_MEMBER_NAME(strength,"strength");
	HX_VISIT_MEMBER_NAME(interlaceOffset,"interlaceOffset");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_pixels,"_pixels");
}

::hx::Val FlxWaveEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { return ::hx::Val( mode ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return ::hx::Val( speed ); }
		if (HX_FIELD_EQ(inName,"_time") ) { return ::hx::Val( _time ); }
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"center") ) { return ::hx::Val( center ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pixels") ) { return ::hx::Val( _pixels ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return ::hx::Val( direction ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wavelength") ) { return ::hx::Val( wavelength ); }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return ::hx::Val( _flashRect ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return ::hx::Val( _flashPoint ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"interlaceOffset") ) { return ::hx::Val( interlaceOffset ); }
		if (HX_FIELD_EQ(inName,"calculateOffset") ) { return ::hx::Val( calculateOffset_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_interlaceOffset") ) { return ::hx::Val( set_interlaceOffset_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxWaveEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast<  ::flixel::addons::effects::chainable::FlxWaveMode >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"center") ) { center=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pixels") ) { _pixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast<  ::flixel::addons::effects::chainable::FlxWaveDirection >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wavelength") ) { wavelength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"interlaceOffset") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_interlaceOffset(inValue.Cast< Float >()) );interlaceOffset=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxWaveEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("mode",63,d3,60,48));
	outFields->push(HX_("speed",87,97,69,81));
	outFields->push(HX_("center",d5,25,db,05));
	outFields->push(HX_("direction",3f,62,40,10));
	outFields->push(HX_("wavelength",5f,8b,56,b4));
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("interlaceOffset",66,9d,aa,d8));
	outFields->push(HX_("_time",ec,e7,0d,00));
	outFields->push(HX_("_flashPoint",9f,1d,2a,b7));
	outFields->push(HX_("_flashRect",b5,c2,f3,5d));
	outFields->push(HX_("_pixels",cc,00,21,fb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxWaveEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxWaveEffect_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxWaveEffect_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsObject /*  ::flixel::addons::effects::chainable::FlxWaveMode */ ,(int)offsetof(FlxWaveEffect_obj,mode),HX_("mode",63,d3,60,48)},
	{::hx::fsFloat,(int)offsetof(FlxWaveEffect_obj,speed),HX_("speed",87,97,69,81)},
	{::hx::fsFloat,(int)offsetof(FlxWaveEffect_obj,center),HX_("center",d5,25,db,05)},
	{::hx::fsObject /*  ::flixel::addons::effects::chainable::FlxWaveDirection */ ,(int)offsetof(FlxWaveEffect_obj,direction),HX_("direction",3f,62,40,10)},
	{::hx::fsInt,(int)offsetof(FlxWaveEffect_obj,wavelength),HX_("wavelength",5f,8b,56,b4)},
	{::hx::fsInt,(int)offsetof(FlxWaveEffect_obj,strength),HX_("strength",81,d2,8e,8e)},
	{::hx::fsFloat,(int)offsetof(FlxWaveEffect_obj,interlaceOffset),HX_("interlaceOffset",66,9d,aa,d8)},
	{::hx::fsFloat,(int)offsetof(FlxWaveEffect_obj,_time),HX_("_time",ec,e7,0d,00)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxWaveEffect_obj,_flashPoint),HX_("_flashPoint",9f,1d,2a,b7)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxWaveEffect_obj,_flashRect),HX_("_flashRect",b5,c2,f3,5d)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxWaveEffect_obj,_pixels),HX_("_pixels",cc,00,21,fb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxWaveEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxWaveEffect_obj_sMemberFields[] = {
	HX_("active",c6,41,46,16),
	HX_("offset",93,97,3f,60),
	HX_("mode",63,d3,60,48),
	HX_("speed",87,97,69,81),
	HX_("center",d5,25,db,05),
	HX_("direction",3f,62,40,10),
	HX_("wavelength",5f,8b,56,b4),
	HX_("strength",81,d2,8e,8e),
	HX_("interlaceOffset",66,9d,aa,d8),
	HX_("_time",ec,e7,0d,00),
	HX_("_flashPoint",9f,1d,2a,b7),
	HX_("_flashRect",b5,c2,f3,5d),
	HX_("_pixels",cc,00,21,fb),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("apply",6e,85,3b,24),
	HX_("calculateOffset",99,b1,69,15),
	HX_("set_interlaceOffset",89,5f,52,a0),
	::String(null()) };

::hx::Class FlxWaveEffect_obj::__mClass;

void FlxWaveEffect_obj::__register()
{
	FlxWaveEffect_obj _hx_dummy;
	FlxWaveEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.effects.chainable.FlxWaveEffect",34,52,5a,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxWaveEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxWaveEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxWaveEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxWaveEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable
