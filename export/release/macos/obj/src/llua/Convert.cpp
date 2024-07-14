// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_llua_Convert
#include <llua/Convert.h>
#endif
#ifndef INCLUDED_llua_LuaCallback
#include <llua/LuaCallback.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_19_cleanFunctionRefs,"llua.Convert","cleanFunctionRefs",0x91417ea4,"llua.Convert.cleanFunctionRefs","llua/Convert.hx",19,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_21_toLua,"llua.Convert","toLua",0x3fb91700,"llua.Convert.toLua","llua/Convert.hx",21,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_68_callback_handler,"llua.Convert","callback_handler",0x2af82ced,"llua.Convert.callback_handler","llua/Convert.hx",68,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_100_arrayToLua,"llua.Convert","arrayToLua",0x07e2abc1,"llua.Convert.arrayToLua","llua/Convert.hx",100,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_113_mapToLua,"llua.Convert","mapToLua",0x655c929e,"llua.Convert.mapToLua","llua/Convert.hx",113,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_125_objectToLua,"llua.Convert","objectToLua",0xf6f99801,"llua.Convert.objectToLua","llua/Convert.hx",125,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_138_fromLua,"llua.Convert","fromLua",0x7fff7d31,"llua.Convert.fromLua","llua/Convert.hx",138,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_228_toHaxeObj,"llua.Convert","toHaxeObj",0x234db0b9,"llua.Convert.toHaxeObj","llua/Convert.hx",228,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_14_boot,"llua.Convert","boot",0xcfa7298f,"llua.Convert.boot","llua/Convert.hx",14,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_15_boot,"llua.Convert","boot",0xcfa7298f,"llua.Convert.boot","llua/Convert.hx",15,0x49e36a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_4b5f1938ae03ba97_16_boot,"llua.Convert","boot",0xcfa7298f,"llua.Convert.boot","llua/Convert.hx",16,0x49e36a6e)
namespace llua{

void Convert_obj::__construct() { }

Dynamic Convert_obj::__CreateEmpty() { return new Convert_obj; }

void *Convert_obj::_hx_vtable = 0;

Dynamic Convert_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Convert_obj > _hx_result = new Convert_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Convert_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x70578207;
}

bool Convert_obj::enableUnsupportedTraces;

bool Convert_obj::allowFunctions;

 ::haxe::ds::StringMap Convert_obj::functionReferences;

void Convert_obj::cleanFunctionRefs(){
            	HX_GC_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_19_cleanFunctionRefs)
HXDLIN(  19)		::llua::Convert_obj::functionReferences =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Convert_obj,cleanFunctionRefs,(void))

bool Convert_obj::toLua( cpp::Reference<lua_State> l, ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_21_toLua)
HXLINE(  23)		{
HXLINE(  23)			 ::ValueType _g = ::Type_obj::_hx_typeof(val);
HXDLIN(  23)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE(  25)					lua_pushnil(l);
            				}
            				break;
            				case (int)1: {
HXLINE(  29)					lua_pushinteger(l,::hx::TCast< int >::cast(val));
            				}
            				break;
            				case (int)2: {
HXLINE(  52)					lua_pushnumber(l,( (Float)(val) ));
            				}
            				break;
            				case (int)3: {
HXLINE(  27)					int _hx_tmp;
HXDLIN(  27)					if ((( (bool)(val) ) == true)) {
HXLINE(  27)						_hx_tmp = 1;
            					}
            					else {
HXLINE(  27)						_hx_tmp = 0;
            					}
HXDLIN(  27)					lua_pushboolean(l,_hx_tmp);
            				}
            				break;
            				case (int)4: {
HXLINE(  60)					lua_createtable(l,::Reflect_obj::fields(val)->length,0);
HXDLIN(  60)					{
HXLINE(  60)						int _g1 = 0;
HXDLIN(  60)						::Array< ::String > _g2 = ::Reflect_obj::fields(val);
HXDLIN(  60)						while((_g1 < _g2->length)){
HXLINE(  60)							::String n = _g2->__get(_g1);
HXDLIN(  60)							_g1 = (_g1 + 1);
HXDLIN(  60)							lua_pushstring(l,n);
HXDLIN(  60)							::llua::Convert_obj::toLua(l,::Reflect_obj::field(val,n));
HXDLIN(  60)							lua_settable(l,-3);
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE(  57)					::hx::Class _hx_switch_0 = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
            					if (  (_hx_switch_0==::hx::ArrayBase::__mClass) ){
HXLINE(  56)						::cpp::VirtualArray arr = ( (::cpp::VirtualArray)(val) );
HXDLIN(  56)						int size = arr->get_length();
HXDLIN(  56)						lua_createtable(l,size,0);
HXDLIN(  56)						{
HXLINE(  56)							int _g3 = 0;
HXDLIN(  56)							int _g4 = size;
HXDLIN(  56)							while((_g3 < _g4)){
HXLINE(  56)								_g3 = (_g3 + 1);
HXDLIN(  56)								int i = (_g3 - 1);
HXDLIN(  56)								lua_pushnumber(l,( (Float)((i + 1)) ));
HXDLIN(  56)								::llua::Convert_obj::toLua(l,arr->__get(i));
HXDLIN(  56)								lua_settable(l,-3);
            							}
            						}
HXDLIN(  56)						goto _hx_goto_2;
            					}
            					if (  (_hx_switch_0==::hx::ClassOf< ::String >()) ){
HXLINE(  54)						lua_pushstring(l,::hx::TCast< ::String >::cast(val));
HXDLIN(  54)						goto _hx_goto_2;
            					}
            					if (  (_hx_switch_0==::hx::ClassOf< ::haxe::ds::ObjectMap >()) ||  (_hx_switch_0==::hx::ClassOf< ::haxe::ds::StringMap >()) ){
HXLINE(  58)						 ::haxe::ds::StringMap res = ( ( ::haxe::ds::StringMap)(val) );
HXDLIN(  58)						int tLen = 0;
HXDLIN(  58)						{
HXLINE(  58)							 ::Dynamic n1 = res->iterator();
HXDLIN(  58)							while(( (bool)(n1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  58)								 ::Dynamic n2 = n1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN(  58)								tLen = (tLen + 1);
            							}
            						}
HXDLIN(  58)						lua_createtable(l,tLen,0);
HXDLIN(  58)						{
HXLINE(  58)							::Dynamic map = res;
HXDLIN(  58)							::Dynamic _g_map = map;
HXDLIN(  58)							 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN(  58)							while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  58)								::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  58)								 ::Dynamic _g_value = ::haxe::IMap_obj::get(_g_map,key);
HXDLIN(  58)								::String _g_key = key;
HXDLIN(  58)								::String index = _g_key;
HXDLIN(  58)								 ::Dynamic val1 = _g_value;
HXDLIN(  58)								{
HXLINE(  58)									lua_pushstring(l,::Std_obj::string(index));
HXDLIN(  58)									::llua::Convert_obj::toLua(l,val1);
HXDLIN(  58)									lua_settable(l,-3);
            								}
            							}
            						}
HXDLIN(  58)						goto _hx_goto_2;
            					}
            					/* default */{
HXLINE(  62)						if (::llua::Convert_obj::enableUnsupportedTraces) {
HXLINE(  62)							 ::Dynamic _hx_tmp1 = ::haxe::Log_obj::trace;
HXDLIN(  62)							::String _hx_tmp2;
HXDLIN(  62)							if (::hx::IsNull( val )) {
HXLINE(  62)								_hx_tmp2 = HX_("null",87,9e,0e,49);
            							}
            							else {
HXLINE(  62)								_hx_tmp2 = ::Std_obj::string(val);
            							}
HXDLIN(  62)							::String _hx_tmp3 = ((((HX_("Haxe value of ",a0,a2,a0,58) + _hx_tmp2) + HX_(" of type ",7d,e8,d0,a2)) + ::Std_obj::string(::Type_obj::_hx_typeof(val))) + HX_(" not supported!",40,ec,72,be));
HXDLIN(  62)							_hx_tmp1(_hx_tmp3,::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),62,HX_("llua.Convert",31,b8,44,19),HX_("toLua",fd,0a,14,14)));
            						}
HXLINE(  63)						return false;
            					}
            					_hx_goto_2:;
            				}
            				break;
            				default:{
HXLINE(  62)					if (::llua::Convert_obj::enableUnsupportedTraces) {
HXLINE(  62)						 ::Dynamic _hx_tmp4 = ::haxe::Log_obj::trace;
HXDLIN(  62)						::String _hx_tmp5;
HXDLIN(  62)						if (::hx::IsNull( val )) {
HXLINE(  62)							_hx_tmp5 = HX_("null",87,9e,0e,49);
            						}
            						else {
HXLINE(  62)							_hx_tmp5 = ::Std_obj::string(val);
            						}
HXDLIN(  62)						::String _hx_tmp6 = ((((HX_("Haxe value of ",a0,a2,a0,58) + _hx_tmp5) + HX_(" of type ",7d,e8,d0,a2)) + ::Std_obj::string(::Type_obj::_hx_typeof(val))) + HX_(" not supported!",40,ec,72,be));
HXDLIN(  62)						_hx_tmp4(_hx_tmp6,::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),62,HX_("llua.Convert",31,b8,44,19),HX_("toLua",fd,0a,14,14)));
            					}
HXLINE(  63)					return false;
            				}
            			}
            		}
HXLINE(  65)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,toLua,return )

int Convert_obj::callback_handler( ::Dynamic cbf, cpp::Reference<lua_State> l){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_68_callback_handler)
HXLINE(  69)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  70)			 cpp::Reference<lua_State> l1 = l;
HXLINE(  72)			int nparams = lua_gettop(l1);
HXLINE(  73)			::cpp::VirtualArray args = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  76)			{
HXLINE(  76)				int _g = 0;
HXDLIN(  76)				int _g1 = nparams;
HXDLIN(  76)				while((_g < _g1)){
HXLINE(  76)					_g = (_g + 1);
HXDLIN(  76)					int i = (_g - 1);
HXDLIN(  76)					args->set(i,::llua::Convert_obj::fromLua(l1,(i + 1)));
            				}
            			}
HXLINE(  80)			if (::hx::IsNull( cbf )) {
HXLINE(  80)				return 0;
            			}
HXLINE(  83)			 ::Dynamic ret = null();
HXLINE(  86)			ret = ::Reflect_obj::callMethod(null(),cbf,args);
HXLINE(  87)			::haxe::Log_obj::trace(ret,::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),87,HX_("llua.Convert",31,b8,44,19),HX_("callback_handler",10,70,1b,10)));
HXLINE(  88)			if (::hx::IsNotNull( ret )) {
HXLINE(  89)				::llua::Convert_obj::toLua(l1,ret);
HXLINE(  90)				return 1;
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g2 = _hx_e;
HXLINE(  92)				 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g2);
HXLINE(  93)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  93)				::String _hx_tmp1 = (HX_("",00,00,00,00) + ::Std_obj::string(e));
HXDLIN(  93)				_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),93,HX_("llua.Convert",31,b8,44,19),HX_("callback_handler",10,70,1b,10)));
HXLINE(  94)				HX_STACK_DO_THROW(e);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  96)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,callback_handler,return )

void Convert_obj::arrayToLua( cpp::Reference<lua_State> l,::cpp::VirtualArray arr){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_100_arrayToLua)
HXLINE( 102)		int size = arr->get_length();
HXLINE( 103)		lua_createtable(l,size,0);
HXLINE( 105)		{
HXLINE( 105)			int _g = 0;
HXDLIN( 105)			int _g1 = size;
HXDLIN( 105)			while((_g < _g1)){
HXLINE( 105)				_g = (_g + 1);
HXDLIN( 105)				int i = (_g - 1);
HXLINE( 106)				lua_pushnumber(l,( (Float)((i + 1)) ));
HXLINE( 107)				::llua::Convert_obj::toLua(l,arr->__get(i));
HXLINE( 108)				lua_settable(l,-3);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,arrayToLua,(void))

void Convert_obj::mapToLua( cpp::Reference<lua_State> l, ::haxe::ds::StringMap res){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_113_mapToLua)
HXLINE( 114)		int tLen = 0;
HXLINE( 115)		{
HXLINE( 115)			 ::Dynamic n = res->iterator();
HXDLIN( 115)			while(( (bool)(n->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 115)				 ::Dynamic n1 = n->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 115)				tLen = (tLen + 1);
            			}
            		}
HXLINE( 116)		lua_createtable(l,tLen,0);
HXLINE( 117)		{
HXLINE( 117)			::Dynamic map = res;
HXDLIN( 117)			::Dynamic _g_map = map;
HXDLIN( 117)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 117)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 117)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 117)				 ::Dynamic _g_value = ::haxe::IMap_obj::get(_g_map,key);
HXDLIN( 117)				::String _g_key = key;
HXDLIN( 117)				::String index = _g_key;
HXDLIN( 117)				 ::Dynamic val = _g_value;
HXDLIN( 117)				{
HXLINE( 118)					lua_pushstring(l,::Std_obj::string(index));
HXLINE( 119)					::llua::Convert_obj::toLua(l,val);
HXLINE( 120)					lua_settable(l,-3);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,mapToLua,(void))

void Convert_obj::objectToLua( cpp::Reference<lua_State> l, ::Dynamic res){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_125_objectToLua)
HXLINE( 126)		lua_createtable(l,::Reflect_obj::fields(res)->length,0);
HXLINE( 127)		{
HXLINE( 127)			int _g = 0;
HXDLIN( 127)			::Array< ::String > _g1 = ::Reflect_obj::fields(res);
HXDLIN( 127)			while((_g < _g1->length)){
HXLINE( 127)				::String n = _g1->__get(_g);
HXDLIN( 127)				_g = (_g + 1);
HXLINE( 128)				lua_pushstring(l,n);
HXLINE( 129)				::llua::Convert_obj::toLua(l,::Reflect_obj::field(res,n));
HXLINE( 130)				lua_settable(l,-3);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,objectToLua,(void))

 ::Dynamic Convert_obj::fromLua( cpp::Reference<lua_State> l,int v){
            	HX_GC_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_138_fromLua)
HXLINE( 140)		 ::Dynamic ret = null();
HXLINE( 141)		int luaType = lua_type(l,v);
HXLINE( 142)		switch((int)(luaType)){
            			case (int)0: {
HXLINE( 144)				ret = null();
            			}
            			break;
            			case (int)1: {
HXLINE( 146)				ret = (lua_toboolean(l,v) != 0);
            			}
            			break;
            			case (int)3: {
HXLINE( 148)				ret = lua_tonumber(l,v);
            			}
            			break;
            			case (int)4: {
HXLINE( 150)				ret = linc::lua::tostring(l,v);
            			}
            			break;
            			case (int)5: {
HXLINE( 152)				ret = ::llua::Convert_obj::toHaxeObj(l,v);
            			}
            			break;
            			case (int)6: {
HXLINE( 154)				ret =  ::llua::LuaCallback_obj::__alloc( HX_CTX ,l,luaL_ref(l,-10000));
            			}
            			break;
            			default:{
HXLINE( 166)				ret = null();
HXLINE( 167)				if (::llua::Convert_obj::enableUnsupportedTraces) {
HXLINE( 167)					::haxe::Log_obj::trace(((((HX_("Return value ",df,7c,93,94) + v) + HX_(" of type ",7d,e8,d0,a2)) + luaType) + HX_(" not supported",c1,3c,82,53)),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),167,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            				}
            			}
            		}
HXLINE( 170)		return ret;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,fromLua,return )

 ::Dynamic Convert_obj::toHaxeObj( cpp::Reference<lua_State> l,int i){
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_228_toHaxeObj)
HXLINE( 229)		int count = 0;
HXLINE( 230)		bool array = true;
HXLINE(   8)		{
HXLINE(   9)			lua_pushnil(l);
HXLINE(  10)			while(true){
HXLINE(  10)				int _hx_tmp;
HXDLIN(  10)				if ((i < 0)) {
HXLINE(  10)					_hx_tmp = (i - 1);
            				}
            				else {
HXLINE(  10)					_hx_tmp = i;
            				}
HXDLIN(  10)				if (!((lua_next(l,_hx_tmp) != 0))) {
HXLINE(  10)					goto _hx_goto_17;
            				}
HXLINE( 232)				{
HXLINE( 233)					if (array) {
HXLINE( 234)						if ((lua_type(l,-2) != 3)) {
HXLINE( 234)							array = false;
            						}
            						else {
HXLINE( 236)							Float index = lua_tonumber(l,-2);
HXLINE( 237)							bool _hx_tmp1;
HXDLIN( 237)							if (!((index < 0))) {
HXLINE( 237)								_hx_tmp1 = (::Std_obj::_hx_int(index) != index);
            							}
            							else {
HXLINE( 237)								_hx_tmp1 = true;
            							}
HXDLIN( 237)							if (_hx_tmp1) {
HXLINE( 237)								array = false;
            							}
            						}
            					}
HXLINE( 240)					count = (count + 1);
            				}
HXLINE(  12)				lua_pop(l,1);
            			}
            			_hx_goto_17:;
            		}
HXLINE( 244)		if ((count == 0)) {
HXLINE( 245)			return  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
            		else {
HXLINE( 246)			if (array) {
HXLINE( 247)				::cpp::VirtualArray v = ::cpp::VirtualArray_obj::__new(0);
HXLINE(   8)				{
HXLINE(   9)					lua_pushnil(l);
HXLINE(  10)					while(true){
HXLINE(  10)						int _hx_tmp2;
HXDLIN(  10)						if ((i < 0)) {
HXLINE(  10)							_hx_tmp2 = (i - 1);
            						}
            						else {
HXLINE(  10)							_hx_tmp2 = i;
            						}
HXDLIN(  10)						if (!((lua_next(l,_hx_tmp2) != 0))) {
HXLINE(  10)							goto _hx_goto_18;
            						}
HXLINE( 248)						{
HXLINE( 249)							int index1 = (::Std_obj::_hx_int(lua_tonumber(l,-2)) - 1);
HXLINE( 250)							v->set(index1,::llua::Convert_obj::fromLua(l,-1));
            						}
HXLINE(  12)						lua_pop(l,1);
            					}
            					_hx_goto_18:;
            				}
HXLINE( 252)				return v;
            			}
            			else {
HXLINE( 254)				 ::Dynamic v1 =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE(   8)				{
HXLINE(   9)					lua_pushnil(l);
HXLINE(  10)					while(true){
HXLINE(  10)						int _hx_tmp3;
HXDLIN(  10)						if ((i < 0)) {
HXLINE(  10)							_hx_tmp3 = (i - 1);
            						}
            						else {
HXLINE(  10)							_hx_tmp3 = i;
            						}
HXDLIN(  10)						if (!((lua_next(l,_hx_tmp3) != 0))) {
HXLINE(  10)							goto _hx_goto_19;
            						}
HXLINE( 256)						{
HXLINE( 256)							int _g = lua_type(l,-2);
HXDLIN( 256)							{
HXLINE( 257)								int t = _g;
HXLINE( 256)								if ((t == 4)) {
HXLINE( 257)									::String key = linc::lua::tostring(l,-2);
HXDLIN( 257)									 ::Dynamic value = ::llua::Convert_obj::fromLua(l,-1);
HXDLIN( 257)									::Reflect_obj::setField(v1,key,value);
            								}
            								else {
HXLINE( 258)									int t1 = _g;
HXDLIN( 258)									if ((t1 == 3)) {
HXLINE( 258)										::String key1 = ::Std_obj::string(lua_tonumber(l,-2));
HXDLIN( 258)										 ::Dynamic value1 = ::llua::Convert_obj::fromLua(l,-1);
HXDLIN( 258)										::Reflect_obj::setField(v1,key1,value1);
            									}
            								}
            							}
            						}
HXLINE(  12)						lua_pop(l,1);
            					}
            					_hx_goto_19:;
            				}
HXLINE( 261)				return v1;
            			}
            		}
HXLINE( 244)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Convert_obj,toHaxeObj,return )


Convert_obj::Convert_obj()
{
}

bool Convert_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toLua") ) { outValue = toLua_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromLua") ) { outValue = fromLua_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapToLua") ) { outValue = mapToLua_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toHaxeObj") ) { outValue = toHaxeObj_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"arrayToLua") ) { outValue = arrayToLua_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectToLua") ) { outValue = objectToLua_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowFunctions") ) { outValue = ( allowFunctions ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callback_handler") ) { outValue = callback_handler_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cleanFunctionRefs") ) { outValue = cleanFunctionRefs_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"functionReferences") ) { outValue = ( functionReferences ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"enableUnsupportedTraces") ) { outValue = ( enableUnsupportedTraces ); return true; }
	}
	return false;
}

bool Convert_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"allowFunctions") ) { allowFunctions=ioValue.Cast< bool >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"functionReferences") ) { functionReferences=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"enableUnsupportedTraces") ) { enableUnsupportedTraces=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Convert_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Convert_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &Convert_obj::enableUnsupportedTraces,HX_("enableUnsupportedTraces",e0,6a,4d,f5)},
	{::hx::fsBool,(void *) &Convert_obj::allowFunctions,HX_("allowFunctions",92,ec,87,86)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Convert_obj::functionReferences,HX_("functionReferences",80,47,a3,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Convert_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Convert_obj::enableUnsupportedTraces,"enableUnsupportedTraces");
	HX_MARK_MEMBER_NAME(Convert_obj::allowFunctions,"allowFunctions");
	HX_MARK_MEMBER_NAME(Convert_obj::functionReferences,"functionReferences");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Convert_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Convert_obj::enableUnsupportedTraces,"enableUnsupportedTraces");
	HX_VISIT_MEMBER_NAME(Convert_obj::allowFunctions,"allowFunctions");
	HX_VISIT_MEMBER_NAME(Convert_obj::functionReferences,"functionReferences");
};

#endif

::hx::Class Convert_obj::__mClass;

static ::String Convert_obj_sStaticFields[] = {
	HX_("enableUnsupportedTraces",e0,6a,4d,f5),
	HX_("allowFunctions",92,ec,87,86),
	HX_("functionReferences",80,47,a3,1d),
	HX_("cleanFunctionRefs",21,fa,f8,2a),
	HX_("toLua",fd,0a,14,14),
	HX_("callback_handler",10,70,1b,10),
	HX_("arrayToLua",a4,22,41,0e),
	HX_("mapToLua",c1,7a,56,8b),
	HX_("objectToLua",be,27,43,83),
	HX_("fromLua",6e,2a,fd,57),
	HX_("toHaxeObj",36,e7,fe,37),
	::String(null())
};

void Convert_obj::__register()
{
	Convert_obj _hx_dummy;
	Convert_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("llua.Convert",31,b8,44,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Convert_obj::__GetStatic;
	__mClass->mSetStaticField = &Convert_obj::__SetStatic;
	__mClass->mMarkFunc = Convert_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Convert_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Convert_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Convert_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Convert_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Convert_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Convert_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_14_boot)
HXDLIN(  14)		enableUnsupportedTraces = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_15_boot)
HXDLIN(  15)		allowFunctions = true;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4b5f1938ae03ba97_16_boot)
HXDLIN(  16)		functionReferences =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace llua
