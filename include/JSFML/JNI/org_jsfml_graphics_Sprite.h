/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jsfml_graphics_Sprite */

#ifndef _Included_org_jsfml_graphics_Sprite
#define _Included_org_jsfml_graphics_Sprite
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_Sprite_nativeCreate
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    nativeSetExPtr
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Sprite_nativeSetExPtr
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    nativeDelete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Sprite_nativeDelete
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    nativeSetTexture
 * Signature: (Lorg/jsfml/graphics/Texture;Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Sprite_nativeSetTexture
  (JNIEnv *, jobject, jobject, jboolean);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    nativeSetTextureRect
 * Signature: (Ljava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Sprite_nativeSetTextureRect
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    nativeSetColor
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Sprite_nativeSetColor
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    nativeGetLocalBounds
 * Signature: (Ljava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Sprite_nativeGetLocalBounds
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    nativeGetGlobalBounds
 * Signature: (Ljava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Sprite_nativeGetGlobalBounds
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
