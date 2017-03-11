/*
 **************************************************************************
 *                                                                        *
 *                    Hash Function Algorithms Library                    *
 *                                                                        *
 *                                                                        *
 **************************************************************************
*/



#ifndef __HASHFUNC__H__
#define __HASHFUNC__H__


#include <stdio.h>


typedef unsigned int (*hash_function)(char*, unsigned int len);


unsigned int RSHash  (char* str, unsigned int len);
unsigned int JSHash  (char* str, unsigned int len);
unsigned int PJWHash (char* str, unsigned int len);
unsigned int ELFHash (char* str, unsigned int len);
unsigned int BKDRHash(char* str, unsigned int len);
unsigned int SDBMHash(char* str, unsigned int len);
unsigned int DJBHash (char* str, unsigned int len);
unsigned int DEKHash (char* str, unsigned int len);
unsigned int BPHash  (char* str, unsigned int len);
unsigned int FNVHash (char* str, unsigned int len);
unsigned int APHash  (char* str, unsigned int len);


#endif // __HASHFUNC__H__
