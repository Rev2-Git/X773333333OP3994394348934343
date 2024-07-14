// Generated by Haxe 4.3.0
#ifndef INCLUDED_flixel_path_FlxTypedPathfinderData
#define INCLUDED_flixel_path_FlxTypedPathfinderData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,path,FlxTypedPathfinderData)

namespace flixel{
namespace path{


class HXCPP_CLASS_ATTRIBUTES FlxTypedPathfinderData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxTypedPathfinderData_obj OBJ_;
		FlxTypedPathfinderData_obj();

	public:
		enum { _hx_ClassId = 0x3c5ba892 };

		void __construct( ::Dynamic map,int startIndex,int endIndex);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.path.FlxTypedPathfinderData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.path.FlxTypedPathfinderData"); }
		static ::hx::ObjectPtr< FlxTypedPathfinderData_obj > __new( ::Dynamic map,int startIndex,int endIndex);
		static ::hx::ObjectPtr< FlxTypedPathfinderData_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic map,int startIndex,int endIndex);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTypedPathfinderData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTypedPathfinderData",ed,fc,49,9e); }

		int startIndex;
		int endIndex;
		 ::Dynamic map;
		::Array< int > distances;
		::Array< int > moves;
		::Array< int > excluded;
		bool foundEnd;
		int numChecks;
		::Array< int > getPathIndicesTo(int index);
		::Dynamic getPathIndicesTo_dyn();

		::Array< int > getPathIndices();
		::Dynamic getPathIndices_dyn();

		bool hasValidStartEnd();
		::Dynamic hasValidStartEnd_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		bool isExcluded(int index);
		::Dynamic isExcluded_dyn();

		int getX(int tile);
		::Dynamic getX_dyn();

		int getY(int tile);
		::Dynamic getY_dyn();

		int getTileCollisionsByIndex(int tile);
		::Dynamic getTileCollisionsByIndex_dyn();

};

} // end namespace flixel
} // end namespace path

#endif /* INCLUDED_flixel_path_FlxTypedPathfinderData */ 
