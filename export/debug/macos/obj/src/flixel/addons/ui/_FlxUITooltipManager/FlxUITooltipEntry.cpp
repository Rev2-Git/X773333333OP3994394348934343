// Generated by Haxe 4.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_Anchor
#include <flixel/addons/ui/Anchor.h>
#endif
#ifndef INCLUDED_flixel_addons_ui__FlxUITooltipManager_FlxUITooltipEntry
#include <flixel/addons/ui/_FlxUITooltipManager/FlxUITooltipEntry.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ba596dbc4e329499_621_new,"flixel.addons.ui._FlxUITooltipManager.FlxUITooltipEntry","new",0x3b938adb,"flixel.addons.ui._FlxUITooltipManager.FlxUITooltipEntry.new","flixel/addons/ui/FlxUITooltipManager.hx",621,0x892d3fe0)
HX_LOCAL_STACK_FRAME(_hx_pos_ba596dbc4e329499_651_destroy,"flixel.addons.ui._FlxUITooltipManager.FlxUITooltipEntry","destroy",0xc57440f5,"flixel.addons.ui._FlxUITooltipManager.FlxUITooltipEntry.destroy","flixel/addons/ui/FlxUITooltipManager.hx",651,0x892d3fe0)
namespace flixel{
namespace addons{
namespace ui{
namespace _FlxUITooltipManager{

void FlxUITooltipEntry_obj::__construct(::Dynamic Btn, ::Dynamic Data, ::flixel::FlxObject Obj){
            	HX_STACKFRAME(&_hx_pos_ba596dbc4e329499_621_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Btn,"Btn")
            	HX_STACK_ARG(Data,"Data")
            	HX_STACK_ARG(Obj,"Obj")
HXLINE( 621)
HXLINE( 632)		this->sticky = false;
HXLINE( 636)		this->btn = Btn;
HXLINE( 637)		this->data = Data;
HXLINE( 638)		this->obj = Obj;
HXLINE( 639)		this->count = ( (Float)(0) );
HXLINE( 640)		this->enabled = true;
HXLINE( 641)		if (::hx::IsNotNull( this->data )) {
HXLINE( 643)			if (::hx::IsNull( this->data->__Field(HX_("delay",83,d7,26,d7),::hx::paccDynamic) )) {
HXLINE( 644)				this->data->__SetField(HX_("delay",83,d7,26,d7),-1,::hx::paccDynamic);
            			}
HXLINE( 645)			if (::hx::IsNull( this->data->__Field(HX_("moving",8e,f2,af,cc),::hx::paccDynamic) )) {
HXLINE( 646)				this->data->__SetField(HX_("moving",8e,f2,af,cc),false,::hx::paccDynamic);
            			}
            		}
            	}

Dynamic FlxUITooltipEntry_obj::__CreateEmpty() { return new FlxUITooltipEntry_obj; }

void *FlxUITooltipEntry_obj::_hx_vtable = 0;

Dynamic FlxUITooltipEntry_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUITooltipEntry_obj > _hx_result = new FlxUITooltipEntry_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxUITooltipEntry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5dd5f2bd;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_ui__FlxUITooltipManager_FlxUITooltipEntry__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::ui::_FlxUITooltipManager::FlxUITooltipEntry_obj::destroy,
};

void *FlxUITooltipEntry_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_ui__FlxUITooltipManager_FlxUITooltipEntry__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxUITooltipEntry_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_ba596dbc4e329499_651_destroy)
            	HX_STACK_THIS(this)
HXLINE( 651)
HXLINE( 652)		this->count = ( (Float)(0) );
HXLINE( 653)		this->obj = null();
HXLINE( 654)		this->btn = null();
HXLINE( 655)		this->data->__SetField(HX_("anchor",75,3a,71,60),null(),::hx::paccDynamic);
HXLINE( 656)		this->data->__SetField(HX_("style",31,a5,1d,84),null(),::hx::paccDynamic);
HXLINE( 657)		this->data = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITooltipEntry_obj,destroy,(void))


::hx::ObjectPtr< FlxUITooltipEntry_obj > FlxUITooltipEntry_obj::__new(::Dynamic Btn, ::Dynamic Data, ::flixel::FlxObject Obj) {
	::hx::ObjectPtr< FlxUITooltipEntry_obj > __this = new FlxUITooltipEntry_obj();
	__this->__construct(Btn,Data,Obj);
	return __this;
}

::hx::ObjectPtr< FlxUITooltipEntry_obj > FlxUITooltipEntry_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic Btn, ::Dynamic Data, ::flixel::FlxObject Obj) {
	FlxUITooltipEntry_obj *__this = (FlxUITooltipEntry_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUITooltipEntry_obj), true, "flixel.addons.ui._FlxUITooltipManager.FlxUITooltipEntry"));
	*(void **)__this = FlxUITooltipEntry_obj::_hx_vtable;
	__this->__construct(Btn,Data,Obj);
	return __this;
}

FlxUITooltipEntry_obj::FlxUITooltipEntry_obj()
{
}

void FlxUITooltipEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUITooltipEntry);
	HX_MARK_MEMBER_NAME(obj,"obj");
	HX_MARK_MEMBER_NAME(btn,"btn");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(sticky,"sticky");
	HX_MARK_END_CLASS();
}

void FlxUITooltipEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(obj,"obj");
	HX_VISIT_MEMBER_NAME(btn,"btn");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(sticky,"sticky");
}

::hx::Val FlxUITooltipEntry_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"obj") ) { return ::hx::Val( obj ); }
		if (HX_FIELD_EQ(inName,"btn") ) { return ::hx::Val( btn ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return ::hx::Val( count ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sticky") ) { return ::hx::Val( sticky ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUITooltipEntry_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"obj") ) { obj=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"btn") ) { btn=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sticky") ) { sticky=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUITooltipEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("obj",f7,8f,54,00));
	outFields->push(HX_("btn",5c,c2,4a,00));
	outFields->push(HX_("count",cf,44,63,4a));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("sticky",29,ad,38,0b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUITooltipEntry_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(FlxUITooltipEntry_obj,obj),HX_("obj",f7,8f,54,00)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(FlxUITooltipEntry_obj,btn),HX_("btn",5c,c2,4a,00)},
	{::hx::fsFloat,(int)offsetof(FlxUITooltipEntry_obj,count),HX_("count",cf,44,63,4a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUITooltipEntry_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsBool,(int)offsetof(FlxUITooltipEntry_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsBool,(int)offsetof(FlxUITooltipEntry_obj,sticky),HX_("sticky",29,ad,38,0b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxUITooltipEntry_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxUITooltipEntry_obj_sMemberFields[] = {
	HX_("obj",f7,8f,54,00),
	HX_("btn",5c,c2,4a,00),
	HX_("count",cf,44,63,4a),
	HX_("data",2a,56,63,42),
	HX_("enabled",81,04,31,7e),
	HX_("sticky",29,ad,38,0b),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class FlxUITooltipEntry_obj::__mClass;

void FlxUITooltipEntry_obj::__register()
{
	FlxUITooltipEntry_obj _hx_dummy;
	FlxUITooltipEntry_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui._FlxUITooltipManager.FlxUITooltipEntry",69,81,f0,be);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUITooltipEntry_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUITooltipEntry_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUITooltipEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUITooltipEntry_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace _FlxUITooltipManager
