// Generated by Haxe 4.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2be74ae4095285fe_31_new,"haxe.ds.EnumValueMap","new",0x9ce29655,"haxe.ds.EnumValueMap.new","/usr/local/lib/haxe/std/haxe/ds/EnumValueMap.hx",31,0xc570effe)
HX_LOCAL_STACK_FRAME(_hx_pos_2be74ae4095285fe_32_compare,"haxe.ds.EnumValueMap","compare",0x806a7d1a,"haxe.ds.EnumValueMap.compare","/usr/local/lib/haxe/std/haxe/ds/EnumValueMap.hx",32,0xc570effe)
HX_LOCAL_STACK_FRAME(_hx_pos_2be74ae4095285fe_57_compareArgs,"haxe.ds.EnumValueMap","compareArgs",0x37a5cb97,"haxe.ds.EnumValueMap.compareArgs","/usr/local/lib/haxe/std/haxe/ds/EnumValueMap.hx",57,0xc570effe)
HX_LOCAL_STACK_FRAME(_hx_pos_2be74ae4095285fe_70_compareArg,"haxe.ds.EnumValueMap","compareArg",0xcee2e55c,"haxe.ds.EnumValueMap.compareArg","/usr/local/lib/haxe/std/haxe/ds/EnumValueMap.hx",70,0xc570effe)
namespace haxe{
namespace ds{

void EnumValueMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2be74ae4095285fe_31_new)
            	HX_STACK_THIS(this)
HXLINE(  31)
HXDLIN(  31)		super::__construct();
            	}

Dynamic EnumValueMap_obj::__CreateEmpty() { return new EnumValueMap_obj; }

void *EnumValueMap_obj::_hx_vtable = 0;

Dynamic EnumValueMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EnumValueMap_obj > _hx_result = new EnumValueMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EnumValueMap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x34ccfa05) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x34ccfa05;
	} else {
		return inClassId==(int)0x4cc9cf7f;
	}
}

static ::haxe::IMap_obj _hx_haxe_ds_EnumValueMap__hx_haxe_IMap= {
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::haxe::ds::EnumValueMap_obj::get,
	( void (::hx::Object::*)( ::Dynamic, ::Dynamic))&::haxe::ds::EnumValueMap_obj::set_dca24b06,
	( bool (::hx::Object::*)( ::Dynamic))&::haxe::ds::EnumValueMap_obj::exists,
	( bool (::hx::Object::*)( ::Dynamic))&::haxe::ds::EnumValueMap_obj::remove,
	(  ::Dynamic (::hx::Object::*)())&::haxe::ds::EnumValueMap_obj::keys,
	(  ::Dynamic (::hx::Object::*)())&::haxe::ds::EnumValueMap_obj::iterator,
	(  ::Dynamic (::hx::Object::*)())&::haxe::ds::EnumValueMap_obj::keyValueIterator,
};

void EnumValueMap_obj::set_dca24b06( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}
void *EnumValueMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_haxe_ds_EnumValueMap__hx_haxe_IMap;
	}
	return super::_hx_getInterface(inHash);
}

int EnumValueMap_obj::compare( ::Dynamic _tmp_k1, ::Dynamic _tmp_k2){
            	HX_STACKFRAME(&_hx_pos_2be74ae4095285fe_32_compare)
            	HX_STACK_THIS(this)
HXLINE(  32)
HXLINE(  33)		HX_VARI(  ::Dynamic,k1) = _tmp_k1;
HXDLIN(  33)		HX_VARI(  ::Dynamic,k2) = _tmp_k2;
HXDLIN(  33)		int d = _hx_getEnumValueIndex(k1);
HXDLIN(  33)		HX_VARI_NAME( int,d1,"d") = (d - _hx_getEnumValueIndex(k2));
HXLINE(  34)		if ((d1 != 0)) {
HXLINE(  35)			return d1;
            		}
HXLINE(  49)		HX_VARI( ::cpp::VirtualArray,p1) = ::Type_obj::enumParameters(k1);
HXLINE(  50)		HX_VARI( ::cpp::VirtualArray,p2) = ::Type_obj::enumParameters(k2);
HXLINE(  51)		bool _hx_tmp;
HXDLIN(  51)		if ((p1->get_length() == 0)) {
HXLINE(  51)			_hx_tmp = (p2->get_length() == 0);
            		}
            		else {
HXLINE(  51)			_hx_tmp = false;
            		}
HXDLIN(  51)		if (_hx_tmp) {
HXLINE(  52)			return 0;
            		}
HXLINE(  53)		return this->compareArgs(p1,p2);
            	}


int EnumValueMap_obj::compareArgs(::cpp::VirtualArray a1,::cpp::VirtualArray a2){
            	HX_STACKFRAME(&_hx_pos_2be74ae4095285fe_57_compareArgs)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a1,"a1")
            	HX_STACK_ARG(a2,"a2")
HXLINE(  57)
HXLINE(  58)		HX_VARI( int,ld) = (a1->get_length() - a2->get_length());
HXLINE(  59)		if ((ld != 0)) {
HXLINE(  60)			return ld;
            		}
HXLINE(  61)		{
HXLINE(  61)			int _g = 0;
HXDLIN(  61)			int _g1 = a1->get_length();
HXDLIN(  61)			while((_g < _g1)){
HXLINE(  61)				_g = (_g + 1);
HXDLIN(  61)				HX_VARI( int,i) = (_g - 1);
HXLINE(  62)				HX_VARI( int,d) = this->compareArg(a1->__get(i),a2->__get(i));
HXLINE(  63)				if ((d != 0)) {
HXLINE(  64)					return d;
            				}
            			}
            		}
HXLINE(  66)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(EnumValueMap_obj,compareArgs,return )

int EnumValueMap_obj::compareArg( ::Dynamic v1, ::Dynamic v2){
            	HX_STACKFRAME(&_hx_pos_2be74ae4095285fe_70_compareArg)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(v1,"v1")
            	HX_STACK_ARG(v2,"v2")
HXLINE(  70)
HXDLIN(  70)		bool _hx_tmp;
HXDLIN(  70)		if (::Reflect_obj::isEnumValue(v1)) {
HXDLIN(  70)			_hx_tmp = ::Reflect_obj::isEnumValue(v2);
            		}
            		else {
HXDLIN(  70)			_hx_tmp = false;
            		}
HXDLIN(  70)		if (_hx_tmp) {
HXLINE(  71)			return this->compare(v1,v2);
            		}
            		else {
HXLINE(  72)			bool _hx_tmp1;
HXDLIN(  72)			if (::Std_obj::isOfType(v1,::hx::ArrayBase::__mClass)) {
HXLINE(  72)				_hx_tmp1 = ::Std_obj::isOfType(v2,::hx::ArrayBase::__mClass);
            			}
            			else {
HXLINE(  72)				_hx_tmp1 = false;
            			}
HXDLIN(  72)			if (_hx_tmp1) {
HXLINE(  73)				return this->compareArgs(( (::cpp::VirtualArray)(v1) ),( (::cpp::VirtualArray)(v2) ));
            			}
            			else {
HXLINE(  75)				return ::Reflect_obj::compare(v1,v2);
            			}
            		}
HXLINE(  70)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(EnumValueMap_obj,compareArg,return )


::hx::ObjectPtr< EnumValueMap_obj > EnumValueMap_obj::__new() {
	::hx::ObjectPtr< EnumValueMap_obj > __this = new EnumValueMap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< EnumValueMap_obj > EnumValueMap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	EnumValueMap_obj *__this = (EnumValueMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EnumValueMap_obj), true, "haxe.ds.EnumValueMap"));
	*(void **)__this = EnumValueMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EnumValueMap_obj::EnumValueMap_obj()
{
}

::hx::Val EnumValueMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return ::hx::Val( compare_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"compareArg") ) { return ::hx::Val( compareArg_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"compareArgs") ) { return ::hx::Val( compareArgs_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EnumValueMap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EnumValueMap_obj_sStaticStorageInfo = 0;
#endif

static ::String EnumValueMap_obj_sMemberFields[] = {
	HX_("compare",a5,18,69,83),
	HX_("compareArgs",a2,88,40,b6),
	HX_("compareArg",b1,d2,97,0e),
	::String(null()) };

::hx::Class EnumValueMap_obj::__mClass;

void EnumValueMap_obj::__register()
{
	EnumValueMap_obj _hx_dummy;
	EnumValueMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds.EnumValueMap",e3,c7,41,58);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EnumValueMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EnumValueMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EnumValueMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EnumValueMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
