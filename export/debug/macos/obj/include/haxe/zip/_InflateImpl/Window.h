// Generated by Haxe 4.3.0
#ifndef INCLUDED_haxe_zip__InflateImpl_Window
#define INCLUDED_haxe_zip__InflateImpl_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,crypto,Adler32)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(haxe,zip,_InflateImpl,Window)

namespace haxe{
namespace zip{
namespace _InflateImpl{


class HXCPP_CLASS_ATTRIBUTES Window_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Window_obj OBJ_;
		Window_obj();

	public:
		enum { _hx_ClassId = 0x1515906b };

		void __construct(bool hasCrc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.zip._InflateImpl.Window")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.zip._InflateImpl.Window"); }
		static ::hx::ObjectPtr< Window_obj > __new(bool hasCrc);
		static ::hx::ObjectPtr< Window_obj > __alloc(::hx::Ctx *_hx_ctx,bool hasCrc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Window",10,08,21,87); }

		 ::haxe::io::Bytes buffer;
		int pos;
		 ::haxe::crypto::Adler32 crc;
		void slide();
		::Dynamic slide_dyn();

		void addBytes( ::haxe::io::Bytes b,int p,int len);
		::Dynamic addBytes_dyn();

		void addByte(int c);
		::Dynamic addByte_dyn();

		int getLastChar();
		::Dynamic getLastChar_dyn();

		int available();
		::Dynamic available_dyn();

		 ::haxe::crypto::Adler32 checksum();
		::Dynamic checksum_dyn();

};

} // end namespace haxe
} // end namespace zip
} // end namespace _InflateImpl

#endif /* INCLUDED_haxe_zip__InflateImpl_Window */ 