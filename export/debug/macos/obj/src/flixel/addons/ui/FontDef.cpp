// Generated by Haxe 4.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_BorderDef
#include <flixel/addons/ui/BorderDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FontDef
#include <flixel/addons/ui/FontDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FontFixer
#include <flixel/addons/ui/FontFixer.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6202c8c3d680a662_18_new,"flixel.addons.ui.FontDef","new",0x626f8177,"flixel.addons.ui.FontDef.new","flixel/addons/ui/FontDef.hx",18,0x96f2befa)
HX_LOCAL_STACK_FRAME(_hx_pos_6202c8c3d680a662_47_get_size,"flixel.addons.ui.FontDef","get_size",0x452657d3,"flixel.addons.ui.FontDef.get_size","flixel/addons/ui/FontDef.hx",47,0x96f2befa)
HX_LOCAL_STACK_FRAME(_hx_pos_6202c8c3d680a662_56_set_size,"flixel.addons.ui.FontDef","set_size",0xf383b147,"flixel.addons.ui.FontDef.set_size","flixel/addons/ui/FontDef.hx",56,0x96f2befa)
HX_LOCAL_STACK_FRAME(_hx_pos_6202c8c3d680a662_66_clone,"flixel.addons.ui.FontDef","clone",0x2d9e7834,"flixel.addons.ui.FontDef.clone","flixel/addons/ui/FontDef.hx",66,0x96f2befa)
HX_LOCAL_STACK_FRAME(_hx_pos_6202c8c3d680a662_110_applyTxt,"flixel.addons.ui.FontDef","applyTxt",0x9e13352b,"flixel.addons.ui.FontDef.applyTxt","flixel/addons/ui/FontDef.hx",110,0x96f2befa)
HX_LOCAL_STACK_FRAME(_hx_pos_6202c8c3d680a662_116_applyFlx,"flixel.addons.ui.FontDef","applyFlx",0x9e088b2d,"flixel.addons.ui.FontDef.applyFlx","flixel/addons/ui/FontDef.hx",116,0x96f2befa)
HX_LOCAL_STACK_FRAME(_hx_pos_6202c8c3d680a662_140_apply,"flixel.addons.ui.FontDef","apply",0x0976ea45,"flixel.addons.ui.FontDef.apply","flixel/addons/ui/FontDef.hx",140,0x96f2befa)
HX_LOCAL_STACK_FRAME(_hx_pos_6202c8c3d680a662_156_fromStr,"flixel.addons.ui.FontDef","fromStr",0x8e8201fe,"flixel.addons.ui.FontDef.fromStr","flixel/addons/ui/FontDef.hx",156,0x96f2befa)
HX_LOCAL_STACK_FRAME(_hx_pos_6202c8c3d680a662_228_stripFontExtensions,"flixel.addons.ui.FontDef","stripFontExtensions",0x4ace96d2,"flixel.addons.ui.FontDef.stripFontExtensions","flixel/addons/ui/FontDef.hx",228,0x96f2befa)
HX_LOCAL_STACK_FRAME(_hx_pos_6202c8c3d680a662_242_getFontExtension,"flixel.addons.ui.FontDef","getFontExtension",0x3c4339c3,"flixel.addons.ui.FontDef.getFontExtension","flixel/addons/ui/FontDef.hx",242,0x96f2befa)
HX_LOCAL_STACK_FRAME(_hx_pos_6202c8c3d680a662_256_fixFontName,"flixel.addons.ui.FontDef","fixFontName",0x0fe78ac6,"flixel.addons.ui.FontDef.fixFontName","flixel/addons/ui/FontDef.hx",256,0x96f2befa)
HX_LOCAL_STACK_FRAME(_hx_pos_6202c8c3d680a662_287_getFontStyle,"flixel.addons.ui.FontDef","getFontStyle",0x0566d975,"flixel.addons.ui.FontDef.getFontStyle","flixel/addons/ui/FontDef.hx",287,0x96f2befa)
HX_LOCAL_STACK_FRAME(_hx_pos_6202c8c3d680a662_311_setFontStyle,"flixel.addons.ui.FontDef","setFontStyle",0x1a5ffce9,"flixel.addons.ui.FontDef.setFontStyle","flixel/addons/ui/FontDef.hx",311,0x96f2befa)
HX_LOCAL_STACK_FRAME(_hx_pos_6202c8c3d680a662_364_toString,"flixel.addons.ui.FontDef","toString",0xb186cc35,"flixel.addons.ui.FontDef.toString","flixel/addons/ui/FontDef.hx",364,0x96f2befa)
HX_LOCAL_STACK_FRAME(_hx_pos_6202c8c3d680a662_80_copyFromTextField,"flixel.addons.ui.FontDef","copyFromTextField",0xa0f3d465,"flixel.addons.ui.FontDef.copyFromTextField","flixel/addons/ui/FontDef.hx",80,0x96f2befa)
HX_LOCAL_STACK_FRAME(_hx_pos_6202c8c3d680a662_99_copyFromFlxText,"flixel.addons.ui.FontDef","copyFromFlxText",0x2447f7d7,"flixel.addons.ui.FontDef.copyFromFlxText","flixel/addons/ui/FontDef.hx",99,0x96f2befa)
HX_LOCAL_STACK_FRAME(_hx_pos_6202c8c3d680a662_332_fromXML,"flixel.addons.ui.FontDef","fromXML",0x8e85ab24,"flixel.addons.ui.FontDef.fromXML","flixel/addons/ui/FontDef.hx",332,0x96f2befa)
HX_LOCAL_STACK_FRAME(_hx_pos_6202c8c3d680a662_27_boot,"flixel.addons.ui.FontDef","boot",0xb73ac73b,"flixel.addons.ui.FontDef.boot","flixel/addons/ui/FontDef.hx",27,0x96f2befa)
static const ::String _hx_array_data_9b2dfa05_26[] = {
	HX_(".ttf",78,3b,c0,1e),HX_(".otf",33,70,bc,1e),
};
namespace flixel{
namespace addons{
namespace ui{

void FontDef_obj::__construct(::String Name,::String __o_Extension,::String __o_File, ::openfl::text::TextFormat Format, ::flixel::addons::ui::BorderDef Border){
            		::String Extension = __o_Extension;
            		if (::hx::IsNull(__o_Extension)) Extension = HX_(".ttf",78,3b,c0,1e);
            		::String File = __o_File;
            		if (::hx::IsNull(__o_File)) File = HX_("",00,00,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_6202c8c3d680a662_18_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Name,"Name")
            	HX_STACK_ARG(Extension,"Extension")
            	HX_STACK_ARG(File,"File")
            	HX_STACK_ARG(Format,"Format")
            	HX_STACK_ARG(Border,"Border")
HXLINE(  18)
HXLINE( 220)		this->_size = 0;
HXLINE(  31)		this->name = Name;
HXLINE(  32)		this->extension = Extension;
HXLINE(  33)		this->file = File;
HXLINE(  34)		this->format = Format;
HXLINE(  35)		if (::hx::IsNull( this->format )) {
HXLINE(  37)			this->format =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE(  39)		this->border = Border;
HXLINE(  40)		if (::hx::IsNull( this->border )) {
HXLINE(  42)			this->border =  ::flixel::addons::ui::BorderDef_obj::__alloc( HX_CTX ,::flixel::text::FlxTextBorderStyle_obj::NONE_dyn(),0,null(),null());
            		}
            	}

Dynamic FontDef_obj::__CreateEmpty() { return new FontDef_obj; }

void *FontDef_obj::_hx_vtable = 0;

Dynamic FontDef_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FontDef_obj > _hx_result = new FontDef_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FontDef_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x19e19493;
}

int FontDef_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_6202c8c3d680a662_47_get_size)
            	HX_STACK_THIS(this)
HXLINE(  47)
HXLINE(  48)		if (::hx::IsNotNull( this->format )) {
HXLINE(  50)			this->_size = ::Std_obj::_hx_int(( (Float)(this->format->size) ));
            		}
HXLINE(  52)		return this->_size;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FontDef_obj,get_size,return )

int FontDef_obj::set_size(int i){
            	HX_STACKFRAME(&_hx_pos_6202c8c3d680a662_56_set_size)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(i,"i")
HXLINE(  56)
HXLINE(  57)		if (::hx::IsNotNull( this->format )) {
HXLINE(  59)			this->format->size = i;
            		}
HXLINE(  61)		this->_size = i;
HXLINE(  62)		return this->_size;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FontDef_obj,set_size,return )

 ::flixel::addons::ui::FontDef FontDef_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_6202c8c3d680a662_66_clone)
            	HX_STACK_THIS(this)
HXLINE(  66)
HXLINE(  67)		HX_VAR(  ::flixel::addons::ui::BorderDef,newBorder);
HXDLIN(  67)		if (::hx::IsNull( this->border )) {
HXLINE(  67)			newBorder = null();
            		}
            		else {
HXLINE(  67)			newBorder = this->border->clone();
            		}
HXLINE(  68)		HX_VAR(  ::openfl::text::TextFormat,newFormat);
HXDLIN(  68)		if (::hx::IsNull( this->format )) {
HXLINE(  68)			newFormat = null();
            		}
            		else {
HXLINE(  68)			newFormat =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,this->format->font,this->format->size,this->format->color,this->format->bold,this->format->italic,this->format->underline,this->format->url,this->format->target,this->format->align,this->format->leftMargin,this->format->rightMargin,this->format->indent,this->format->leading);
            		}
HXLINE(  70)		if (::hx::IsNotNull( this->format )) {
HXLINE(  72)			newFormat->letterSpacing = this->format->letterSpacing;
            		}
HXLINE(  74)		HX_VARI(  ::flixel::addons::ui::FontDef,newThis) =  ::flixel::addons::ui::FontDef_obj::__alloc( HX_CTX ,this->name,this->extension,this->file,newFormat,newBorder);
HXLINE(  75)		newThis->set_size(this->get_size());
HXLINE(  76)		return newThis;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FontDef_obj,clone,return )

 ::openfl::text::TextField FontDef_obj::applyTxt( ::openfl::text::TextField textField){
            	HX_STACKFRAME(&_hx_pos_6202c8c3d680a662_110_applyTxt)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(textField,"textField")
HXLINE( 110)
HXLINE( 111)		textField->setTextFormat(this->format,null(),null());
HXLINE( 112)		return textField;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FontDef_obj,applyTxt,return )

 ::flixel::text::FlxText FontDef_obj::applyFlx( ::flixel::text::FlxText flxText){
            	HX_STACKFRAME(&_hx_pos_6202c8c3d680a662_116_applyFlx)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(flxText,"flxText")
HXLINE( 116)
HXLINE( 117)		HX_VARI( ::String,flxTxtAlign) = null();
HXLINE( 119)		if (::hx::IsNotNull( this->format->align )) {
HXLINE( 121)			 ::Dynamic _hx_switch_0 = this->format->align;
            			if (  (_hx_switch_0==0) ){
HXLINE( 123)				flxTxtAlign = HX_("center",d5,25,db,05);
HXDLIN( 123)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==2) ){
HXLINE( 126)				flxTxtAlign = HX_("justify",50,df,b5,83);
HXDLIN( 126)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==3) ){
HXLINE( 124)				flxTxtAlign = HX_("left",07,08,b0,47);
HXDLIN( 124)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==4) ){
HXLINE( 125)				flxTxtAlign = HX_("right",dc,0b,64,e9);
HXDLIN( 125)				goto _hx_goto_5;
            			}
            			/* default */{
HXLINE( 127)				flxTxtAlign = HX_("left",07,08,b0,47);
            			}
            			_hx_goto_5:;
            		}
HXLINE( 131)		HX_VAR( ::String,font);
HXDLIN( 131)		bool font1;
HXDLIN( 131)		if ((this->file != HX_("",00,00,00,00))) {
HXLINE( 131)			font1 = ::hx::IsNull( this->file );
            		}
            		else {
HXLINE( 131)			font1 = true;
            		}
HXDLIN( 131)		if (font1) {
HXLINE( 131)			font = null();
            		}
            		else {
HXLINE( 131)			font = this->file;
            		}
HXLINE( 133)		int _hx_tmp = ::Std_obj::_hx_int(( (Float)(this->format->size) ));
HXDLIN( 133)		flxText->setFormat(font,_hx_tmp,this->format->color,flxTxtAlign,this->border->style,this->border->color,null());
HXLINE( 134)		flxText->textField->get_defaultTextFormat()->leading = this->format->leading;
HXLINE( 135)		flxText->textField->get_defaultTextFormat()->letterSpacing = this->format->letterSpacing;
HXLINE( 136)		return flxText;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FontDef_obj,applyFlx,return )

void FontDef_obj::apply( ::openfl::text::TextField textField, ::flixel::text::FlxText flxText){
            	HX_STACKFRAME(&_hx_pos_6202c8c3d680a662_140_apply)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(textField,"textField")
            	HX_STACK_ARG(flxText,"flxText")
HXLINE( 140)
HXLINE( 141)		if (::hx::IsNotNull( textField )) {
HXLINE( 143)			textField->setTextFormat(this->format,null(),null());
            		}
HXLINE( 145)		if (::hx::IsNotNull( flxText )) {
HXLINE( 147)			this->applyFlx(flxText);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FontDef_obj,apply,(void))

void FontDef_obj::fromStr(::String str,::hx::Null< int >  __o_recursion){
            		int recursion = __o_recursion.Default(0);
            	HX_STACKFRAME(&_hx_pos_6202c8c3d680a662_156_fromStr)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(str,"str")
            	HX_STACK_ARG(recursion,"recursion")
HXLINE( 156)
HXLINE( 157)		if ((recursion > 3)) {
HXLINE( 159)			return;
            		}
HXLINE( 163)		str = ::flixel::addons::ui::FontFixer_obj::fix(str);
HXLINE( 166)		HX_VARI( ::String,style) = this->getFontStyle(str);
HXLINE( 167)		this->setFontStyle(style);
HXLINE( 169)		HX_VARI( ::String,extension) = HX_("",00,00,00,00);
HXLINE( 171)		{
HXLINE( 171)			int _g = 0;
HXDLIN( 171)			::Array< ::String > _g1 = ::flixel::addons::ui::FontDef_obj::EXTENSIONS;
HXDLIN( 171)			while((_g < _g1->length)){
HXLINE( 171)				HX_VARI( ::String,ext) = _g1->__get(_g);
HXDLIN( 171)				_g = (_g + 1);
HXLINE( 173)				if ((str.indexOf(ext,null()) != -1)) {
HXLINE( 175)					if (::openfl::utils::Assets_obj::exists((str + extension),HX_("FONT",cf,25,81,2e))) {
HXLINE( 177)						this->name = ::StringTools_obj::replace(str,extension,HX_("",00,00,00,00));
HXLINE( 178)						this->file = str;
HXLINE( 179)						extension = ext;
HXLINE( 180)						goto _hx_goto_8;
            					}
            				}
            			}
            			_hx_goto_8:;
            		}
HXLINE( 186)		if ((extension == HX_("",00,00,00,00))) {
HXLINE( 188)			int _g2 = 0;
HXDLIN( 188)			::Array< ::String > _g3 = ::flixel::addons::ui::FontDef_obj::EXTENSIONS;
HXDLIN( 188)			while((_g2 < _g3->length)){
HXLINE( 188)				HX_VARI_NAME( ::String,ext1,"ext") = _g3->__get(_g2);
HXDLIN( 188)				_g2 = (_g2 + 1);
HXLINE( 190)				if (::openfl::utils::Assets_obj::exists((str + ext1),HX_("FONT",cf,25,81,2e))) {
HXLINE( 192)					extension = ext1;
HXLINE( 193)					this->name = str;
HXLINE( 194)					this->file = (str + extension);
HXLINE( 195)					extension = ext1;
HXLINE( 196)					goto _hx_goto_9;
            				}
            			}
            			_hx_goto_9:;
            		}
            		else {
HXLINE( 202)			str = this->stripFontExtensions(str);
HXLINE( 203)			HX_VARI( ::String,fontStyle) = this->getFontStyle(str);
HXLINE( 204)			if ((fontStyle != HX_("",00,00,00,00))) {
HXLINE( 206)				str = str.substr((str.length - 1),1);
HXLINE( 207)				this->fromStr(str,(recursion + 1));
HXLINE( 208)				return;
            			}
            			else {
HXLINE( 212)				this->fromStr(str,(recursion + 1));
HXLINE( 213)				return;
            			}
            		}
HXLINE( 217)		this->setFontStyle(style);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FontDef_obj,fromStr,(void))

::String FontDef_obj::stripFontExtensions(::String str){
            	HX_STACKFRAME(&_hx_pos_6202c8c3d680a662_228_stripFontExtensions)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(str,"str")
HXLINE( 228)
HXLINE( 229)		if (::hx::IsNull( str )) {
HXLINE( 230)			return str;
            		}
HXLINE( 231)		{
HXLINE( 231)			int _g = 0;
HXDLIN( 231)			::Array< ::String > _g1 = ::flixel::addons::ui::FontDef_obj::EXTENSIONS;
HXDLIN( 231)			while((_g < _g1->length)){
HXLINE( 231)				HX_VARI( ::String,ext) = _g1->__get(_g);
HXDLIN( 231)				_g = (_g + 1);
HXLINE( 233)				bool _hx_tmp;
HXDLIN( 233)				if (::hx::IsNotNull( str )) {
HXLINE( 233)					_hx_tmp = (str.indexOf(ext,null()) != -1);
            				}
            				else {
HXLINE( 233)					_hx_tmp = false;
            				}
HXDLIN( 233)				if (_hx_tmp) {
HXLINE( 235)					str = ::StringTools_obj::replace(str,ext,HX_("",00,00,00,00));
            				}
            			}
            		}
HXLINE( 238)		return str;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FontDef_obj,stripFontExtensions,return )

::String FontDef_obj::getFontExtension(::String str){
            	HX_STACKFRAME(&_hx_pos_6202c8c3d680a662_242_getFontExtension)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(str,"str")
HXLINE( 242)
HXLINE( 243)		if (::hx::IsNull( str )) {
HXLINE( 244)			return HX_("",00,00,00,00);
            		}
HXLINE( 245)		{
HXLINE( 245)			int _g = 0;
HXDLIN( 245)			::Array< ::String > _g1 = ::flixel::addons::ui::FontDef_obj::EXTENSIONS;
HXDLIN( 245)			while((_g < _g1->length)){
HXLINE( 245)				HX_VARI( ::String,ext) = _g1->__get(_g);
HXDLIN( 245)				_g = (_g + 1);
HXLINE( 247)				if ((str.indexOf(ext,null()) != -1)) {
HXLINE( 249)					return ext;
            				}
            			}
            		}
HXLINE( 252)		return str;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FontDef_obj,getFontExtension,return )

void FontDef_obj::fixFontName(){
            	HX_STACKFRAME(&_hx_pos_6202c8c3d680a662_256_fixFontName)
            	HX_STACK_THIS(this)
HXLINE( 256)
HXLINE( 257)		HX_VARI( ::String,fontStyle) = this->getFontStyle(this->file);
HXLINE( 258)		HX_VARI( ::String,extension) = this->getFontExtension(this->file);
HXLINE( 259)		HX_VARI( ::String,fontbase) = this->stripFontExtensions(this->file);
HXLINE( 260)		if ((fontStyle != HX_("",00,00,00,00))) {
HXLINE( 262)			fontbase = fontbase.substr(0,(fontbase.length - 1));
            		}
HXLINE( 264)		HX_VARI( ::String,styleStr) = HX_("",00,00,00,00);
HXLINE( 265)		bool _hx_tmp;
HXDLIN( 265)		if (( (bool)(this->format->bold) )) {
HXLINE( 265)			_hx_tmp = ( (bool)(this->format->italic) );
            		}
            		else {
HXLINE( 265)			_hx_tmp = false;
            		}
HXDLIN( 265)		if (_hx_tmp) {
HXLINE( 267)			styleStr = HX_("z",7a,00,00,00);
            		}
            		else {
HXLINE( 269)			if (( (bool)(this->format->bold) )) {
HXLINE( 271)				styleStr = HX_("b",62,00,00,00);
            			}
            			else {
HXLINE( 273)				if (( (bool)(this->format->italic) )) {
HXLINE( 275)					styleStr = HX_("i",69,00,00,00);
            				}
            			}
            		}
HXLINE( 278)		this->file = ((fontbase + styleStr) + extension);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FontDef_obj,fixFontName,(void))

::String FontDef_obj::getFontStyle(::String str){
            	HX_STACKFRAME(&_hx_pos_6202c8c3d680a662_287_getFontStyle)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(str,"str")
HXLINE( 287)
HXLINE( 288)		if (::hx::IsNull( str )) {
HXLINE( 289)			return HX_("",00,00,00,00);
            		}
HXLINE( 290)		str = this->stripFontExtensions(str);
HXLINE( 291)		HX_VARI( ::String,lastChar) = str.substr((str.length - 1),1);
HXLINE( 292)		bool _hx_tmp;
HXDLIN( 292)		if ((lastChar != HX_("",00,00,00,00))) {
HXLINE( 292)			_hx_tmp = ::hx::IsNotNull( lastChar );
            		}
            		else {
HXLINE( 292)			_hx_tmp = false;
            		}
HXDLIN( 292)		if (_hx_tmp) {
HXLINE( 294)			lastChar = lastChar.toLowerCase();
HXLINE( 295)			::String _hx_switch_0 = lastChar;
            			if (  (_hx_switch_0==HX_("b",62,00,00,00)) ){
HXLINE( 298)				return HX_("b",62,00,00,00);
HXDLIN( 298)				goto _hx_goto_16;
            			}
            			if (  (_hx_switch_0==HX_("i",69,00,00,00)) ){
HXLINE( 300)				return HX_("i",69,00,00,00);
HXDLIN( 300)				goto _hx_goto_16;
            			}
            			if (  (_hx_switch_0==HX_("z",7a,00,00,00)) ){
HXLINE( 302)				return HX_("z",7a,00,00,00);
HXDLIN( 302)				goto _hx_goto_16;
            			}
            			/* default */{
HXLINE( 304)				return HX_("",00,00,00,00);
            			}
            			_hx_goto_16:;
            		}
HXLINE( 307)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FontDef_obj,getFontStyle,return )

void FontDef_obj::setFontStyle(::String str){
            	HX_STACKFRAME(&_hx_pos_6202c8c3d680a662_311_setFontStyle)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(str,"str")
HXLINE( 311)
HXLINE( 312)		str = str.toLowerCase();
HXLINE( 313)		::String _hx_switch_0 = str;
            		if (  (_hx_switch_0==HX_("b",62,00,00,00)) ||  (_hx_switch_0==HX_("bold",85,81,1b,41)) ){
HXLINE( 316)			this->format->bold = true;
HXLINE( 317)			this->format->italic = false;
HXLINE( 315)			goto _hx_goto_18;
            		}
            		if (  (_hx_switch_0==HX_("all",21,f9,49,00)) ||  (_hx_switch_0==HX_("bi",c7,55,00,00)) ||  (_hx_switch_0==HX_("bold-italic",f8,f7,a5,60)) ||  (_hx_switch_0==HX_("bolditalic",35,22,3d,79)) ||  (_hx_switch_0==HX_("both",81,88,1b,41)) ||  (_hx_switch_0==HX_("ib",d9,5b,00,00)) ||  (_hx_switch_0==HX_("italicbold",75,e8,59,e8)) ||  (_hx_switch_0==HX_("z",7a,00,00,00)) ){
HXLINE( 322)			this->format->bold = true;
HXLINE( 323)			this->format->italic = true;
HXLINE( 321)			goto _hx_goto_18;
            		}
            		if (  (_hx_switch_0==HX_("i",69,00,00,00)) ||  (_hx_switch_0==HX_("italic",f0,2e,64,06)) ){
HXLINE( 319)			this->format->bold = false;
HXLINE( 320)			this->format->italic = true;
HXLINE( 318)			goto _hx_goto_18;
            		}
            		/* default */{
HXLINE( 325)			this->format->bold = false;
HXLINE( 326)			this->format->italic = false;
            		}
            		_hx_goto_18:;
HXLINE( 328)		this->fixFontName();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FontDef_obj,setFontStyle,(void))

::String FontDef_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_6202c8c3d680a662_364_toString)
            	HX_STACK_THIS(this)
HXLINE( 364)
HXDLIN( 364)		::String _hx_tmp = ((HX_("{name:",34,f1,69,c4) + this->name) + HX_(",size:",ad,e8,8c,14));
HXDLIN( 364)		::String _hx_tmp1 = ((_hx_tmp + this->get_size()) + HX_(",file:",92,be,4c,98));
HXDLIN( 364)		::String _hx_tmp2 = ((((_hx_tmp1 + this->file) + HX_(",extension:",07,eb,aa,af)) + this->extension) + HX_(",format:",77,5e,da,b3));
HXDLIN( 364)		::String _hx_tmp3 = ((_hx_tmp2 + ::Std_obj::string(this->format)) + HX_(",border:",22,9f,94,07));
HXDLIN( 364)		return ((_hx_tmp3 + ::Std_obj::string(this->border)) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FontDef_obj,toString,return )

::Array< ::String > FontDef_obj::EXTENSIONS;

 ::flixel::addons::ui::FontDef FontDef_obj::copyFromTextField( ::openfl::text::TextField t){
            	HX_GC_STACKFRAME(&_hx_pos_6202c8c3d680a662_80_copyFromTextField)
            	HX_STACK_ARG(t,"t")
HXLINE(  80)
HXLINE(  81)		HX_VARI(  ::openfl::text::TextFormat,dtf) = t->get_defaultTextFormat();
HXLINE(  82)		HX_VARI(  ::flixel::addons::ui::FontDef,fd) =  ::flixel::addons::ui::FontDef_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),null(),null(),null(),null());
HXLINE(  83)		fd->fromStr(dtf->font,null());
HXLINE(  84)		fd->format->font = dtf->font;
HXLINE(  85)		fd->format->size = dtf->size;
HXLINE(  86)		fd->format->color = dtf->color;
HXLINE(  87)		fd->format->bold = dtf->bold;
HXLINE(  88)		fd->format->italic = dtf->italic;
HXLINE(  89)		fd->format->underline = dtf->underline;
HXLINE(  90)		fd->format->url = dtf->url;
HXLINE(  91)		fd->format->letterSpacing = dtf->letterSpacing;
HXLINE(  92)		fd->format->leading = dtf->leading;
HXLINE(  93)		fd->format->target = dtf->target;
HXLINE(  94)		fd->format->align = dtf->align;
HXLINE(  95)		return fd;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontDef_obj,copyFromTextField,return )

 ::flixel::addons::ui::FontDef FontDef_obj::copyFromFlxText( ::flixel::text::FlxText t){
            	HX_STACKFRAME(&_hx_pos_6202c8c3d680a662_99_copyFromFlxText)
            	HX_STACK_ARG(t,"t")
HXLINE(  99)
HXLINE( 100)		HX_VARI(  ::flixel::addons::ui::FontDef,fd) = ::flixel::addons::ui::FontDef_obj::copyFromTextField(t->textField);
HXLINE( 101)		fd->fromStr(t->_font,null());
HXLINE( 102)		fd->border->style = t->borderStyle;
HXLINE( 103)		fd->border->color = t->borderColor;
HXLINE( 104)		fd->border->quality = t->borderQuality;
HXLINE( 105)		fd->border->size = t->borderSize;
HXLINE( 106)		return fd;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontDef_obj,copyFromFlxText,return )

 ::flixel::addons::ui::FontDef FontDef_obj::fromXML( ::Xml data){
            	HX_GC_STACKFRAME(&_hx_pos_6202c8c3d680a662_332_fromXML)
            	HX_STACK_ARG(data,"data")
HXLINE( 332)
HXLINE( 333)		HX_VARI( ::String,fontFace) = ::flixel::addons::ui::U_obj::xml_str(data,HX_("font",cf,5d,c0,43),null(),null());
HXLINE( 334)		HX_VARI( ::String,fontStyle) = ::flixel::addons::ui::U_obj::xml_str(data,HX_("style",31,a5,1d,84),null(),null());
HXLINE( 335)		HX_VARI( ::String,fontFile) = null();
HXLINE( 336)		if ((fontFace != HX_("",00,00,00,00))) {
HXLINE( 338)			fontFile = ::flixel::addons::ui::FlxUI_obj::font(fontFace,fontStyle,null());
            		}
HXLINE( 340)		HX_VARI_NAME( ::String,fontStyle1,"fontStyle") = ::flixel::addons::ui::U_obj::xml_str(data,HX_("style",31,a5,1d,84),null(),null());
HXLINE( 341)		HX_VARI( int,fontSize) = ::flixel::addons::ui::FlxUI_obj::fontSize(fontFile,::flixel::addons::ui::U_obj::xml_i(data,HX_("size",c1,a0,53,4c),8));
HXLINE( 342)		HX_VARI( int,fontColor) = ( (int)(::flixel::addons::ui::U_obj::xml_color(data,HX_("color",63,71,5c,4a),true,-1)) );
HXLINE( 343)		HX_VARI( ::String,fontAlign) = ::flixel::addons::ui::U_obj::xml_str(data,HX_("align",c5,56,91,21),null(),null());
HXLINE( 344)		HX_VAR(  ::Dynamic,align);
HXDLIN( 344)		::String _hx_switch_0 = fontAlign.toLowerCase();
            		if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 344)			align = 0;
HXDLIN( 344)			goto _hx_goto_23;
            		}
            		if (  (_hx_switch_0==HX_("justify",50,df,b5,83)) ){
HXLINE( 344)			align = 2;
HXDLIN( 344)			goto _hx_goto_23;
            		}
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 344)			align = 3;
HXDLIN( 344)			goto _hx_goto_23;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 344)			align = 4;
HXDLIN( 344)			goto _hx_goto_23;
            		}
            		/* default */{
HXLINE( 344)			align = 3;
            		}
            		_hx_goto_23:;
HXLINE( 352)		HX_VARI(  ::flixel::addons::ui::FontDef,fd) =  ::flixel::addons::ui::FontDef_obj::__alloc( HX_CTX ,::flixel::addons::ui::U_obj::xml_str(data,HX_("font",cf,5d,c0,43),null(),null()),HX_(".ttf",78,3b,c0,1e),fontFile,null(),null());
HXLINE( 353)		fd->format->color = fontColor;
HXLINE( 354)		fd->format->size = fontSize;
HXLINE( 355)		fd->format->align = align;
HXLINE( 356)		fd->set_size(fontSize);
HXLINE( 357)		fd->setFontStyle(fontStyle1);
HXLINE( 358)		fd->border = ::flixel::addons::ui::BorderDef_obj::fromXML(data);
HXLINE( 359)		return fd;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontDef_obj,fromXML,return )


::hx::ObjectPtr< FontDef_obj > FontDef_obj::__new(::String Name,::String __o_Extension,::String __o_File, ::openfl::text::TextFormat Format, ::flixel::addons::ui::BorderDef Border) {
	::hx::ObjectPtr< FontDef_obj > __this = new FontDef_obj();
	__this->__construct(Name,__o_Extension,__o_File,Format,Border);
	return __this;
}

::hx::ObjectPtr< FontDef_obj > FontDef_obj::__alloc(::hx::Ctx *_hx_ctx,::String Name,::String __o_Extension,::String __o_File, ::openfl::text::TextFormat Format, ::flixel::addons::ui::BorderDef Border) {
	FontDef_obj *__this = (FontDef_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FontDef_obj), true, "flixel.addons.ui.FontDef"));
	*(void **)__this = FontDef_obj::_hx_vtable;
	__this->__construct(Name,__o_Extension,__o_File,Format,Border);
	return __this;
}

FontDef_obj::FontDef_obj()
{
}

void FontDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FontDef);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(extension,"extension");
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(_size,"_size");
	HX_MARK_END_CLASS();
}

void FontDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(extension,"extension");
	HX_VISIT_MEMBER_NAME(file,"file");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(_size,"_size");
}

::hx::Val FontDef_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_size() ); }
		if (HX_FIELD_EQ(inName,"file") ) { return ::hx::Val( file ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		if (HX_FIELD_EQ(inName,"_size") ) { return ::hx::Val( _size ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
		if (HX_FIELD_EQ(inName,"border") ) { return ::hx::Val( border ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromStr") ) { return ::hx::Val( fromStr_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return ::hx::Val( set_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyTxt") ) { return ::hx::Val( applyTxt_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyFlx") ) { return ::hx::Val( applyFlx_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"extension") ) { return ::hx::Val( extension ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fixFontName") ) { return ::hx::Val( fixFontName_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFontStyle") ) { return ::hx::Val( getFontStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFontStyle") ) { return ::hx::Val( setFontStyle_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFontExtension") ) { return ::hx::Val( getFontExtension_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"stripFontExtensions") ) { return ::hx::Val( stripFontExtensions_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FontDef_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromXML") ) { outValue = fromXML_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { outValue = ( EXTENSIONS ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"copyFromFlxText") ) { outValue = copyFromFlxText_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"copyFromTextField") ) { outValue = copyFromTextField_dyn(); return true; }
	}
	return false;
}

::hx::Val FontDef_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_size(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_size") ) { _size=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast<  ::flixel::addons::ui::BorderDef >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"extension") ) { extension=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FontDef_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { EXTENSIONS=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

void FontDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("extension",7f,93,10,e5));
	outFields->push(HX_("file",7c,ce,bb,43));
	outFields->push(HX_("format",37,8f,8e,fd));
	outFields->push(HX_("border",ec,4c,1a,64));
	outFields->push(HX_("_size",a0,bc,64,ff));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FontDef_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FontDef_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(FontDef_obj,extension),HX_("extension",7f,93,10,e5)},
	{::hx::fsString,(int)offsetof(FontDef_obj,file),HX_("file",7c,ce,bb,43)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(FontDef_obj,format),HX_("format",37,8f,8e,fd)},
	{::hx::fsObject /*  ::flixel::addons::ui::BorderDef */ ,(int)offsetof(FontDef_obj,border),HX_("border",ec,4c,1a,64)},
	{::hx::fsInt,(int)offsetof(FontDef_obj,_size),HX_("_size",a0,bc,64,ff)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FontDef_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &FontDef_obj::EXTENSIONS,HX_("EXTENSIONS",14,f0,79,7b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FontDef_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("extension",7f,93,10,e5),
	HX_("file",7c,ce,bb,43),
	HX_("format",37,8f,8e,fd),
	HX_("border",ec,4c,1a,64),
	HX_("get_size",4a,5c,0e,cc),
	HX_("set_size",be,b5,6b,7a),
	HX_("clone",5d,13,63,48),
	HX_("applyTxt",a2,39,fb,24),
	HX_("applyFlx",a4,8f,f0,24),
	HX_("apply",6e,85,3b,24),
	HX_("fromStr",67,79,02,58),
	HX_("_size",a0,bc,64,ff),
	HX_("stripFontExtensions",bb,07,99,6a),
	HX_("getFontExtension",3a,0d,07,bf),
	HX_("fixFontName",af,6a,82,bd),
	HX_("getFontStyle",6c,e5,4f,3f),
	HX_("setFontStyle",e0,08,49,54),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

static void FontDef_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontDef_obj::EXTENSIONS,"EXTENSIONS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FontDef_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontDef_obj::EXTENSIONS,"EXTENSIONS");
};

#endif

::hx::Class FontDef_obj::__mClass;

static ::String FontDef_obj_sStaticFields[] = {
	HX_("EXTENSIONS",14,f0,79,7b),
	HX_("copyFromTextField",0e,09,89,89),
	HX_("copyFromFlxText",40,80,9b,2a),
	HX_("fromXML",8d,22,06,58),
	::String(null())
};

void FontDef_obj::__register()
{
	FontDef_obj _hx_dummy;
	FontDef_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FontDef",05,fa,2d,9b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FontDef_obj::__GetStatic;
	__mClass->mSetStaticField = &FontDef_obj::__SetStatic;
	__mClass->mMarkFunc = FontDef_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FontDef_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FontDef_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FontDef_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FontDef_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FontDef_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FontDef_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FontDef_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6202c8c3d680a662_27_boot)
HXDLIN(  27)		EXTENSIONS = ::Array_obj< ::String >::fromData( _hx_array_data_9b2dfa05_26,2);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
