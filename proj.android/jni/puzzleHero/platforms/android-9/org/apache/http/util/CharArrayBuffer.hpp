/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.util.CharArrayBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_UTIL_CHARARRAYBUFFER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_UTIL_CHARARRAYBUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class ByteArrayBuffer; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/util/ByteArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace util {

	class CharArrayBuffer;
	class CharArrayBuffer
		: public object<CharArrayBuffer>
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

		explicit CharArrayBuffer(jobject jobj)
		: object<CharArrayBuffer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		CharArrayBuffer(jint);
		void append(local_ref< array<jchar,1> >  const&, jint, jint);
		void append(local_ref< java::lang::String >  const&);
		void append(local_ref< org::apache::http::util::CharArrayBuffer >  const&, jint, jint);
		void append(local_ref< org::apache::http::util::CharArrayBuffer >  const&);
		void append(jchar);
		void append(local_ref< array<jbyte,1> >  const&, jint, jint);
		void append(local_ref< org::apache::http::util::ByteArrayBuffer >  const&, jint, jint);
		void append(local_ref< java::lang::Object >  const&);
		void clear();
		local_ref< array<jchar,1> > toCharArray();
		jchar charAt(jint);
		local_ref< array<jchar,1> > buffer();
		jint capacity();
		jint length();
		void ensureCapacity(jint);
		void setLength(jint);
		jboolean isEmpty();
		jboolean isFull();
		jint indexOf(jint, jint, jint);
		jint indexOf(jint);
		local_ref< java::lang::String > substring(jint, jint);
		local_ref< java::lang::String > substringTrimmed(jint, jint);
		local_ref< java::lang::String > toString();
	}; //class CharArrayBuffer

} //namespace util
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_UTIL_CHARARRAYBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_UTIL_CHARARRAYBUFFER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_UTIL_CHARARRAYBUFFER_HPP_IMPL

namespace j2cpp {



org::apache::http::util::CharArrayBuffer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::util::CharArrayBuffer::CharArrayBuffer(jint a0)
: object<org::apache::http::util::CharArrayBuffer>(
	call_new_object<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(0),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


void org::apache::http::util::CharArrayBuffer::append(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(1),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::apache::http::util::CharArrayBuffer::append(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(2),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::util::CharArrayBuffer::append(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, jint a1, jint a2)
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(3),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::apache::http::util::CharArrayBuffer::append(local_ref< org::apache::http::util::CharArrayBuffer > const &a0)
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(4),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::util::CharArrayBuffer::append(jchar a0)
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(5),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::util::CharArrayBuffer::append(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(6),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::apache::http::util::CharArrayBuffer::append(local_ref< org::apache::http::util::ByteArrayBuffer > const &a0, jint a1, jint a2)
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(7),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::apache::http::util::CharArrayBuffer::append(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(8),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::util::CharArrayBuffer::clear()
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(9),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject());
}

local_ref< array<jchar,1> > org::apache::http::util::CharArrayBuffer::toCharArray()
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(10),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< array<jchar,1> >
	>(get_jobject());
}

jchar org::apache::http::util::CharArrayBuffer::charAt(jint a0)
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(11),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(11), 
		jchar
	>(get_jobject(), a0);
}

local_ref< array<jchar,1> > org::apache::http::util::CharArrayBuffer::buffer()
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(12),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< array<jchar,1> >
	>(get_jobject());
}

jint org::apache::http::util::CharArrayBuffer::capacity()
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(13),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(13), 
		jint
	>(get_jobject());
}

jint org::apache::http::util::CharArrayBuffer::length()
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(14),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(14), 
		jint
	>(get_jobject());
}

void org::apache::http::util::CharArrayBuffer::ensureCapacity(jint a0)
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(15),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::util::CharArrayBuffer::setLength(jint a0)
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(16),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0);
}

jboolean org::apache::http::util::CharArrayBuffer::isEmpty()
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(17),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(17), 
		jboolean
	>(get_jobject());
}

jboolean org::apache::http::util::CharArrayBuffer::isFull()
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(18),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(18), 
		jboolean
	>(get_jobject());
}

jint org::apache::http::util::CharArrayBuffer::indexOf(jint a0, jint a1, jint a2)
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(19),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(19), 
		jint
	>(get_jobject(), a0, a1, a2);
}

jint org::apache::http::util::CharArrayBuffer::indexOf(jint a0)
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(20),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(20), 
		jint
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::apache::http::util::CharArrayBuffer::substring(jint a0, jint a1)
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(21),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > org::apache::http::util::CharArrayBuffer::substringTrimmed(jint a0, jint a1)
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(22),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > org::apache::http::util::CharArrayBuffer::toString()
{
	return call_method<
		org::apache::http::util::CharArrayBuffer::J2CPP_CLASS_NAME,
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_NAME(23),
		org::apache::http::util::CharArrayBuffer::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::util::CharArrayBuffer,"org/apache/http/util/CharArrayBuffer")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,1,"append","([CII)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,2,"append","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,3,"append","(Lorg/apache/http/util/CharArrayBuffer;II)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,4,"append","(Lorg/apache/http/util/CharArrayBuffer;)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,5,"append","(C)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,6,"append","([BII)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,7,"append","(Lorg/apache/http/util/ByteArrayBuffer;II)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,8,"append","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,9,"clear","()V")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,10,"toCharArray","()[C")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,11,"charAt","(I)C")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,12,"buffer","()[C")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,13,"capacity","()I")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,14,"length","()I")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,15,"ensureCapacity","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,16,"setLength","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,17,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,18,"isFull","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,19,"indexOf","(III)I")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,20,"indexOf","(I)I")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,21,"substring","(II)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,22,"substringTrimmed","(II)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::util::CharArrayBuffer,23,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_UTIL_CHARARRAYBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
