// Generated by Haxe 4.3.4
#ifndef INCLUDED_discord_rpc_DiscordRpc
#define INCLUDED_discord_rpc_DiscordRpc

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_0f6f533a2f6f9a23
#define INCLUDED_0f6f533a2f6f9a23
#include "linc_discord_rpc.h"
#endif
HX_DECLARE_CLASS1(discord_rpc,DiscordRpc)

namespace discord_rpc{


class HXCPP_CLASS_ATTRIBUTES DiscordRpc_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DiscordRpc_obj OBJ_;
		DiscordRpc_obj();

	public:
		enum { _hx_ClassId = 0x33678667 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="discord_rpc.DiscordRpc")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"discord_rpc.DiscordRpc"); }

		inline static ::hx::ObjectPtr< DiscordRpc_obj > __new() {
			::hx::ObjectPtr< DiscordRpc_obj > __this = new DiscordRpc_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DiscordRpc_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DiscordRpc_obj *__this = (DiscordRpc_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DiscordRpc_obj), false, "discord_rpc.DiscordRpc"));
			*(void **)__this = DiscordRpc_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DiscordRpc_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DiscordRpc",b9,38,e5,a6); }

		static  ::Dynamic onReady;
		static Dynamic onReady_dyn() { return onReady;}
		static  ::Dynamic onDisconnected;
		static Dynamic onDisconnected_dyn() { return onDisconnected;}
		static  ::Dynamic onError;
		static Dynamic onError_dyn() { return onError;}
		static  ::Dynamic onJoin;
		static Dynamic onJoin_dyn() { return onJoin;}
		static  ::Dynamic onSpectate;
		static Dynamic onSpectate_dyn() { return onSpectate;}
		static  ::Dynamic onRequest;
		static Dynamic onRequest_dyn() { return onRequest;}
		static void start( ::Dynamic _options);
		static ::Dynamic start_dyn();

		static void process();
		static ::Dynamic process_dyn();

		static void respond(::String _userID,int _response);
		static ::Dynamic respond_dyn();

		static void presence( ::Dynamic _options);
		static ::Dynamic presence_dyn();

		static void shutdown();
		static ::Dynamic shutdown_dyn();

};

} // end namespace discord_rpc

#endif /* INCLUDED_discord_rpc_DiscordRpc */ 
