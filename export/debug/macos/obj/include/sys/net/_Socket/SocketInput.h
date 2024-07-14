// Generated by Haxe 4.3.0
#ifndef INCLUDED_sys_net__Socket_SocketInput
#define INCLUDED_sys_net__Socket_SocketInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS3(sys,net,_Socket,SocketInput)

namespace sys{
namespace net{
namespace _Socket{


class HXCPP_CLASS_ATTRIBUTES SocketInput_obj : public  ::haxe::io::Input_obj
{
	public:
		typedef  ::haxe::io::Input_obj super;
		typedef SocketInput_obj OBJ_;
		SocketInput_obj();

	public:
		enum { _hx_ClassId = 0x342d0eb5 };

		void __construct( ::Dynamic s);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.net._Socket.SocketInput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"sys.net._Socket.SocketInput"); }
		static ::hx::ObjectPtr< SocketInput_obj > __new( ::Dynamic s);
		static ::hx::ObjectPtr< SocketInput_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic s);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SocketInput_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SocketInput",37,f7,80,be); }

		 ::Dynamic __s;
		int readByte();

		int readBytes( ::haxe::io::Bytes buf,int pos,int len);

		void close();

};

} // end namespace sys
} // end namespace net
} // end namespace _Socket

#endif /* INCLUDED_sys_net__Socket_SocketInput */ 
