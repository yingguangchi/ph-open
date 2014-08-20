/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.cocos2dx.lib.Cocos2dxRenderer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_COCOS2DX_LIB_COCOS2DXRENDERER_HPP_DECL
#define J2CPP_ORG_COCOS2DX_LIB_COCOS2DXRENDERER_HPP_DECL


namespace j2cpp { namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLConfig; } } } } }
namespace j2cpp { namespace javax { namespace microedition { namespace khronos { namespace opengles { class GL10; } } } } }
namespace j2cpp { namespace android { namespace opengl { namespace GLSurfaceView_ { class Renderer; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/opengl/GLSurfaceView.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/microedition/khronos/egl/EGLConfig.hpp>
#include <javax/microedition/khronos/opengles/GL10.hpp>


namespace j2cpp {

namespace org { namespace cocos2dx { namespace lib {

	class Cocos2dxRenderer;
	class Cocos2dxRenderer
		: public object<Cocos2dxRenderer>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)

		explicit Cocos2dxRenderer(jobject jobj)
		: object<Cocos2dxRenderer>(jobj)
		{
		}

		operator local_ref<android::opengl::GLSurfaceView_::Renderer>() const;
		operator local_ref<java::lang::Object>() const;


		Cocos2dxRenderer();
		static void setAnimationInterval(jdouble);
		void setScreenWidthAndHeight(jint, jint);
		void onSurfaceCreated(local_ref< javax::microedition::khronos::opengles::GL10 >  const&, local_ref< javax::microedition::khronos::egl::EGLConfig >  const&);
		void onSurfaceChanged(local_ref< javax::microedition::khronos::opengles::GL10 >  const&, jint, jint);
		void onDrawFrame(local_ref< javax::microedition::khronos::opengles::GL10 >  const&);
		void handleActionDown(jint, jfloat, jfloat);
		void handleActionUp(jint, jfloat, jfloat);
		void handleActionCancel(local_ref< array<jint,1> >  const&, local_ref< array<jfloat,1> >  const&, local_ref< array<jfloat,1> >  const&);
		void handleActionMove(local_ref< array<jint,1> >  const&, local_ref< array<jfloat,1> >  const&, local_ref< array<jfloat,1> >  const&);
		void handleKeyDown(jint);
		void handleOnPause();
		void handleOnResume();
		void handleInsertText(local_ref< java::lang::String >  const&);
		void handleDeleteBackward();
		local_ref< java::lang::String > getContentText();

	}; //class Cocos2dxRenderer

} //namespace lib
} //namespace cocos2dx
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_COCOS2DX_LIB_COCOS2DXRENDERER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_COCOS2DX_LIB_COCOS2DXRENDERER_HPP_IMPL
#define J2CPP_ORG_COCOS2DX_LIB_COCOS2DXRENDERER_HPP_IMPL

namespace j2cpp {



org::cocos2dx::lib::Cocos2dxRenderer::operator local_ref<android::opengl::GLSurfaceView_::Renderer>() const
{
	return local_ref<android::opengl::GLSurfaceView_::Renderer>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxRenderer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::cocos2dx::lib::Cocos2dxRenderer::Cocos2dxRenderer()
: object<org::cocos2dx::lib::Cocos2dxRenderer>(
	call_new_object<
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_NAME(0),
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void org::cocos2dx::lib::Cocos2dxRenderer::setAnimationInterval(jdouble a0)
{
	return call_static_method<
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_NAME(1),
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(a0);
}

void org::cocos2dx::lib::Cocos2dxRenderer::setScreenWidthAndHeight(jint a0, jint a1)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_NAME(2),
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1);
}

void org::cocos2dx::lib::Cocos2dxRenderer::onSurfaceCreated(local_ref< javax::microedition::khronos::opengles::GL10 > const &a0, local_ref< javax::microedition::khronos::egl::EGLConfig > const &a1)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_NAME(3),
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1);
}

void org::cocos2dx::lib::Cocos2dxRenderer::onSurfaceChanged(local_ref< javax::microedition::khronos::opengles::GL10 > const &a0, jint a1, jint a2)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_NAME(4),
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::cocos2dx::lib::Cocos2dxRenderer::onDrawFrame(local_ref< javax::microedition::khronos::opengles::GL10 > const &a0)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_NAME(5),
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}










void org::cocos2dx::lib::Cocos2dxRenderer::handleActionDown(jint a0, jfloat a1, jfloat a2)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_NAME(15),
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::cocos2dx::lib::Cocos2dxRenderer::handleActionUp(jint a0, jfloat a1, jfloat a2)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_NAME(16),
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::cocos2dx::lib::Cocos2dxRenderer::handleActionCancel(local_ref< array<jint,1> > const &a0, local_ref< array<jfloat,1> > const &a1, local_ref< array<jfloat,1> > const &a2)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_NAME(17),
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::cocos2dx::lib::Cocos2dxRenderer::handleActionMove(local_ref< array<jint,1> > const &a0, local_ref< array<jfloat,1> > const &a1, local_ref< array<jfloat,1> > const &a2)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_NAME(18),
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::cocos2dx::lib::Cocos2dxRenderer::handleKeyDown(jint a0)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_NAME(19),
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0);
}

void org::cocos2dx::lib::Cocos2dxRenderer::handleOnPause()
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_NAME(20),
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject());
}

void org::cocos2dx::lib::Cocos2dxRenderer::handleOnResume()
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_NAME(21),
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(get_jobject());
}




void org::cocos2dx::lib::Cocos2dxRenderer::handleInsertText(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_NAME(25),
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_SIGNATURE(25), 
		void
	>(get_jobject(), a0);
}

void org::cocos2dx::lib::Cocos2dxRenderer::handleDeleteBackward()
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_NAME(26),
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_SIGNATURE(26), 
		void
	>(get_jobject());
}

local_ref< java::lang::String > org::cocos2dx::lib::Cocos2dxRenderer::getContentText()
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_NAME(27),
		org::cocos2dx::lib::Cocos2dxRenderer::J2CPP_METHOD_SIGNATURE(27), 
		local_ref< java::lang::String >
	>(get_jobject());
}




J2CPP_DEFINE_CLASS(org::cocos2dx::lib::Cocos2dxRenderer,"org/cocos2dx/lib/Cocos2dxRenderer")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,1,"setAnimationInterval","(D)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,2,"setScreenWidthAndHeight","(II)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,3,"onSurfaceCreated","(Ljavax/microedition/khronos/opengles/GL10;Ljavax/microedition/khronos/egl/EGLConfig;)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,4,"onSurfaceChanged","(Ljavax/microedition/khronos/opengles/GL10;II)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,5,"onDrawFrame","(Ljavax/microedition/khronos/opengles/GL10;)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,6,"nativeTouchesBegin","(IFF)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,7,"nativeTouchesEnd","(IFF)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,8,"nativeTouchesMove","([I[F[F)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,9,"nativeTouchesCancel","([I[F[F)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,10,"nativeKeyDown","(I)Z")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,11,"nativeRender","()V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,12,"nativeInit","(II)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,13,"nativeOnPause","()V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,14,"nativeOnResume","()V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,15,"handleActionDown","(IFF)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,16,"handleActionUp","(IFF)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,17,"handleActionCancel","([I[F[F)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,18,"handleActionMove","([I[F[F)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,19,"handleKeyDown","(I)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,20,"handleOnPause","()V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,21,"handleOnResume","()V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,22,"nativeInsertText","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,23,"nativeDeleteBackward","()V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,24,"nativeGetContentText","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,25,"handleInsertText","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,26,"handleDeleteBackward","()V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,27,"getContentText","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxRenderer,28,"<clinit>","()V")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxRenderer,0,"NANOSECONDSPERSECOND","J")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxRenderer,1,"NANOSECONDSPERMICROSECOND","J")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxRenderer,2,"sAnimationInterval","J")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxRenderer,3,"mLastTickInNanoSeconds","J")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxRenderer,4,"mScreenWidth","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxRenderer,5,"mScreenHeight","I")

} //namespace j2cpp

#endif //J2CPP_ORG_COCOS2DX_LIB_COCOS2DXRENDERER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION