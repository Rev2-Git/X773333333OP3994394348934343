// Generated by Haxe 4.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
namespace lime{
namespace graphics{

::lime::graphics::ImageType ImageType_obj::CANVAS;

::lime::graphics::ImageType ImageType_obj::CUSTOM;

::lime::graphics::ImageType ImageType_obj::DATA;

::lime::graphics::ImageType ImageType_obj::FLASH;

bool ImageType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CANVAS",d8,00,c5,6a)) { outValue = ImageType_obj::CANVAS; return true; }
	if (inName==HX_("CUSTOM",b1,33,15,f2)) { outValue = ImageType_obj::CUSTOM; return true; }
	if (inName==HX_("DATA",2a,1e,24,2d)) { outValue = ImageType_obj::DATA; return true; }
	if (inName==HX_("FLASH",90,6d,7a,80)) { outValue = ImageType_obj::FLASH; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ImageType_obj)

int ImageType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CANVAS",d8,00,c5,6a)) return 0;
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return 3;
	if (inName==HX_("DATA",2a,1e,24,2d)) return 1;
	if (inName==HX_("FLASH",90,6d,7a,80)) return 2;
	return super::__FindIndex(inName);
}

int ImageType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CANVAS",d8,00,c5,6a)) return 0;
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return 0;
	if (inName==HX_("DATA",2a,1e,24,2d)) return 0;
	if (inName==HX_("FLASH",90,6d,7a,80)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ImageType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CANVAS",d8,00,c5,6a)) return CANVAS;
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return CUSTOM;
	if (inName==HX_("DATA",2a,1e,24,2d)) return DATA;
	if (inName==HX_("FLASH",90,6d,7a,80)) return FLASH;
	return super::__Field(inName,inCallProp);
}

static ::String ImageType_obj_sStaticFields[] = {
	HX_("CANVAS",d8,00,c5,6a),
	HX_("DATA",2a,1e,24,2d),
	HX_("FLASH",90,6d,7a,80),
	HX_("CUSTOM",b1,33,15,f2),
	::String(null())
};

::hx::Class ImageType_obj::__mClass;

Dynamic __Create_ImageType_obj() { return new ImageType_obj; }

void ImageType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("lime.graphics.ImageType",eb,63,71,4d), ::hx::TCanCast< ImageType_obj >,ImageType_obj_sStaticFields,0,
	&__Create_ImageType_obj, &__Create,
	&super::__SGetClass(), &CreateImageType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ImageType_obj::__GetStatic;
}

void ImageType_obj::__boot()
{
CANVAS = ::hx::CreateConstEnum< ImageType_obj >(HX_("CANVAS",d8,00,c5,6a),0);
CUSTOM = ::hx::CreateConstEnum< ImageType_obj >(HX_("CUSTOM",b1,33,15,f2),3);
DATA = ::hx::CreateConstEnum< ImageType_obj >(HX_("DATA",2a,1e,24,2d),1);
FLASH = ::hx::CreateConstEnum< ImageType_obj >(HX_("FLASH",90,6d,7a,80),2);
}


} // end namespace lime
} // end namespace graphics
