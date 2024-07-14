// Generated by Haxe 4.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_22_new,"lime.utils.ObjectPool","new",0x6a851d63,"lime.utils.ObjectPool.new","lime/utils/ObjectPool.hx",22,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_48_add,"lime.utils.ObjectPool","add",0x6a7b3f24,"lime.utils.ObjectPool.add","lime/utils/ObjectPool.hx",48,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_56___default_clean,"lime.utils.ObjectPool","__default_clean",0xb88b96ae,"lime.utils.ObjectPool.__default_clean","lime/utils/ObjectPool.hx",56,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_59_clear,"lime.utils.ObjectPool","clear",0x9b3c4550,"lime.utils.ObjectPool.clear","lime/utils/ObjectPool.hx",59,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_72___default_create,"lime.utils.ObjectPool","__default_create",0x35ffc237,"lime.utils.ObjectPool.__default_create","lime/utils/ObjectPool.hx",72,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_76_get,"lime.utils.ObjectPool","get",0x6a7fcd99,"lime.utils.ObjectPool.get","lime/utils/ObjectPool.hx",76,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_98_release,"lime.utils.ObjectPool","release",0xc47d104a,"lime.utils.ObjectPool.release","lime/utils/ObjectPool.hx",98,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_125_remove,"lime.utils.ObjectPool","remove",0x36611321,"lime.utils.ObjectPool.remove","lime/utils/ObjectPool.hx",125,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_151___addInactive,"lime.utils.ObjectPool","__addInactive",0xbe535e4f,"lime.utils.ObjectPool.__addInactive","lime/utils/ObjectPool.hx",151,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_173___getInactive,"lime.utils.ObjectPool","__getInactive",0xb2eae9c4,"lime.utils.ObjectPool.__getInactive","lime/utils/ObjectPool.hx",173,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_212___removeInactive,"lime.utils.ObjectPool","__removeInactive",0x1e106c0c,"lime.utils.ObjectPool.__removeInactive","lime/utils/ObjectPool.hx",212,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_249_get_size,"lime.utils.ObjectPool","get_size",0x7e180467,"lime.utils.ObjectPool.get_size","lime/utils/ObjectPool.hx",249,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_06bcacad9f56fcf1_253_set_size,"lime.utils.ObjectPool","set_size",0x2c755ddb,"lime.utils.ObjectPool.set_size","lime/utils/ObjectPool.hx",253,0xc114d76b)
namespace lime{
namespace utils{

void ObjectPool_obj::__construct( ::Dynamic create, ::Dynamic clean, ::Dynamic size){
            	HX_GC_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_22_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(create,"create")
            	HX_STACK_ARG(clean,"clean")
            	HX_STACK_ARG(size,"size")
HXLINE(  22)
HXLINE(  23)		this->_hx___pool =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  25)		this->activeObjects = 0;
HXLINE(  26)		this->inactiveObjects = 0;
HXLINE(  28)		this->_hx___inactiveObject0 = null();
HXLINE(  29)		this->_hx___inactiveObject1 = null();
HXLINE(  30)		this->_hx___inactiveObjectList =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE(  32)		if (::hx::IsNotNull( create )) {
HXLINE(  34)			this->create = create;
            		}
HXLINE(  36)		if (::hx::IsNotNull( clean )) {
HXLINE(  38)			this->clean = clean;
            		}
HXLINE(  40)		if (::hx::IsNotNull( size )) {
HXLINE(  42)			this->set_size(size);
            		}
            	}

Dynamic ObjectPool_obj::__CreateEmpty() { return new ObjectPool_obj; }

void *ObjectPool_obj::_hx_vtable = 0;

Dynamic ObjectPool_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ObjectPool_obj > _hx_result = new ObjectPool_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ObjectPool_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x00303d73;
}

void ObjectPool_obj::add( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_48_add)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
HXLINE(  48)
HXDLIN(  48)		if (!(::haxe::IMap_obj::exists(this->_hx___pool,object))) {
HXLINE(  50)			::haxe::IMap_obj::set(this->_hx___pool,object,false);
HXLINE(  51)			this->clean(object);
HXLINE(  52)			{
HXLINE(  52)				::haxe::IMap_obj::set(this->_hx___pool,object,false);
HXDLIN(  52)				if (::hx::IsNull( this->_hx___inactiveObject0 )) {
HXLINE(  52)					this->_hx___inactiveObject0 = object;
            				}
            				else {
HXLINE(  52)					if (::hx::IsNull( this->_hx___inactiveObject1 )) {
HXLINE(  52)						this->_hx___inactiveObject1 = object;
            					}
            					else {
HXLINE(  52)						this->_hx___inactiveObjectList->add(object);
            					}
            				}
HXDLIN(  52)				this->inactiveObjects++;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,add,(void))

HX_BEGIN_DEFAULT_FUNC(__default_clean,ObjectPool_obj)
void _hx_run( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_56___default_clean)
            	HX_STACK_THIS(__this)
            	HX_STACK_ARG(object,"object")
HXLINE(  56)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

void ObjectPool_obj::clear(){
            	HX_GC_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_59_clear)
            	HX_STACK_THIS(this)
HXLINE(  59)
HXLINE(  60)		this->_hx___pool =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  62)		this->activeObjects = 0;
HXLINE(  63)		this->inactiveObjects = 0;
HXLINE(  65)		this->_hx___inactiveObject0 = null();
HXLINE(  66)		this->_hx___inactiveObject1 = null();
HXLINE(  67)		this->_hx___inactiveObjectList->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,clear,(void))

HX_BEGIN_DEFAULT_FUNC(__default_create,ObjectPool_obj)
 ::Dynamic _hx_run(){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_72___default_create)
            	HX_STACK_THIS(__this)
HXLINE(  72)
HXDLIN(  72)		return null();
            	}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

 ::Dynamic ObjectPool_obj::get(){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_76_get)
            	HX_STACK_THIS(this)
HXLINE(  76)
HXLINE(  77)		HX_VARI(  ::Dynamic,object) = null();
HXLINE(  79)		if ((this->inactiveObjects > 0)) {
HXLINE(  81)			 ::Dynamic object1 = null();
HXDLIN(  81)			if (::hx::IsNotNull( this->_hx___inactiveObject0 )) {
HXLINE(  81)				object1 = this->_hx___inactiveObject0;
HXDLIN(  81)				this->_hx___inactiveObject0 = null();
            			}
            			else {
HXLINE(  81)				if (::hx::IsNotNull( this->_hx___inactiveObject1 )) {
HXLINE(  81)					object1 = this->_hx___inactiveObject1;
HXDLIN(  81)					this->_hx___inactiveObject1 = null();
            				}
            				else {
HXLINE(  81)					object1 = this->_hx___inactiveObjectList->pop();
HXDLIN(  81)					if ((this->_hx___inactiveObjectList->length > 0)) {
HXLINE(  81)						this->_hx___inactiveObject0 = this->_hx___inactiveObjectList->pop();
            					}
HXDLIN(  81)					if ((this->_hx___inactiveObjectList->length > 0)) {
HXLINE(  81)						this->_hx___inactiveObject1 = this->_hx___inactiveObjectList->pop();
            					}
            				}
            			}
HXDLIN(  81)			::haxe::IMap_obj::set(this->_hx___pool,object1,true);
HXDLIN(  81)			this->inactiveObjects--;
HXDLIN(  81)			this->activeObjects++;
HXDLIN(  81)			object = object1;
            		}
            		else {
HXLINE(  83)			bool _hx_tmp;
HXDLIN(  83)			if (::hx::IsNotNull( this->_hx___size )) {
HXLINE(  83)				_hx_tmp = ::hx::IsLess( this->activeObjects,this->_hx___size );
            			}
            			else {
HXLINE(  83)				_hx_tmp = true;
            			}
HXDLIN(  83)			if (_hx_tmp) {
HXLINE(  85)				object = this->create();
HXLINE(  87)				if (::hx::IsNotNull( object )) {
HXLINE(  89)					::haxe::IMap_obj::set(this->_hx___pool,object,true);
HXLINE(  90)					this->activeObjects++;
            				}
            			}
            		}
HXLINE(  94)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,get,return )

void ObjectPool_obj::release( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_98_release)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
HXLINE(  98)
HXLINE( 100)		if (!(::haxe::IMap_obj::exists(this->_hx___pool,object))) {
HXLINE( 102)			::lime::utils::Log_obj::error(HX_("Object is not a member of the pool",0f,bf,52,70),::hx::SourceInfo(HX_("lime/utils/ObjectPool.hx",6b,d7,14,c1),102,HX_("lime.utils.ObjectPool",f1,2f,f4,28),HX_("release",c7,85,ed,58)));
            		}
            		else {
HXLINE( 104)			if (!(( (bool)(::haxe::IMap_obj::get(this->_hx___pool,object)) ))) {
HXLINE( 106)				::lime::utils::Log_obj::error(HX_("Object has already been released",22,4c,b8,02),::hx::SourceInfo(HX_("lime/utils/ObjectPool.hx",6b,d7,14,c1),106,HX_("lime.utils.ObjectPool",f1,2f,f4,28),HX_("release",c7,85,ed,58)));
            			}
            		}
HXLINE( 110)		this->activeObjects--;
HXLINE( 112)		bool _hx_tmp;
HXDLIN( 112)		if (::hx::IsNotNull( this->_hx___size )) {
HXLINE( 112)			_hx_tmp = ::hx::IsLess( (this->activeObjects + this->inactiveObjects),this->_hx___size );
            		}
            		else {
HXLINE( 112)			_hx_tmp = true;
            		}
HXDLIN( 112)		if (_hx_tmp) {
HXLINE( 114)			this->clean(object);
HXLINE( 115)			{
HXLINE( 115)				::haxe::IMap_obj::set(this->_hx___pool,object,false);
HXDLIN( 115)				if (::hx::IsNull( this->_hx___inactiveObject0 )) {
HXLINE( 115)					this->_hx___inactiveObject0 = object;
            				}
            				else {
HXLINE( 115)					if (::hx::IsNull( this->_hx___inactiveObject1 )) {
HXLINE( 115)						this->_hx___inactiveObject1 = object;
            					}
            					else {
HXLINE( 115)						this->_hx___inactiveObjectList->add(object);
            					}
            				}
HXDLIN( 115)				this->inactiveObjects++;
            			}
            		}
            		else {
HXLINE( 119)			::haxe::IMap_obj::remove(this->_hx___pool,object);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,release,(void))

void ObjectPool_obj::remove( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_125_remove)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
HXLINE( 125)
HXDLIN( 125)		if (::haxe::IMap_obj::exists(this->_hx___pool,object)) {
HXLINE( 127)			::haxe::IMap_obj::remove(this->_hx___pool,object);
HXLINE( 129)			if (::hx::IsEq( this->_hx___inactiveObject0,object )) {
HXLINE( 131)				this->_hx___inactiveObject0 = null();
HXLINE( 132)				this->inactiveObjects--;
            			}
            			else {
HXLINE( 134)				if (::hx::IsEq( this->_hx___inactiveObject1,object )) {
HXLINE( 136)					this->_hx___inactiveObject1 = null();
HXLINE( 137)					this->inactiveObjects--;
            				}
            				else {
HXLINE( 139)					if (this->_hx___inactiveObjectList->remove(object)) {
HXLINE( 141)						this->inactiveObjects--;
            					}
            					else {
HXLINE( 145)						this->activeObjects--;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,remove,(void))

void ObjectPool_obj::_hx___addInactive( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_151___addInactive)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
HXLINE( 151)
HXLINE( 153)		::haxe::IMap_obj::set(this->_hx___pool,object,false);
HXLINE( 156)		if (::hx::IsNull( this->_hx___inactiveObject0 )) {
HXLINE( 158)			this->_hx___inactiveObject0 = object;
            		}
            		else {
HXLINE( 160)			if (::hx::IsNull( this->_hx___inactiveObject1 )) {
HXLINE( 162)				this->_hx___inactiveObject1 = object;
            			}
            			else {
HXLINE( 166)				this->_hx___inactiveObjectList->add(object);
            			}
            		}
HXLINE( 169)		this->inactiveObjects++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,_hx___addInactive,(void))

 ::Dynamic ObjectPool_obj::_hx___getInactive(){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_173___getInactive)
            	HX_STACK_THIS(this)
HXLINE( 173)
HXLINE( 174)		HX_VARI(  ::Dynamic,object) = null();
HXLINE( 176)		if (::hx::IsNotNull( this->_hx___inactiveObject0 )) {
HXLINE( 178)			object = this->_hx___inactiveObject0;
HXLINE( 179)			this->_hx___inactiveObject0 = null();
            		}
            		else {
HXLINE( 181)			if (::hx::IsNotNull( this->_hx___inactiveObject1 )) {
HXLINE( 183)				object = this->_hx___inactiveObject1;
HXLINE( 184)				this->_hx___inactiveObject1 = null();
            			}
            			else {
HXLINE( 188)				object = this->_hx___inactiveObjectList->pop();
HXLINE( 190)				if ((this->_hx___inactiveObjectList->length > 0)) {
HXLINE( 192)					this->_hx___inactiveObject0 = this->_hx___inactiveObjectList->pop();
            				}
HXLINE( 195)				if ((this->_hx___inactiveObjectList->length > 0)) {
HXLINE( 197)					this->_hx___inactiveObject1 = this->_hx___inactiveObjectList->pop();
            				}
            			}
            		}
HXLINE( 202)		::haxe::IMap_obj::set(this->_hx___pool,object,true);
HXLINE( 205)		this->inactiveObjects--;
HXLINE( 206)		this->activeObjects++;
HXLINE( 208)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,_hx___getInactive,return )

void ObjectPool_obj::_hx___removeInactive(int count){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_212___removeInactive)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(count,"count")
HXLINE( 212)
HXLINE( 213)		bool _hx_tmp;
HXDLIN( 213)		if ((count > 0)) {
HXLINE( 213)			_hx_tmp = (this->inactiveObjects == 0);
            		}
            		else {
HXLINE( 213)			_hx_tmp = true;
            		}
HXDLIN( 213)		if (_hx_tmp) {
HXLINE( 213)			return;
            		}
HXLINE( 215)		if (::hx::IsNotNull( this->_hx___inactiveObject0 )) {
HXLINE( 217)			::haxe::IMap_obj::remove(this->_hx___pool,this->_hx___inactiveObject0);
HXLINE( 218)			this->_hx___inactiveObject0 = null();
HXLINE( 219)			this->inactiveObjects--;
HXLINE( 220)			count = (count - 1);
            		}
HXLINE( 223)		bool _hx_tmp1;
HXDLIN( 223)		if ((count != 0)) {
HXLINE( 223)			_hx_tmp1 = (this->inactiveObjects == 0);
            		}
            		else {
HXLINE( 223)			_hx_tmp1 = true;
            		}
HXDLIN( 223)		if (_hx_tmp1) {
HXLINE( 223)			return;
            		}
HXLINE( 225)		if (::hx::IsNotNull( this->_hx___inactiveObject1 )) {
HXLINE( 227)			::haxe::IMap_obj::remove(this->_hx___pool,this->_hx___inactiveObject1);
HXLINE( 228)			this->_hx___inactiveObject1 = null();
HXLINE( 229)			this->inactiveObjects--;
HXLINE( 230)			count = (count - 1);
            		}
HXLINE( 233)		bool _hx_tmp2;
HXDLIN( 233)		if ((count != 0)) {
HXLINE( 233)			_hx_tmp2 = (this->inactiveObjects == 0);
            		}
            		else {
HXLINE( 233)			_hx_tmp2 = true;
            		}
HXDLIN( 233)		if (_hx_tmp2) {
HXLINE( 233)			return;
            		}
HXLINE( 235)		{
HXLINE( 235)			 ::haxe::ds::_List::ListNode _g_head = this->_hx___inactiveObjectList->h;
HXDLIN( 235)			while(::hx::IsNotNull( _g_head )){
HXLINE( 235)				 ::Dynamic val = _g_head->item;
HXDLIN( 235)				_g_head = _g_head->next;
HXDLIN( 235)				HX_VARI(  ::Dynamic,object) = val;
HXLINE( 237)				::haxe::IMap_obj::remove(this->_hx___pool,object);
HXLINE( 238)				this->_hx___inactiveObjectList->remove(object);
HXLINE( 239)				this->inactiveObjects--;
HXLINE( 240)				count = (count - 1);
HXLINE( 242)				bool _hx_tmp3;
HXDLIN( 242)				if ((count != 0)) {
HXLINE( 242)					_hx_tmp3 = (this->inactiveObjects == 0);
            				}
            				else {
HXLINE( 242)					_hx_tmp3 = true;
            				}
HXDLIN( 242)				if (_hx_tmp3) {
HXLINE( 242)					return;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,_hx___removeInactive,(void))

 ::Dynamic ObjectPool_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_249_get_size)
            	HX_STACK_THIS(this)
HXLINE( 249)
HXDLIN( 249)		return this->_hx___size;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,get_size,return )

 ::Dynamic ObjectPool_obj::set_size( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_06bcacad9f56fcf1_253_set_size)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 253)
HXLINE( 254)		if (::hx::IsNull( value )) {
HXLINE( 256)			this->_hx___size = null();
            		}
            		else {
HXLINE( 260)			HX_VARI( int,current) = (this->inactiveObjects + this->activeObjects);
HXLINE( 261)			this->_hx___size = value;
HXLINE( 263)			if (::hx::IsGreater( current,value )) {
HXLINE( 265)				this->_hx___removeInactive((current - ( (int)(value) )));
            			}
            			else {
HXLINE( 267)				if (::hx::IsGreater( value,current )) {
HXLINE( 269)					HX_VAR(  ::Dynamic,object);
HXLINE( 271)					{
HXLINE( 271)						int _g = 0;
HXDLIN( 271)						int _g1 = (( (int)(value) ) - current);
HXDLIN( 271)						while((_g < _g1)){
HXLINE( 271)							_g = (_g + 1);
HXDLIN( 271)							HX_VARI( int,i) = (_g - 1);
HXLINE( 273)							object = this->create();
HXLINE( 275)							if (::hx::IsNotNull( object )) {
HXLINE( 277)								::haxe::IMap_obj::set(this->_hx___pool,object,false);
HXLINE( 278)								this->_hx___inactiveObjectList->add(object);
HXLINE( 279)								this->inactiveObjects++;
            							}
            							else {
HXLINE( 283)								goto _hx_goto_13;
            							}
            						}
            						_hx_goto_13:;
            					}
            				}
            			}
            		}
HXLINE( 289)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,set_size,return )


void ObjectPool_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,ObjectPool_obj *_hx_obj) {
	if (!_hx_obj->create.mPtr) _hx_obj->create = new __default_create(_hx_obj);
	if (!_hx_obj->clean.mPtr) _hx_obj->clean = new __default_clean(_hx_obj);
}
::hx::ObjectPtr< ObjectPool_obj > ObjectPool_obj::__new( ::Dynamic create, ::Dynamic clean, ::Dynamic size) {
	::hx::ObjectPtr< ObjectPool_obj > __this = new ObjectPool_obj();
	__this->__construct(create,clean,size);
	return __this;
}

::hx::ObjectPtr< ObjectPool_obj > ObjectPool_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic create, ::Dynamic clean, ::Dynamic size) {
	ObjectPool_obj *__this = (ObjectPool_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ObjectPool_obj), true, "lime.utils.ObjectPool"));
	*(void **)__this = ObjectPool_obj::_hx_vtable;
	lime::utils::ObjectPool_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(create,clean,size);
	return __this;
}

ObjectPool_obj::ObjectPool_obj()
{
	create = new __default_create(this);
	clean = new __default_clean(this);
}

void ObjectPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectPool);
	HX_MARK_MEMBER_NAME(activeObjects,"activeObjects");
	HX_MARK_MEMBER_NAME(inactiveObjects,"inactiveObjects");
	HX_MARK_MEMBER_NAME(_hx___inactiveObject0,"__inactiveObject0");
	HX_MARK_MEMBER_NAME(_hx___inactiveObject1,"__inactiveObject1");
	HX_MARK_MEMBER_NAME(_hx___inactiveObjectList,"__inactiveObjectList");
	HX_MARK_MEMBER_NAME(_hx___pool,"__pool");
	HX_MARK_MEMBER_NAME(_hx___size,"__size");
	HX_MARK_MEMBER_NAME(clean,"clean");
	HX_MARK_MEMBER_NAME(create,"create");
	HX_MARK_END_CLASS();
}

void ObjectPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(activeObjects,"activeObjects");
	HX_VISIT_MEMBER_NAME(inactiveObjects,"inactiveObjects");
	HX_VISIT_MEMBER_NAME(_hx___inactiveObject0,"__inactiveObject0");
	HX_VISIT_MEMBER_NAME(_hx___inactiveObject1,"__inactiveObject1");
	HX_VISIT_MEMBER_NAME(_hx___inactiveObjectList,"__inactiveObjectList");
	HX_VISIT_MEMBER_NAME(_hx___pool,"__pool");
	HX_VISIT_MEMBER_NAME(_hx___size,"__size");
	HX_VISIT_MEMBER_NAME(clean,"clean");
	HX_VISIT_MEMBER_NAME(create,"create");
}

::hx::Val ObjectPool_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_size() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clean") ) { return ::hx::Val( clean ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { return ::hx::Val( _hx___pool ); }
		if (HX_FIELD_EQ(inName,"__size") ) { return ::hx::Val( _hx___size ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"release") ) { return ::hx::Val( release_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return ::hx::Val( set_size_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeObjects") ) { return ::hx::Val( activeObjects ); }
		if (HX_FIELD_EQ(inName,"__addInactive") ) { return ::hx::Val( _hx___addInactive_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getInactive") ) { return ::hx::Val( _hx___getInactive_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"inactiveObjects") ) { return ::hx::Val( inactiveObjects ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__removeInactive") ) { return ::hx::Val( _hx___removeInactive_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__inactiveObject0") ) { return ::hx::Val( _hx___inactiveObject0 ); }
		if (HX_FIELD_EQ(inName,"__inactiveObject1") ) { return ::hx::Val( _hx___inactiveObject1 ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__inactiveObjectList") ) { return ::hx::Val( _hx___inactiveObjectList ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ObjectPool_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_size(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clean") ) { clean=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__size") ) { _hx___size=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"create") ) { create=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeObjects") ) { activeObjects=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"inactiveObjects") ) { inactiveObjects=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__inactiveObject0") ) { _hx___inactiveObject0=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__inactiveObject1") ) { _hx___inactiveObject1=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__inactiveObjectList") ) { _hx___inactiveObjectList=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("activeObjects",ae,b3,18,3a));
	outFields->push(HX_("inactiveObjects",a9,0c,c7,fb));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("__inactiveObject0",46,3d,21,7f));
	outFields->push(HX_("__inactiveObject1",47,3d,21,7f));
	outFields->push(HX_("__inactiveObjectList",28,dd,99,7e));
	outFields->push(HX_("__pool",fc,e3,54,f9));
	outFields->push(HX_("__size",e1,03,4c,fb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ObjectPool_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ObjectPool_obj,activeObjects),HX_("activeObjects",ae,b3,18,3a)},
	{::hx::fsInt,(int)offsetof(ObjectPool_obj,inactiveObjects),HX_("inactiveObjects",a9,0c,c7,fb)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ObjectPool_obj,_hx___inactiveObject0),HX_("__inactiveObject0",46,3d,21,7f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ObjectPool_obj,_hx___inactiveObject1),HX_("__inactiveObject1",47,3d,21,7f)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(ObjectPool_obj,_hx___inactiveObjectList),HX_("__inactiveObjectList",28,dd,99,7e)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(ObjectPool_obj,_hx___pool),HX_("__pool",fc,e3,54,f9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ObjectPool_obj,_hx___size),HX_("__size",e1,03,4c,fb)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ObjectPool_obj,clean),HX_("clean",89,71,5b,48)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ObjectPool_obj,create),HX_("create",fc,66,0f,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ObjectPool_obj_sStaticStorageInfo = 0;
#endif

static ::String ObjectPool_obj_sMemberFields[] = {
	HX_("activeObjects",ae,b3,18,3a),
	HX_("inactiveObjects",a9,0c,c7,fb),
	HX_("__inactiveObject0",46,3d,21,7f),
	HX_("__inactiveObject1",47,3d,21,7f),
	HX_("__inactiveObjectList",28,dd,99,7e),
	HX_("__pool",fc,e3,54,f9),
	HX_("__size",e1,03,4c,fb),
	HX_("add",21,f2,49,00),
	HX_("clean",89,71,5b,48),
	HX_("clear",8d,71,5b,48),
	HX_("create",fc,66,0f,7c),
	HX_("get",96,80,4e,00),
	HX_("release",c7,85,ed,58),
	HX_("remove",44,9c,88,04),
	HX_("__addInactive",8c,8f,04,e4),
	HX_("__getInactive",01,1b,9c,d8),
	HX_("__removeInactive",ef,de,c5,68),
	HX_("get_size",4a,5c,0e,cc),
	HX_("set_size",be,b5,6b,7a),
	::String(null()) };

::hx::Class ObjectPool_obj::__mClass;

void ObjectPool_obj::__register()
{
	ObjectPool_obj _hx_dummy;
	ObjectPool_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils.ObjectPool",f1,2f,f4,28);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ObjectPool_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ObjectPool_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectPool_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectPool_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
