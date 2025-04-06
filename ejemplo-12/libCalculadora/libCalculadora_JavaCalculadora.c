#include <jni.h>
#include "libCalculadora_JavaCalculadora.h"
/*
 * Class:     libCalculadora_JavaCalculadora
 * Method:    sumar
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_libCalculadora_JavaCalculadora_sumar
  (JNIEnv * env, jobject obj, jint num1, jint num2){
	int numero1;
	int numero2;
	numero1 = num1;
	numero2 = num2;
	return numero1 + numero2;
}

/*
 * Class:     libCalculadora_JavaCalculadora
 * Method:    restar
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_libCalculadora_JavaCalculadora_restar
  (JNIEnv * env, jobject obj, jint num1, jint num2){
	int numero1;
	int numero2;
	numero1 = num1;
	numero2 = num2;
	return numero1 - numero2;
}

/*
 * Class:     libCalculadora_JavaCalculadora
 * Method:    multiplicar
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_libCalculadora_JavaCalculadora_multiplicar
  (JNIEnv * env, jobject obj, jint num1, jint num2){
	int numero1;
	int numero2;
	numero1 = num1;
	numero2 = num2;
	return numero1 * numero2;
}

/*
 * Class:     libCalculadora_JavaCalculadora
 * Method:    dividir
 * Signature: (II)F
 */
JNIEXPORT jfloat JNICALL Java_libCalculadora_JavaCalculadora_dividir
  (JNIEnv * env, jobject obj, jint num1, jint num2){
	int numero1;
	int numero2;
	numero1 = num1;
	numero2 = num2;
	return (float) numero1 / numero2;
}
