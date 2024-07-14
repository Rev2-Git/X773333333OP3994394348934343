// Generated by Haxe 4.3.0
#ifndef INCLUDED_lime_app_Application
#define INCLUDED_lime_app_Application

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeApplication)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,app,_Event_Int_Void)
HX_DECLARE_CLASS2(lime,app,_Event_lime_ui_Window_Void)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS2(lime,ui,Joystick)
HX_DECLARE_CLASS2(lime,ui,MouseWheelMode)
HX_DECLARE_CLASS2(lime,ui,Touch)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS2(lime,utils,Preloader)

namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES Application_obj : public  ::lime::app::Module_obj
{
	public:
		typedef  ::lime::app::Module_obj super;
		typedef Application_obj OBJ_;
		Application_obj();

	public:
		enum { _hx_ClassId = 0x431bf104 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.app.Application")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.app.Application"); }
		static ::hx::ObjectPtr< Application_obj > __new();
		static ::hx::ObjectPtr< Application_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Application_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		static void __init__();

		::String __ToString() const { return HX_("Application",30,43,71,0e); }

		static void __boot();
		static  ::lime::app::Application current;
		 ::haxe::ds::StringMap meta;
		::Array< ::Dynamic> modules;
		 ::lime::app::_Event_Int_Void onUpdate;
		 ::lime::app::_Event_lime_ui_Window_Void onCreateWindow;
		 ::lime::utils::Preloader preloader;
		 ::lime::ui::Window window;
		::Array< ::Dynamic> windows;
		 ::lime::_internal::backend::native::NativeApplication _hx___backend;
		 ::lime::utils::Preloader _hx___preloader;
		 ::lime::ui::Window _hx___window;
		 ::haxe::ds::IntMap _hx___windowByID;
		::Array< ::Dynamic> _hx___windows;
		void addModule(::Dynamic module);
		::Dynamic addModule_dyn();

		virtual  ::lime::ui::Window createWindow( ::Dynamic attributes);
		::Dynamic createWindow_dyn();

		int exec();
		::Dynamic exec_dyn();

		void onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value);
		::Dynamic onGamepadAxisMove_dyn();

		void onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button);
		::Dynamic onGamepadButtonDown_dyn();

		void onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button);
		::Dynamic onGamepadButtonUp_dyn();

		void onGamepadConnect( ::lime::ui::Gamepad gamepad);
		::Dynamic onGamepadConnect_dyn();

		void onGamepadDisconnect( ::lime::ui::Gamepad gamepad);
		::Dynamic onGamepadDisconnect_dyn();

		void onJoystickAxisMove( ::lime::ui::Joystick joystick,int axis,Float value);
		::Dynamic onJoystickAxisMove_dyn();

		void onJoystickButtonDown( ::lime::ui::Joystick joystick,int button);
		::Dynamic onJoystickButtonDown_dyn();

		void onJoystickButtonUp( ::lime::ui::Joystick joystick,int button);
		::Dynamic onJoystickButtonUp_dyn();

		void onJoystickConnect( ::lime::ui::Joystick joystick);
		::Dynamic onJoystickConnect_dyn();

		void onJoystickDisconnect( ::lime::ui::Joystick joystick);
		::Dynamic onJoystickDisconnect_dyn();

		void onJoystickHatMove( ::lime::ui::Joystick joystick,int hat,int position);
		::Dynamic onJoystickHatMove_dyn();

		void onJoystickTrackballMove( ::lime::ui::Joystick joystick,int trackball,Float x,Float y);
		::Dynamic onJoystickTrackballMove_dyn();

		void onKeyDown(int keyCode,int modifier);
		::Dynamic onKeyDown_dyn();

		void onKeyUp(int keyCode,int modifier);
		::Dynamic onKeyUp_dyn();

		void onModuleExit(int code);
		::Dynamic onModuleExit_dyn();

		void onMouseDown(Float x,Float y,int button);
		::Dynamic onMouseDown_dyn();

		void onMouseMove(Float x,Float y);
		::Dynamic onMouseMove_dyn();

		void onMouseMoveRelative(Float x,Float y);
		::Dynamic onMouseMoveRelative_dyn();

		void onMouseUp(Float x,Float y,int button);
		::Dynamic onMouseUp_dyn();

		void onMouseWheel(Float deltaX,Float deltaY, ::lime::ui::MouseWheelMode deltaMode);
		::Dynamic onMouseWheel_dyn();

		void onPreloadComplete();
		::Dynamic onPreloadComplete_dyn();

		void onPreloadProgress(int loaded,int total);
		::Dynamic onPreloadProgress_dyn();

		void onRenderContextLost();
		::Dynamic onRenderContextLost_dyn();

		void onRenderContextRestored( ::lime::graphics::RenderContext context);
		::Dynamic onRenderContextRestored_dyn();

		void onTextEdit(::String text,int start,int length);
		::Dynamic onTextEdit_dyn();

		void onTextInput(::String text);
		::Dynamic onTextInput_dyn();

		void onTouchCancel( ::lime::ui::Touch touch);
		::Dynamic onTouchCancel_dyn();

		void onTouchEnd( ::lime::ui::Touch touch);
		::Dynamic onTouchEnd_dyn();

		void onTouchMove( ::lime::ui::Touch touch);
		::Dynamic onTouchMove_dyn();

		void onTouchStart( ::lime::ui::Touch touch);
		::Dynamic onTouchStart_dyn();

		void onWindowActivate();
		::Dynamic onWindowActivate_dyn();

		void onWindowClose();
		::Dynamic onWindowClose_dyn();

		void onWindowCreate();
		::Dynamic onWindowCreate_dyn();

		void onWindowDeactivate();
		::Dynamic onWindowDeactivate_dyn();

		void onWindowDropFile(::String file);
		::Dynamic onWindowDropFile_dyn();

		void onWindowEnter();
		::Dynamic onWindowEnter_dyn();

		void onWindowExpose();
		::Dynamic onWindowExpose_dyn();

		void onWindowFocusIn();
		::Dynamic onWindowFocusIn_dyn();

		void onWindowFocusOut();
		::Dynamic onWindowFocusOut_dyn();

		void onWindowFullscreen();
		::Dynamic onWindowFullscreen_dyn();

		void onWindowLeave();
		::Dynamic onWindowLeave_dyn();

		void onWindowMove(Float x,Float y);
		::Dynamic onWindowMove_dyn();

		void onWindowMinimize();
		::Dynamic onWindowMinimize_dyn();

		void onWindowResize(int width,int height);
		::Dynamic onWindowResize_dyn();

		void onWindowRestore();
		::Dynamic onWindowRestore_dyn();

		void removeModule(::Dynamic module);
		::Dynamic removeModule_dyn();

		void render( ::lime::graphics::RenderContext context);
		::Dynamic render_dyn();

		void update(int deltaTime);
		::Dynamic update_dyn();

		void _hx___addWindow( ::lime::ui::Window window);
		::Dynamic _hx___addWindow_dyn();

		 ::lime::ui::Window _hx___createWindow( ::Dynamic attributes);
		::Dynamic _hx___createWindow_dyn();

		void _hx___registerLimeModule( ::lime::app::Application application);

		void _hx___removeWindow( ::lime::ui::Window window);
		::Dynamic _hx___removeWindow_dyn();

		void _hx___onGamepadConnect( ::lime::ui::Gamepad gamepad);
		::Dynamic _hx___onGamepadConnect_dyn();

		void _hx___onJoystickConnect( ::lime::ui::Joystick joystick);
		::Dynamic _hx___onJoystickConnect_dyn();

		void _hx___onModuleExit(int code);
		::Dynamic _hx___onModuleExit_dyn();

		void _hx___onWindowClose( ::lime::ui::Window window);
		::Dynamic _hx___onWindowClose_dyn();

		void _hx___unregisterLimeModule( ::lime::app::Application application);

		 ::lime::utils::Preloader get_preloader();
		::Dynamic get_preloader_dyn();

		 ::lime::ui::Window get_window();
		::Dynamic get_window_dyn();

		::Array< ::Dynamic> get_windows();
		::Dynamic get_windows_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Application */ 
