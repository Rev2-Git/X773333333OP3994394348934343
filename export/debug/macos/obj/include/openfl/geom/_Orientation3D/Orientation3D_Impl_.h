// Generated by Haxe 4.3.0
#ifndef INCLUDED_openfl_geom__Orientation3D_Orientation3D_Impl_
#define INCLUDED_openfl_geom__Orientation3D_Orientation3D_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,geom,_Orientation3D,Orientation3D_Impl_)

namespace openfl{
namespace geom{
namespace _Orientation3D{


class HXCPP_CLASS_ATTRIBUTES Orientation3D_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Orientation3D_Impl__obj OBJ_;
		Orientation3D_Impl__obj();

	public:
		enum { _hx_ClassId = 0x786dfb4b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.geom._Orientation3D.Orientation3D_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.geom._Orientation3D.Orientation3D_Impl_"); }

		inline static ::hx::ObjectPtr< Orientation3D_Impl__obj > __new() {
			::hx::ObjectPtr< Orientation3D_Impl__obj > __this = new Orientation3D_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Orientation3D_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Orientation3D_Impl__obj *__this = (Orientation3D_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Orientation3D_Impl__obj), false, "openfl.geom._Orientation3D.Orientation3D_Impl_"));
			*(void **)__this = Orientation3D_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Orientation3D_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Orientation3D_Impl_",c1,3a,69,1b); }

		static void __boot();
		static  ::Dynamic AXIS_ANGLE;
		static  ::Dynamic EULER_ANGLES;
		static  ::Dynamic QUATERNION;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace geom
} // end namespace _Orientation3D

#endif /* INCLUDED_openfl_geom__Orientation3D_Orientation3D_Impl_ */ 
