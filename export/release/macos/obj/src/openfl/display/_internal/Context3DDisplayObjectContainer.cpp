// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DDisplayObject
#include <openfl/display/_internal/Context3DDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DDisplayObjectContainer
#include <openfl/display/_internal/Context3DDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DShape
#include <openfl/display/_internal/Context3DShape.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_97d149fcd101654e_12_renderDrawable,"openfl.display._internal.Context3DDisplayObjectContainer","renderDrawable",0x3be7c2de,"openfl.display._internal.Context3DDisplayObjectContainer.renderDrawable","openfl/display/_internal/Context3DDisplayObjectContainer.hx",12,0x63da501d)
HX_LOCAL_STACK_FRAME(_hx_pos_97d149fcd101654e_53_renderDrawableMask,"openfl.display._internal.Context3DDisplayObjectContainer","renderDrawableMask",0x7e14f6ea,"openfl.display._internal.Context3DDisplayObjectContainer.renderDrawableMask","openfl/display/_internal/Context3DDisplayObjectContainer.hx",53,0x63da501d)
namespace openfl{
namespace display{
namespace _internal{

void Context3DDisplayObjectContainer_obj::__construct() { }

Dynamic Context3DDisplayObjectContainer_obj::__CreateEmpty() { return new Context3DDisplayObjectContainer_obj; }

void *Context3DDisplayObjectContainer_obj::_hx_vtable = 0;

Dynamic Context3DDisplayObjectContainer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DDisplayObjectContainer_obj > _hx_result = new Context3DDisplayObjectContainer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DDisplayObjectContainer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x583fcad6;
}

void Context3DDisplayObjectContainer_obj::renderDrawable( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_97d149fcd101654e_12_renderDrawable)
HXLINE(  13)		{
HXLINE(  13)			{
HXLINE(  13)				 ::Dynamic orphan = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(  13)				while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  13)					 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  13)					if (::hx::IsNull( orphan1->stage )) {
HXLINE(  13)						orphan1->_hx___cleanup();
            					}
            				}
            			}
HXDLIN(  13)			displayObjectContainer->_hx___removedChildren->set_length(0);
            		}
HXLINE(  15)		bool _hx_tmp;
HXDLIN(  15)		if (displayObjectContainer->_hx___renderable) {
HXLINE(  15)			_hx_tmp = (displayObjectContainer->_hx___worldAlpha <= 0);
            		}
            		else {
HXLINE(  15)			_hx_tmp = true;
            		}
HXDLIN(  15)		if (_hx_tmp) {
HXLINE(  15)			return;
            		}
HXLINE(  17)		::openfl::display::_internal::Context3DDisplayObject_obj::renderDrawable(displayObjectContainer,renderer);
HXLINE(  19)		bool _hx_tmp1;
HXDLIN(  19)		if (::hx::IsNotNull( displayObjectContainer->_hx___cacheBitmap )) {
HXLINE(  19)			_hx_tmp1 = !(displayObjectContainer->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  19)			_hx_tmp1 = false;
            		}
HXDLIN(  19)		if (_hx_tmp1) {
HXLINE(  19)			return;
            		}
HXLINE(  21)		if ((displayObjectContainer->_hx___children->length > 0)) {
HXLINE(  23)			renderer->_hx___pushMaskObject(displayObjectContainer,null());
HXLINE(  26)			if (::hx::IsNotNull( renderer->_hx___stage )) {
HXLINE(  28)				{
HXLINE(  28)					int _g = 0;
HXDLIN(  28)					::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  28)					while((_g < _g1->length)){
HXLINE(  28)						 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  28)						_g = (_g + 1);
HXLINE(  30)						renderer->_hx___renderDrawable(child);
HXLINE(  31)						child->_hx___renderDirty = false;
            					}
            				}
HXLINE(  34)				displayObjectContainer->_hx___renderDirty = false;
            			}
            			else {
HXLINE(  38)				int _g2 = 0;
HXDLIN(  38)				::Array< ::Dynamic> _g3 = displayObjectContainer->_hx___children;
HXDLIN(  38)				while((_g2 < _g3->length)){
HXLINE(  38)					 ::openfl::display::DisplayObject child1 = _g3->__get(_g2).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  38)					_g2 = (_g2 + 1);
HXLINE(  40)					renderer->_hx___renderDrawable(child1);
            				}
            			}
            		}
HXLINE(  45)		if ((displayObjectContainer->_hx___children->length > 0)) {
HXLINE(  48)			renderer->_hx___popMaskObject(displayObjectContainer,null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DDisplayObjectContainer_obj,renderDrawable,(void))

void Context3DDisplayObjectContainer_obj::renderDrawableMask( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_97d149fcd101654e_53_renderDrawableMask)
HXLINE(  54)		{
HXLINE(  54)			{
HXLINE(  54)				 ::Dynamic orphan = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(  54)				while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  54)					 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  54)					if (::hx::IsNull( orphan1->stage )) {
HXLINE(  54)						orphan1->_hx___cleanup();
            					}
            				}
            			}
HXDLIN(  54)			displayObjectContainer->_hx___removedChildren->set_length(0);
            		}
HXLINE(  56)		if (::hx::IsNotNull( displayObjectContainer->_hx___graphics )) {
HXLINE(  59)			::openfl::display::_internal::Context3DShape_obj::renderMask(displayObjectContainer,renderer);
            		}
HXLINE(  62)		{
HXLINE(  62)			int _g = 0;
HXDLIN(  62)			::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  62)			while((_g < _g1->length)){
HXLINE(  62)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  62)				_g = (_g + 1);
HXLINE(  64)				renderer->_hx___renderDrawableMask(child);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DDisplayObjectContainer_obj,renderDrawableMask,(void))


Context3DDisplayObjectContainer_obj::Context3DDisplayObjectContainer_obj()
{
}

bool Context3DDisplayObjectContainer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DDisplayObjectContainer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Context3DDisplayObjectContainer_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Context3DDisplayObjectContainer_obj::__mClass;

static ::String Context3DDisplayObjectContainer_obj_sStaticFields[] = {
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void Context3DDisplayObjectContainer_obj::__register()
{
	Context3DDisplayObjectContainer_obj _hx_dummy;
	Context3DDisplayObjectContainer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.Context3DDisplayObjectContainer",64,bb,19,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DDisplayObjectContainer_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DDisplayObjectContainer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DDisplayObjectContainer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DDisplayObjectContainer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DDisplayObjectContainer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
