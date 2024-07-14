// Generated by Haxe 4.3.4
#ifndef INCLUDED_lime_net_curl_CURLMulti
#define INCLUDED_lime_net_curl_CURLMulti

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,net,curl,CURL)
HX_DECLARE_CLASS3(lime,net,curl,CURLMulti)
HX_DECLARE_CLASS3(lime,net,curl,CURLMultiMessage)

namespace lime{
namespace net{
namespace curl{


class HXCPP_CLASS_ATTRIBUTES CURLMulti_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CURLMulti_obj OBJ_;
		CURLMulti_obj();

	public:
		enum { _hx_ClassId = 0x2bc8aa59 };

		void __construct( ::Dynamic handle);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.net.curl.CURLMulti")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.net.curl.CURLMulti"); }
		static ::hx::ObjectPtr< CURLMulti_obj > __new( ::Dynamic handle);
		static ::hx::ObjectPtr< CURLMulti_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic handle);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CURLMulti_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CURLMulti",ed,cf,70,8b); }

		 ::Dynamic handle;
		int addHandle( ::lime::net::curl::CURL curl);
		::Dynamic addHandle_dyn();

		 ::lime::net::curl::CURLMultiMessage infoRead();
		::Dynamic infoRead_dyn();

		int perform();
		::Dynamic perform_dyn();

		int removeHandle( ::lime::net::curl::CURL curl);
		::Dynamic removeHandle_dyn();

		int setOption(int option, ::Dynamic parameter);
		::Dynamic setOption_dyn();

		int wait(int timeoutMS);
		::Dynamic wait_dyn();

		int get_runningHandles();
		::Dynamic get_runningHandles_dyn();

};

} // end namespace lime
} // end namespace net
} // end namespace curl

#endif /* INCLUDED_lime_net_curl_CURLMulti */ 
