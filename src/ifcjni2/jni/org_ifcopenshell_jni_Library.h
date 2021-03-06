/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_ifcopenshell_jni_Library */

#ifndef _Included_org_ifcopenshell_jni_Library
#define _Included_org_ifcopenshell_jni_Library
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_ifcopenshell_jni_Library
 * Method:    setIfcData
 * Signature: ([B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_ifcopenshell_jni_Library_setIfcData
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     org_ifcopenshell_jni_Library
 * Method:    setIfcPath
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_ifcopenshell_jni_Library_setIfcPath
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_ifcopenshell_jni_Library
 * Method:    getIfcGeometry
 * Signature: ()Lorg/ifcopenshell/model/IfcGeometryObject;
 */
JNIEXPORT jobject JNICALL Java_org_ifcopenshell_jni_Library_getIfcGeometry
  (JNIEnv *, jobject);

/*
 * Class:     org_ifcopenshell_jni_Library
 * Method:    getObject
 * Signature: (I)Lorg/ifcopenshell/model/IfcObject;
 */
JNIEXPORT jobject JNICALL Java_org_ifcopenshell_jni_Library_getObject
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_ifcopenshell_jni_Library
 * Method:    Cleanup
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_ifcopenshell_jni_Library_Cleanup
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
