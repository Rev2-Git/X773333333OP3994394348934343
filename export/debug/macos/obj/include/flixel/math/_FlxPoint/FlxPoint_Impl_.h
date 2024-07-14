// Generated by Haxe 4.3.0
#ifndef INCLUDED_flixel_math__FlxPoint_FlxPoint_Impl_
#define INCLUDED_flixel_math__FlxPoint_FlxPoint_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS3(flixel,math,_FlxPoint,FlxPoint_Impl_)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)

namespace flixel{
namespace math{
namespace _FlxPoint{


class HXCPP_CLASS_ATTRIBUTES FlxPoint_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxPoint_Impl__obj OBJ_;
		FlxPoint_Impl__obj();

	public:
		enum { _hx_ClassId = 0x50db1cb3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.math._FlxPoint.FlxPoint_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.math._FlxPoint.FlxPoint_Impl_"); }

		inline static ::hx::ObjectPtr< FlxPoint_Impl__obj > __new() {
			::hx::ObjectPtr< FlxPoint_Impl__obj > __this = new FlxPoint_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxPoint_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxPoint_Impl__obj *__this = (FlxPoint_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxPoint_Impl__obj), false, "flixel.math._FlxPoint.FlxPoint_Impl_"));
			*(void **)__this = FlxPoint_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxPoint_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxPoint_Impl_",be,c5,14,5d); }

		static void __boot();
		static Float EPSILON;
		static Float EPSILON_SQUARED;
		static  ::flixel::math::FlxBasePoint _point1;
		static  ::flixel::math::FlxBasePoint _point2;
		static  ::flixel::math::FlxBasePoint _point3;
		static  ::flixel::math::FlxBasePoint get(::hx::Null< Float >  x,::hx::Null< Float >  y);
		static ::Dynamic get_dyn();

		static  ::flixel::math::FlxBasePoint weak(::hx::Null< Float >  x,::hx::Null< Float >  y);
		static ::Dynamic weak_dyn();

		static  ::flixel::math::FlxBasePoint plusOp( ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b);
		static ::Dynamic plusOp_dyn();

		static  ::flixel::math::FlxBasePoint minusOp( ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b);
		static ::Dynamic minusOp_dyn();

		static  ::flixel::math::FlxBasePoint scaleOp( ::flixel::math::FlxBasePoint a,Float b);
		static ::Dynamic scaleOp_dyn();

		static  ::flixel::math::FlxBasePoint divideOp( ::flixel::math::FlxBasePoint a,Float b);
		static ::Dynamic divideOp_dyn();

		static  ::flixel::math::FlxBasePoint plusEqualOp( ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b);
		static ::Dynamic plusEqualOp_dyn();

		static  ::flixel::math::FlxBasePoint minusEqualOp( ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b);
		static ::Dynamic minusEqualOp_dyn();

		static  ::flixel::math::FlxBasePoint scaleEqualOp( ::flixel::math::FlxBasePoint a,Float b);
		static ::Dynamic scaleEqualOp_dyn();

		static  ::flixel::math::FlxBasePoint plusFlashOp( ::flixel::math::FlxBasePoint a, ::openfl::geom::Point b);
		static ::Dynamic plusFlashOp_dyn();

		static  ::flixel::math::FlxBasePoint minusFlashOp( ::flixel::math::FlxBasePoint a, ::openfl::geom::Point b);
		static ::Dynamic minusFlashOp_dyn();

		static  ::flixel::math::FlxBasePoint minusFlashOp2( ::openfl::geom::Point a, ::flixel::math::FlxBasePoint b);
		static ::Dynamic minusFlashOp2_dyn();

		static  ::flixel::math::FlxBasePoint plusEqualFlashOp( ::flixel::math::FlxBasePoint a, ::openfl::geom::Point b);
		static ::Dynamic plusEqualFlashOp_dyn();

		static  ::flixel::math::FlxBasePoint minusEqualFlashOp( ::flixel::math::FlxBasePoint a, ::openfl::geom::Point b);
		static ::Dynamic minusEqualFlashOp_dyn();

		static  ::flixel::math::FlxBasePoint _new(::hx::Null< Float >  x,::hx::Null< Float >  y);
		static ::Dynamic _new_dyn();

		static  ::flixel::math::FlxBasePoint set( ::flixel::math::FlxBasePoint this1,::hx::Null< Float >  x,::hx::Null< Float >  y);
		static ::Dynamic set_dyn();

		static  ::flixel::math::FlxBasePoint add( ::flixel::math::FlxBasePoint this1,::hx::Null< Float >  x,::hx::Null< Float >  y);
		static ::Dynamic add_dyn();

		static  ::flixel::math::FlxBasePoint addPoint( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point);
		static ::Dynamic addPoint_dyn();

		static  ::flixel::math::FlxBasePoint subtract( ::flixel::math::FlxBasePoint this1,::hx::Null< Float >  x,::hx::Null< Float >  y);
		static ::Dynamic subtract_dyn();

		static  ::flixel::math::FlxBasePoint subtractPoint( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point);
		static ::Dynamic subtractPoint_dyn();

		static  ::flixel::math::FlxBasePoint scale( ::flixel::math::FlxBasePoint this1,Float x, ::Dynamic y);
		static ::Dynamic scale_dyn();

		static  ::flixel::math::FlxBasePoint scalePoint( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point);
		static ::Dynamic scalePoint_dyn();

		static  ::flixel::math::FlxBasePoint scaleNew( ::flixel::math::FlxBasePoint this1,Float k);
		static ::Dynamic scaleNew_dyn();

		static  ::flixel::math::FlxBasePoint addNew( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic addNew_dyn();

		static  ::flixel::math::FlxBasePoint subtractNew( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic subtractNew_dyn();

		static  ::flixel::math::FlxBasePoint copyFrom( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic copyFrom_dyn();

		static  ::flixel::math::FlxBasePoint copyFromFlash( ::flixel::math::FlxBasePoint this1, ::openfl::geom::Point p);
		static ::Dynamic copyFromFlash_dyn();

		static  ::flixel::math::FlxBasePoint copyTo( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic copyTo_dyn();

		static  ::openfl::geom::Point copyToFlash( ::flixel::math::FlxBasePoint this1, ::openfl::geom::Point p);
		static ::Dynamic copyToFlash_dyn();

		static  ::openfl::geom::Point addToFlash( ::flixel::math::FlxBasePoint this1, ::openfl::geom::Point p);
		static ::Dynamic addToFlash_dyn();

		static  ::openfl::geom::Point subtractFromFlash( ::flixel::math::FlxBasePoint this1, ::openfl::geom::Point p);
		static ::Dynamic subtractFromFlash_dyn();

		static  ::flixel::math::FlxBasePoint floor( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic floor_dyn();

		static  ::flixel::math::FlxBasePoint ceil( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic ceil_dyn();

		static  ::flixel::math::FlxBasePoint round( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic round_dyn();

		static bool inCoords( ::flixel::math::FlxBasePoint this1,Float x,Float y,Float width,Float height);
		static ::Dynamic inCoords_dyn();

		static bool inRect( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxRect rect);
		static ::Dynamic inRect_dyn();

		static  ::flixel::math::FlxBasePoint rotate( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint pivot,Float degrees);
		static ::Dynamic rotate_dyn();

		static  ::flixel::math::FlxBasePoint pivotRadians( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint pivot,Float radians);
		static ::Dynamic pivotRadians_dyn();

		static  ::flixel::math::FlxBasePoint pivotDegrees( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint pivot,Float degrees);
		static ::Dynamic pivotDegrees_dyn();

		static Float distanceTo( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point);
		static ::Dynamic distanceTo_dyn();

		static Float radiansTo( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point);
		static ::Dynamic radiansTo_dyn();

		static Float radiansFrom( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point);
		static ::Dynamic radiansFrom_dyn();

		static Float degreesTo( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point);
		static ::Dynamic degreesTo_dyn();

		static Float degreesFrom( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point);
		static ::Dynamic degreesFrom_dyn();

		static Float angleBetween( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint point);
		static ::Dynamic angleBetween_dyn();

		static  ::flixel::math::FlxBasePoint transform( ::flixel::math::FlxBasePoint this1, ::openfl::geom::Matrix matrix);
		static ::Dynamic transform_dyn();

		static Float dot( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic dot_dyn();

		static Float dotProduct( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic dotProduct_dyn();

		static Float dotProductWeak( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic dotProductWeak_dyn();

		static Float dotProdWithNormalizing( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic dotProdWithNormalizing_dyn();

		static bool isPerpendicular( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic isPerpendicular_dyn();

		static Float crossProductLength( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic crossProductLength_dyn();

		static Float crossProductLengthWeak( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic crossProductLengthWeak_dyn();

		static bool isParallel( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic isParallel_dyn();

		static bool isParallelWeak( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic isParallelWeak_dyn();

		static bool isZero( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic isZero_dyn();

		static  ::flixel::math::FlxBasePoint zero( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic zero_dyn();

		static  ::flixel::math::FlxBasePoint normalize( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic normalize_dyn();

		static bool isNormalized( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic isNormalized_dyn();

		static  ::flixel::math::FlxBasePoint rotateByRadians( ::flixel::math::FlxBasePoint this1,Float rads);
		static ::Dynamic rotateByRadians_dyn();

		static  ::flixel::math::FlxBasePoint rotateByDegrees( ::flixel::math::FlxBasePoint this1,Float degs);
		static ::Dynamic rotateByDegrees_dyn();

		static  ::flixel::math::FlxBasePoint rotateWithTrig( ::flixel::math::FlxBasePoint this1,Float sin,Float cos);
		static ::Dynamic rotateWithTrig_dyn();

		static  ::flixel::math::FlxBasePoint setPolarRadians( ::flixel::math::FlxBasePoint this1,Float length,Float radians);
		static ::Dynamic setPolarRadians_dyn();

		static  ::flixel::math::FlxBasePoint setPolarDegrees( ::flixel::math::FlxBasePoint this1,Float length,Float degrees);
		static ::Dynamic setPolarDegrees_dyn();

		static  ::flixel::math::FlxBasePoint rightNormal( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic rightNormal_dyn();

		static  ::flixel::math::FlxBasePoint leftNormal( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic leftNormal_dyn();

		static  ::flixel::math::FlxBasePoint negate( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic negate_dyn();

		static  ::flixel::math::FlxBasePoint negateNew( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic negateNew_dyn();

		static  ::flixel::math::FlxBasePoint projectTo( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p, ::flixel::math::FlxBasePoint proj);
		static ::Dynamic projectTo_dyn();

		static  ::flixel::math::FlxBasePoint projectToNormalized( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p, ::flixel::math::FlxBasePoint proj);
		static ::Dynamic projectToNormalized_dyn();

		static  ::flixel::math::FlxBasePoint projectToNormalizedWeak( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p, ::flixel::math::FlxBasePoint proj);
		static ::Dynamic projectToNormalizedWeak_dyn();

		static Float perpProduct( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic perpProduct_dyn();

		static Float perpProductWeak( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic perpProductWeak_dyn();

		static Float ratio( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b, ::flixel::math::FlxBasePoint p);
		static ::Dynamic ratio_dyn();

		static Float ratioWeak( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b, ::flixel::math::FlxBasePoint p);
		static ::Dynamic ratioWeak_dyn();

		static  ::flixel::math::FlxBasePoint findIntersection( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b, ::flixel::math::FlxBasePoint p, ::flixel::math::FlxBasePoint intersection);
		static ::Dynamic findIntersection_dyn();

		static  ::flixel::math::FlxBasePoint findIntersectionInBounds( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b, ::flixel::math::FlxBasePoint p, ::flixel::math::FlxBasePoint intersection);
		static ::Dynamic findIntersectionInBounds_dyn();

		static  ::flixel::math::FlxBasePoint truncate( ::flixel::math::FlxBasePoint this1,Float max);
		static ::Dynamic truncate_dyn();

		static Float radiansBetween( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic radiansBetween_dyn();

		static Float degreesBetween( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic degreesBetween_dyn();

		static int sign( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint a, ::flixel::math::FlxBasePoint b);
		static ::Dynamic sign_dyn();

		static Float dist( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic dist_dyn();

		static Float distSquared( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic distSquared_dyn();

		static  ::flixel::math::FlxBasePoint bounce( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint normal,::hx::Null< Float >  bounceCoeff);
		static ::Dynamic bounce_dyn();

		static  ::flixel::math::FlxBasePoint bounceWithFriction( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint normal,::hx::Null< Float >  bounceCoeff,::hx::Null< Float >  friction);
		static ::Dynamic bounceWithFriction_dyn();

		static bool isValid( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic isValid_dyn();

		static  ::flixel::math::FlxBasePoint clone( ::flixel::math::FlxBasePoint this1, ::flixel::math::FlxBasePoint p);
		static ::Dynamic clone_dyn();

		static Float get_x( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic get_x_dyn();

		static Float set_x( ::flixel::math::FlxBasePoint this1,Float x);
		static ::Dynamic set_x_dyn();

		static Float get_y( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic get_y_dyn();

		static Float set_y( ::flixel::math::FlxBasePoint this1,Float y);
		static ::Dynamic set_y_dyn();

		static Float get_dx( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic get_dx_dyn();

		static Float get_dy( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic get_dy_dyn();

		static Float get_length( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic get_length_dyn();

		static Float set_length( ::flixel::math::FlxBasePoint this1,Float l);
		static ::Dynamic set_length_dyn();

		static Float get_lengthSquared( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic get_lengthSquared_dyn();

		static Float get_degrees( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic get_degrees_dyn();

		static Float set_degrees( ::flixel::math::FlxBasePoint this1,Float degs);
		static ::Dynamic set_degrees_dyn();

		static Float get_radians( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic get_radians_dyn();

		static Float set_radians( ::flixel::math::FlxBasePoint this1,Float rads);
		static ::Dynamic set_radians_dyn();

		static Float get_rx( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic get_rx_dyn();

		static Float get_ry( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic get_ry_dyn();

		static Float get_lx( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic get_lx_dyn();

		static Float get_ly( ::flixel::math::FlxBasePoint this1);
		static ::Dynamic get_ly_dyn();

};

} // end namespace flixel
} // end namespace math
} // end namespace _FlxPoint

#endif /* INCLUDED_flixel_math__FlxPoint_FlxPoint_Impl_ */ 
