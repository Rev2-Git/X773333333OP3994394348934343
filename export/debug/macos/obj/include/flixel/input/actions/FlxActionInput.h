// Generated by Haxe 4.3.0
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#define INCLUDED_flixel_input_actions_FlxActionInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,input,actions,FlxAction)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxInputDevice)
HX_DECLARE_CLASS3(flixel,input,actions,FlxInputType)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxActionInput_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxActionInput_obj OBJ_;
		FlxActionInput_obj();

	public:
		enum { _hx_ClassId = 0x20308a99 };

		void __construct( ::flixel::input::actions::FlxInputType InputType, ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_DeviceID);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxActionInput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxActionInput"); }
		static ::hx::ObjectPtr< FlxActionInput_obj > __new( ::flixel::input::actions::FlxInputType InputType, ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_DeviceID);
		static ::hx::ObjectPtr< FlxActionInput_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::input::actions::FlxInputType InputType, ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_DeviceID);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxActionInput_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxActionInput",42,7d,0a,ef); }

		 ::flixel::input::actions::FlxInputType type;
		 ::flixel::input::actions::FlxInputDevice device;
		int deviceID;
		bool destroyed;
		int inputID;
		int trigger;
		virtual void update();
		::Dynamic update_dyn();

		virtual void destroy();
		::Dynamic destroy_dyn();

		virtual bool check( ::flixel::input::actions::FlxAction action);
		::Dynamic check_dyn();

		bool compareState(int condition,int state);
		::Dynamic compareState_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxActionInput */ 
