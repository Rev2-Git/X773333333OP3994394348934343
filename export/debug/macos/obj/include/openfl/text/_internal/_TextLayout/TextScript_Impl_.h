// Generated by Haxe 4.3.0
#ifndef INCLUDED_openfl_text__internal__TextLayout_TextScript_Impl_
#define INCLUDED_openfl_text__internal__TextLayout_TextScript_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,text,_internal,_TextLayout,TextScript_Impl_)

namespace openfl{
namespace text{
namespace _internal{
namespace _TextLayout{


class HXCPP_CLASS_ATTRIBUTES TextScript_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextScript_Impl__obj OBJ_;
		TextScript_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3619b353 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.text._internal._TextLayout.TextScript_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.text._internal._TextLayout.TextScript_Impl_"); }

		inline static ::hx::ObjectPtr< TextScript_Impl__obj > __new() {
			::hx::ObjectPtr< TextScript_Impl__obj > __this = new TextScript_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TextScript_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			TextScript_Impl__obj *__this = (TextScript_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextScript_Impl__obj), false, "openfl.text._internal._TextLayout.TextScript_Impl_"));
			*(void **)__this = TextScript_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextScript_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextScript_Impl_",58,e9,21,77); }

		static void __boot();
		static ::String COMMON;
		static ::String INHERITED;
		static ::String UNKNOWN;
		static ::String ARABIC;
		static ::String ARMENIAN;
		static ::String BENGALI;
		static ::String CYRILLIC;
		static ::String DEVANAGARI;
		static ::String GEORGIAN;
		static ::String GREEK;
		static ::String GUJARATI;
		static ::String GURMUKHI;
		static ::String HANGUL;
		static ::String HAN;
		static ::String HEBREW;
		static ::String HIRAGANA;
		static ::String KANNADA;
		static ::String KATAKANA;
		static ::String LAO;
		static ::String LATIN;
		static ::String MALAYALAM;
		static ::String ORIYA;
		static ::String TAMIL;
		static ::String TELUGA;
		static ::String THAI;
		static ::String TIBETAN;
		static ::String BOPOMOFO;
		static ::String BRAILLE;
		static ::String CANADIAN_SYLLABICS;
		static ::String CHEROKEE;
		static ::String ETHIOPIC;
		static ::String KHMER;
		static ::String MONGOLIAN;
		static ::String MYANMAR;
		static ::String OGHAM;
		static ::String RUNIC;
		static ::String SINHALA;
		static ::String SYRIAC;
		static ::String THAANA;
		static ::String YI;
		static ::String DESERET;
		static ::String GOTHIC;
		static ::String OLD_ITALIC;
		static ::String BUHID;
		static ::String HANUNOO;
		static ::String TAGALOG;
		static ::String TAGBANWA;
		static ::String CYPRIOT;
		static ::String LIMBU;
		static ::String LINEAR_B;
		static ::String OSMANYA;
		static ::String SHAVIAN;
		static ::String TAI_LE;
		static ::String UGARITIC;
		static ::String BUGINESE;
		static ::String COPTIC;
		static ::String GLAGOLITIC;
		static ::String KHAROSHTHI;
		static ::String NEW_TAI_LUE;
		static ::String OLD_PERSIAN;
		static ::String SYLOTI_NAGRI;
		static ::String TIFINAGH;
		static ::String BALINESE;
		static ::String CUNEIFORM;
		static ::String NKO;
		static ::String PHAGS_PA;
		static ::String PHOENICIAN;
		static ::String CARIAN;
		static ::String CHAM;
		static ::String KAYAH_LI;
		static ::String LEPCHA;
		static ::String LYCIAN;
		static ::String LYDIAN;
		static ::String OL_CHIKI;
		static ::String REJANG;
		static ::String SAURASHTRA;
		static ::String SUNDANESE;
		static ::String VAI;
		static ::String AVESTAN;
		static ::String BAMUM;
		static ::String EGYPTIAN_HIEROGLYPHS;
		static ::String IMPERIAL_ARAMAIC;
		static ::String INSCRIPTIONAL_PAHLAVI;
		static ::String INSCRIPTIONAL_PARTHIAN;
		static ::String JAVANESE;
		static ::String KAITHI;
		static ::String LISU;
		static ::String MEETEI_MAYEK;
		static ::String OLD_SOUTH_ARABIAN;
		static ::String OLD_TURKIC;
		static ::String SAMARITAN;
		static ::String TAI_THAM;
		static ::String TAI_VIET;
		static ::String BATAK;
		static ::String BRAHMI;
		static ::String MANDAIC;
		static ::String CHAKMA;
		static ::String MEROITIC_CURSIVE;
		static ::String MEROITIC_HIEROGLYPHS;
		static ::String MIAO;
		static ::String SHARADA;
		static ::String SORA_SOMPENG;
		static ::String TAKRI;
		static ::String BASSA_VAH;
		static ::String CAUCASIAN_ALBANIAN;
		static ::String DUPLOYAN;
		static ::String ELBASAN;
		static ::String GRANTHA;
		static ::String KHOJKI;
		static ::String KHUDAWADI;
		static ::String LINEAR_A;
		static ::String MAHAJANI;
		static ::String MANICHAEAN;
		static ::String MENDE_KIKAKUI;
		static ::String MODI;
		static ::String MRO;
		static ::String NABATAEAN;
		static ::String OLD_NORTH_ARABIAN;
		static ::String OLD_PERMIC;
		static ::String PAHAWH_HMONG;
		static ::String PALMYRENE;
		static ::String PAU_CIN_HAU;
		static ::String PSALTER_PAHLAVI;
		static ::String SIDDHAM;
		static ::String TIRHUTA;
		static ::String WARANG_CITI;
		static int toHBScript(::String this1);
		static ::Dynamic toHBScript_dyn();

		static bool get_rightToLeft(::String this1);
		static ::Dynamic get_rightToLeft_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _internal
} // end namespace _TextLayout

#endif /* INCLUDED_openfl_text__internal__TextLayout_TextScript_Impl_ */ 
