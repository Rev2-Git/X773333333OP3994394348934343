// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
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
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1fbac93af6038753_17_new,"flixel.effects.particles.FlxParticle","new",0x64bf516b,"flixel.effects.particles.FlxParticle.new","flixel/effects/particles/FlxParticle.hx",17,0xdb578328)
HX_LOCAL_STACK_FRAME(_hx_pos_1fbac93af6038753_111_destroy,"flixel.effects.particles.FlxParticle","destroy",0xa0ae8f85,"flixel.effects.particles.FlxParticle.destroy","flixel/effects/particles/FlxParticle.hx",111,0xdb578328)
HX_LOCAL_STACK_FRAME(_hx_pos_1fbac93af6038753_149_update,"flixel.effects.particles.FlxParticle","update",0xc345fdde,"flixel.effects.particles.FlxParticle.update","flixel/effects/particles/FlxParticle.hx",149,0xdb578328)
HX_LOCAL_STACK_FRAME(_hx_pos_1fbac93af6038753_213_reset,"flixel.effects.particles.FlxParticle","reset",0xddde639a,"flixel.effects.particles.FlxParticle.reset","flixel/effects/particles/FlxParticle.hx",213,0xdb578328)
HX_LOCAL_STACK_FRAME(_hx_pos_1fbac93af6038753_223_onEmit,"flixel.effects.particles.FlxParticle","onEmit",0x21e01ee7,"flixel.effects.particles.FlxParticle.onEmit","flixel/effects/particles/FlxParticle.hx",223,0xdb578328)
namespace flixel{
namespace effects{
namespace particles{

void FlxParticle_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_1fbac93af6038753_17_new)
HXLINE(  84)		this->_delta = ((Float)0);
HXLINE(  39)		this->autoUpdateHitbox = false;
HXLINE(  34)		this->percent = ((Float)0);
HXLINE(  28)		this->age = ((Float)0);
HXLINE(  23)		this->lifespan = ((Float)0);
HXLINE(  93)		super::__construct(null(),null(),null());
HXLINE(  95)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  95)		point->_inPool = false;
HXDLIN(  95)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  95)		point1->_inPool = false;
HXDLIN(  95)		this->velocityRange =  ::flixel::util::helpers::FlxRange_obj::__alloc( HX_CTX ,point,point1);
HXLINE(  96)		this->angularVelocityRange =  ::flixel::util::helpers::FlxRange_obj::__alloc( HX_CTX ,0,null());
HXLINE(  97)		 ::flixel::math::FlxBasePoint point2 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(1,1);
HXDLIN(  97)		point2->_inPool = false;
HXDLIN(  97)		 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(1,1);
HXDLIN(  97)		point3->_inPool = false;
HXDLIN(  97)		this->scaleRange =  ::flixel::util::helpers::FlxRange_obj::__alloc( HX_CTX ,point2,point3);
HXLINE(  98)		this->alphaRange =  ::flixel::util::helpers::FlxRange_obj::__alloc( HX_CTX ,1,1);
HXLINE(  99)		this->colorRange =  ::flixel::util::helpers::FlxRange_obj::__alloc( HX_CTX ,-1,null());
HXLINE( 100)		 ::flixel::math::FlxBasePoint point4 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 100)		point4->_inPool = false;
HXDLIN( 100)		 ::flixel::math::FlxBasePoint point5 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 100)		point5->_inPool = false;
HXDLIN( 100)		this->dragRange =  ::flixel::util::helpers::FlxRange_obj::__alloc( HX_CTX ,point4,point5);
HXLINE( 101)		 ::flixel::math::FlxBasePoint point6 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 101)		point6->_inPool = false;
HXDLIN( 101)		 ::flixel::math::FlxBasePoint point7 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 101)		point7->_inPool = false;
HXDLIN( 101)		this->accelerationRange =  ::flixel::util::helpers::FlxRange_obj::__alloc( HX_CTX ,point6,point7);
HXLINE( 102)		this->elasticityRange =  ::flixel::util::helpers::FlxRange_obj::__alloc( HX_CTX ,0,null());
HXLINE( 104)		this->set_exists(false);
            	}

Dynamic FlxParticle_obj::__CreateEmpty() { return new FlxParticle_obj; }

void *FlxParticle_obj::_hx_vtable = 0;

Dynamic FlxParticle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxParticle_obj > _hx_result = new FlxParticle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxParticle_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x478dc7ad) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x478dc7ad;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

static ::flixel::IFlxSprite_obj _hx_flixel_effects_particles_FlxParticle__hx_flixel_IFlxSprite= {
	( bool (::hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::update,
	( void (::hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::destroy,
	( void (::hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::kill,
	( void (::hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::effects::particles::FlxParticle_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::effects::particles::FlxParticle_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::effects::particles::FlxParticle_obj::setPosition,
};

static ::flixel::effects::particles::IFlxParticle_obj _hx_flixel_effects_particles_FlxParticle__hx_flixel_effects_particles_IFlxParticle= {
	( bool (::hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::update,
	( void (::hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::destroy,
	( void (::hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::kill,
	( void (::hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::effects::particles::FlxParticle_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::effects::particles::FlxParticle_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::effects::particles::FlxParticle_obj::setPosition,
	( void (::hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::onEmit,
};

static ::flixel::IFlxBasic_obj _hx_flixel_effects_particles_FlxParticle__hx_flixel_IFlxBasic= {
	( bool (::hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::effects::particles::FlxParticle_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::effects::particles::FlxParticle_obj::update,
	( void (::hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::destroy,
	( void (::hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::kill,
	( void (::hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::effects::particles::FlxParticle_obj::toString,
};

void *FlxParticle_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x897c83aa: return &_hx_flixel_effects_particles_FlxParticle__hx_flixel_IFlxSprite;
		case (int)0x1d5bda56: return &_hx_flixel_effects_particles_FlxParticle__hx_flixel_effects_particles_IFlxParticle;
		case (int)0x284cfea9: return &_hx_flixel_effects_particles_FlxParticle__hx_flixel_IFlxBasic;
	}
	return super::_hx_getInterface(inHash);
}

void FlxParticle_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_1fbac93af6038753_111_destroy)
HXLINE( 112)		if (::hx::IsNotNull( this->velocityRange )) {
HXLINE( 114)			this->velocityRange->start = ::flixel::util::FlxDestroyUtil_obj::put(this->velocityRange->start);
HXLINE( 115)			this->velocityRange->end = ::flixel::util::FlxDestroyUtil_obj::put(this->velocityRange->end);
HXLINE( 116)			this->velocityRange = null();
            		}
HXLINE( 118)		if (::hx::IsNotNull( this->scaleRange )) {
HXLINE( 120)			this->scaleRange->start = ::flixel::util::FlxDestroyUtil_obj::put(this->scaleRange->start);
HXLINE( 121)			this->scaleRange->end = ::flixel::util::FlxDestroyUtil_obj::put(this->scaleRange->end);
HXLINE( 122)			this->scaleRange = null();
            		}
HXLINE( 124)		if (::hx::IsNotNull( this->dragRange )) {
HXLINE( 126)			this->dragRange->start = ::flixel::util::FlxDestroyUtil_obj::put(this->dragRange->start);
HXLINE( 127)			this->dragRange->end = ::flixel::util::FlxDestroyUtil_obj::put(this->dragRange->end);
HXLINE( 128)			this->dragRange = null();
            		}
HXLINE( 130)		if (::hx::IsNotNull( this->accelerationRange )) {
HXLINE( 132)			this->accelerationRange->start = ::flixel::util::FlxDestroyUtil_obj::put(this->accelerationRange->start);
HXLINE( 133)			this->accelerationRange->end = ::flixel::util::FlxDestroyUtil_obj::put(this->accelerationRange->end);
HXLINE( 134)			this->angularVelocityRange = null();
            		}
HXLINE( 137)		this->alphaRange = null();
HXLINE( 138)		this->colorRange = null();
HXLINE( 139)		this->accelerationRange = null();
HXLINE( 140)		this->elasticityRange = null();
HXLINE( 142)		this->super::destroy();
            	}


void FlxParticle_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_1fbac93af6038753_149_update)
HXLINE( 150)		if ((this->age < this->lifespan)) {
HXLINE( 151)			 ::flixel::effects::particles::FlxParticle _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 151)			_hx_tmp->age = (_hx_tmp->age + elapsed);
            		}
HXLINE( 153)		bool _hx_tmp1;
HXDLIN( 153)		if ((this->age >= this->lifespan)) {
HXLINE( 153)			_hx_tmp1 = (this->lifespan != 0);
            		}
            		else {
HXLINE( 153)			_hx_tmp1 = false;
            		}
HXDLIN( 153)		if (_hx_tmp1) {
HXLINE( 155)			this->kill();
            		}
            		else {
HXLINE( 159)			this->_delta = (elapsed / this->lifespan);
HXLINE( 160)			this->percent = (this->age / this->lifespan);
HXLINE( 162)			if (this->velocityRange->active) {
HXLINE( 164)				this->velocity->set_x((this->velocity->x + ((( ( ::flixel::math::FlxBasePoint)(this->velocityRange->end) )->x - ( ( ::flixel::math::FlxBasePoint)(this->velocityRange->start) )->x) * this->_delta)));
HXLINE( 165)				this->velocity->set_y((this->velocity->y + ((( ( ::flixel::math::FlxBasePoint)(this->velocityRange->end) )->y - ( ( ::flixel::math::FlxBasePoint)(this->velocityRange->start) )->y) * this->_delta)));
            			}
HXLINE( 168)			if (this->angularVelocityRange->active) {
HXLINE( 170)				 ::flixel::effects::particles::FlxParticle _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 170)				_hx_tmp2->angularVelocity = (_hx_tmp2->angularVelocity + ((( (Float)(this->angularVelocityRange->end) ) - ( (Float)(this->angularVelocityRange->start) )) * this->_delta));
            			}
HXLINE( 173)			if (this->scaleRange->active) {
HXLINE( 175)				this->scale->set_x((this->scale->x + ((( ( ::flixel::math::FlxBasePoint)(this->scaleRange->end) )->x - ( ( ::flixel::math::FlxBasePoint)(this->scaleRange->start) )->x) * this->_delta)));
HXLINE( 176)				this->scale->set_y((this->scale->y + ((( ( ::flixel::math::FlxBasePoint)(this->scaleRange->end) )->y - ( ( ::flixel::math::FlxBasePoint)(this->scaleRange->start) )->y) * this->_delta)));
HXLINE( 177)				if (this->autoUpdateHitbox) {
HXLINE( 178)					this->updateHitbox();
            				}
            			}
HXLINE( 181)			if (this->alphaRange->active) {
HXLINE( 183)				this->set_alpha((this->alpha + ((( (Float)(this->alphaRange->end) ) - ( (Float)(this->alphaRange->start) )) * this->_delta)));
            			}
HXLINE( 186)			if (this->colorRange->active) {
HXLINE( 188)				int Color1 = ( (int)(this->colorRange->start) );
HXDLIN( 188)				int Color2 = ( (int)(this->colorRange->end) );
HXDLIN( 188)				Float Factor = this->percent;
HXDLIN( 188)				int r = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 16) & 255) - ((Color1 >> 16) & 255))) ) * Factor) + ((Color1 >> 16) & 255)));
HXDLIN( 188)				int g = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 8) & 255) - ((Color1 >> 8) & 255))) ) * Factor) + ((Color1 >> 8) & 255)));
HXDLIN( 188)				int b = ::Std_obj::_hx_int(((( (Float)(((Color2 & 255) - (Color1 & 255))) ) * Factor) + (Color1 & 255)));
HXDLIN( 188)				int a = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 24) & 255) - ((Color1 >> 24) & 255))) ) * Factor) + ((Color1 >> 24) & 255)));
HXDLIN( 188)				int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 188)				{
HXLINE( 188)					color = (color & -16711681);
HXDLIN( 188)					int color1;
HXDLIN( 188)					if ((r > 255)) {
HXLINE( 188)						color1 = 255;
            					}
            					else {
HXLINE( 188)						if ((r < 0)) {
HXLINE( 188)							color1 = 0;
            						}
            						else {
HXLINE( 188)							color1 = r;
            						}
            					}
HXDLIN( 188)					color = (color | (color1 << 16));
            				}
HXDLIN( 188)				{
HXLINE( 188)					color = (color & -65281);
HXDLIN( 188)					int color2;
HXDLIN( 188)					if ((g > 255)) {
HXLINE( 188)						color2 = 255;
            					}
            					else {
HXLINE( 188)						if ((g < 0)) {
HXLINE( 188)							color2 = 0;
            						}
            						else {
HXLINE( 188)							color2 = g;
            						}
            					}
HXDLIN( 188)					color = (color | (color2 << 8));
            				}
HXDLIN( 188)				{
HXLINE( 188)					color = (color & -256);
HXDLIN( 188)					int color3;
HXDLIN( 188)					if ((b > 255)) {
HXLINE( 188)						color3 = 255;
            					}
            					else {
HXLINE( 188)						if ((b < 0)) {
HXLINE( 188)							color3 = 0;
            						}
            						else {
HXLINE( 188)							color3 = b;
            						}
            					}
HXDLIN( 188)					color = (color | color3);
            				}
HXDLIN( 188)				{
HXLINE( 188)					color = (color & 16777215);
HXDLIN( 188)					int color4;
HXDLIN( 188)					if ((a > 255)) {
HXLINE( 188)						color4 = 255;
            					}
            					else {
HXLINE( 188)						if ((a < 0)) {
HXLINE( 188)							color4 = 0;
            						}
            						else {
HXLINE( 188)							color4 = a;
            						}
            					}
HXDLIN( 188)					color = (color | (color4 << 24));
            				}
HXDLIN( 188)				this->set_color(color);
            			}
HXLINE( 191)			if (this->dragRange->active) {
HXLINE( 193)				this->drag->set_x((this->drag->x + ((( ( ::flixel::math::FlxBasePoint)(this->dragRange->end) )->x - ( ( ::flixel::math::FlxBasePoint)(this->dragRange->start) )->x) * this->_delta)));
HXLINE( 194)				this->drag->set_y((this->drag->y + ((( ( ::flixel::math::FlxBasePoint)(this->dragRange->end) )->y - ( ( ::flixel::math::FlxBasePoint)(this->dragRange->start) )->y) * this->_delta)));
            			}
HXLINE( 197)			if (this->accelerationRange->active) {
HXLINE( 199)				this->acceleration->set_x((this->acceleration->x + ((( ( ::flixel::math::FlxBasePoint)(this->accelerationRange->end) )->x - ( ( ::flixel::math::FlxBasePoint)(this->accelerationRange->start) )->x) * this->_delta)));
HXLINE( 200)				this->acceleration->set_y((this->acceleration->y + ((( ( ::flixel::math::FlxBasePoint)(this->accelerationRange->end) )->y - ( ( ::flixel::math::FlxBasePoint)(this->accelerationRange->start) )->y) * this->_delta)));
            			}
HXLINE( 203)			if (this->elasticityRange->active) {
HXLINE( 205)				 ::flixel::effects::particles::FlxParticle _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)				_hx_tmp3->elasticity = (_hx_tmp3->elasticity + ((( (Float)(this->elasticityRange->end) ) - ( (Float)(this->elasticityRange->start) )) * this->_delta));
            			}
            		}
HXLINE( 209)		this->super::update(elapsed);
            	}


void FlxParticle_obj::reset(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_1fbac93af6038753_213_reset)
HXLINE( 214)		this->super::reset(X,Y);
HXLINE( 215)		this->age = ( (Float)(0) );
HXLINE( 216)		this->set_visible(true);
            	}


void FlxParticle_obj::onEmit(){
            	HX_STACKFRAME(&_hx_pos_1fbac93af6038753_223_onEmit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxParticle_obj,onEmit,(void))


::hx::ObjectPtr< FlxParticle_obj > FlxParticle_obj::__new() {
	::hx::ObjectPtr< FlxParticle_obj > __this = new FlxParticle_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxParticle_obj > FlxParticle_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxParticle_obj *__this = (FlxParticle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxParticle_obj), true, "flixel.effects.particles.FlxParticle"));
	*(void **)__this = FlxParticle_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxParticle_obj::FlxParticle_obj()
{
}

void FlxParticle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxParticle);
	HX_MARK_MEMBER_NAME(lifespan,"lifespan");
	HX_MARK_MEMBER_NAME(age,"age");
	HX_MARK_MEMBER_NAME(percent,"percent");
	HX_MARK_MEMBER_NAME(autoUpdateHitbox,"autoUpdateHitbox");
	HX_MARK_MEMBER_NAME(velocityRange,"velocityRange");
	HX_MARK_MEMBER_NAME(angularVelocityRange,"angularVelocityRange");
	HX_MARK_MEMBER_NAME(scaleRange,"scaleRange");
	HX_MARK_MEMBER_NAME(alphaRange,"alphaRange");
	HX_MARK_MEMBER_NAME(colorRange,"colorRange");
	HX_MARK_MEMBER_NAME(dragRange,"dragRange");
	HX_MARK_MEMBER_NAME(accelerationRange,"accelerationRange");
	HX_MARK_MEMBER_NAME(elasticityRange,"elasticityRange");
	HX_MARK_MEMBER_NAME(_delta,"_delta");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxParticle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lifespan,"lifespan");
	HX_VISIT_MEMBER_NAME(age,"age");
	HX_VISIT_MEMBER_NAME(percent,"percent");
	HX_VISIT_MEMBER_NAME(autoUpdateHitbox,"autoUpdateHitbox");
	HX_VISIT_MEMBER_NAME(velocityRange,"velocityRange");
	HX_VISIT_MEMBER_NAME(angularVelocityRange,"angularVelocityRange");
	HX_VISIT_MEMBER_NAME(scaleRange,"scaleRange");
	HX_VISIT_MEMBER_NAME(alphaRange,"alphaRange");
	HX_VISIT_MEMBER_NAME(colorRange,"colorRange");
	HX_VISIT_MEMBER_NAME(dragRange,"dragRange");
	HX_VISIT_MEMBER_NAME(accelerationRange,"accelerationRange");
	HX_VISIT_MEMBER_NAME(elasticityRange,"elasticityRange");
	HX_VISIT_MEMBER_NAME(_delta,"_delta");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxParticle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"age") ) { return ::hx::Val( age ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delta") ) { return ::hx::Val( _delta ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"onEmit") ) { return ::hx::Val( onEmit_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { return ::hx::Val( percent ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { return ::hx::Val( lifespan ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dragRange") ) { return ::hx::Val( dragRange ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scaleRange") ) { return ::hx::Val( scaleRange ); }
		if (HX_FIELD_EQ(inName,"alphaRange") ) { return ::hx::Val( alphaRange ); }
		if (HX_FIELD_EQ(inName,"colorRange") ) { return ::hx::Val( colorRange ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"velocityRange") ) { return ::hx::Val( velocityRange ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"elasticityRange") ) { return ::hx::Val( elasticityRange ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"autoUpdateHitbox") ) { return ::hx::Val( autoUpdateHitbox ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"accelerationRange") ) { return ::hx::Val( accelerationRange ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"angularVelocityRange") ) { return ::hx::Val( angularVelocityRange ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxParticle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"age") ) { age=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delta") ) { _delta=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { percent=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { lifespan=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dragRange") ) { dragRange=inValue.Cast<  ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scaleRange") ) { scaleRange=inValue.Cast<  ::flixel::util::helpers::FlxRange >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaRange") ) { alphaRange=inValue.Cast<  ::flixel::util::helpers::FlxRange >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorRange") ) { colorRange=inValue.Cast<  ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"velocityRange") ) { velocityRange=inValue.Cast<  ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"elasticityRange") ) { elasticityRange=inValue.Cast<  ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"autoUpdateHitbox") ) { autoUpdateHitbox=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"accelerationRange") ) { accelerationRange=inValue.Cast<  ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"angularVelocityRange") ) { angularVelocityRange=inValue.Cast<  ::flixel::util::helpers::FlxRange >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxParticle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lifespan",c6,19,ce,6b));
	outFields->push(HX_("age",bf,f4,49,00));
	outFields->push(HX_("percent",c5,aa,da,78));
	outFields->push(HX_("autoUpdateHitbox",90,aa,3d,24));
	outFields->push(HX_("velocityRange",60,4a,a1,8e));
	outFields->push(HX_("angularVelocityRange",1e,c6,ce,3a));
	outFields->push(HX_("scaleRange",d3,52,53,05));
	outFields->push(HX_("alphaRange",7f,f9,c4,04));
	outFields->push(HX_("colorRange",5a,bd,8b,08));
	outFields->push(HX_("dragRange",29,15,75,46));
	outFields->push(HX_("accelerationRange",5d,2d,23,34));
	outFields->push(HX_("elasticityRange",84,bb,e8,db));
	outFields->push(HX_("_delta",39,2f,0e,d3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxParticle_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxParticle_obj,lifespan),HX_("lifespan",c6,19,ce,6b)},
	{::hx::fsFloat,(int)offsetof(FlxParticle_obj,age),HX_("age",bf,f4,49,00)},
	{::hx::fsFloat,(int)offsetof(FlxParticle_obj,percent),HX_("percent",c5,aa,da,78)},
	{::hx::fsBool,(int)offsetof(FlxParticle_obj,autoUpdateHitbox),HX_("autoUpdateHitbox",90,aa,3d,24)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxRange */ ,(int)offsetof(FlxParticle_obj,velocityRange),HX_("velocityRange",60,4a,a1,8e)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxRange */ ,(int)offsetof(FlxParticle_obj,angularVelocityRange),HX_("angularVelocityRange",1e,c6,ce,3a)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxRange */ ,(int)offsetof(FlxParticle_obj,scaleRange),HX_("scaleRange",d3,52,53,05)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxRange */ ,(int)offsetof(FlxParticle_obj,alphaRange),HX_("alphaRange",7f,f9,c4,04)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxRange */ ,(int)offsetof(FlxParticle_obj,colorRange),HX_("colorRange",5a,bd,8b,08)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxRange */ ,(int)offsetof(FlxParticle_obj,dragRange),HX_("dragRange",29,15,75,46)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxRange */ ,(int)offsetof(FlxParticle_obj,accelerationRange),HX_("accelerationRange",5d,2d,23,34)},
	{::hx::fsObject /*  ::flixel::util::helpers::FlxRange */ ,(int)offsetof(FlxParticle_obj,elasticityRange),HX_("elasticityRange",84,bb,e8,db)},
	{::hx::fsFloat,(int)offsetof(FlxParticle_obj,_delta),HX_("_delta",39,2f,0e,d3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxParticle_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxParticle_obj_sMemberFields[] = {
	HX_("lifespan",c6,19,ce,6b),
	HX_("age",bf,f4,49,00),
	HX_("percent",c5,aa,da,78),
	HX_("autoUpdateHitbox",90,aa,3d,24),
	HX_("velocityRange",60,4a,a1,8e),
	HX_("angularVelocityRange",1e,c6,ce,3a),
	HX_("scaleRange",d3,52,53,05),
	HX_("alphaRange",7f,f9,c4,04),
	HX_("colorRange",5a,bd,8b,08),
	HX_("dragRange",29,15,75,46),
	HX_("accelerationRange",5d,2d,23,34),
	HX_("elasticityRange",84,bb,e8,db),
	HX_("_delta",39,2f,0e,d3),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("reset",cf,49,c8,e6),
	HX_("onEmit",12,a7,9f,e5),
	::String(null()) };

::hx::Class FlxParticle_obj::__mClass;

void FlxParticle_obj::__register()
{
	FlxParticle_obj _hx_dummy;
	FlxParticle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.effects.particles.FlxParticle",f9,bf,f1,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxParticle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxParticle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxParticle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxParticle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
