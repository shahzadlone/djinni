// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from varnames.djinni

#include "NativeVarnameInterface.hpp"  // my header
#include "NativeVarnameRecord.hpp"

namespace djinni_generated {

NativeVarnameInterface::NativeVarnameInterface() : ::djinni::JniInterface<::testsuite::VarnameInterface, NativeVarnameInterface>("com/dropbox/djinni/test/VarnameInterface$CppProxy") {}

NativeVarnameInterface::~NativeVarnameInterface() = default;


CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_VarnameInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::testsuite::VarnameInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_VarnameInterface_00024CppProxy_native_1Rmethod(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_r)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::VarnameInterface>(nativeRef);
        auto r = ref->_rmethod_(::djinni_generated::NativeVarnameRecord::toCpp(jniEnv, j_r));
        return ::djinni::release(::djinni_generated::NativeVarnameRecord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_VarnameInterface_00024CppProxy_native_1Imethod(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_i)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::VarnameInterface>(nativeRef);
        auto r = ref->_imethod_(::djinni_generated::NativeVarnameInterface::toCpp(jniEnv, j_i));
        return ::djinni::release(::djinni_generated::NativeVarnameInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
