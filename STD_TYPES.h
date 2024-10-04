
/*=================================================================================*/
/*  File        : BIT_MATH.h                                                       */
/*  Description : This file includes BIT_MATH macros for Atmega32                  */
/*  Author      : Mustafa khaled. Embedded SW Engineer                             */   
/*  Date        : 10/6/2024                                                        */
/*  mail        : mustafaelkhokhy@gmil.com                                         */
/*=================================================================================*/

/* File Gaurd by ifndef & endif */
#ifndef STD_TYPES_H
#define STD_TYPES_H

typedef unsigned char       u8  ;        // 1 Byte - 255 Bit
typedef unsigned short int  u16 ;       // 2 Byte 
typedef unsigned long int   u32 ;       // 4 Byte
typedef signed char         s8  ;        // 1 Byte
typedef signed short int    s16 ;       // 2 Byte
typedef signed long int     s32 ;       // 4 Byte
typedef float               f32 ;       // 4 Byte
typedef double              f64 ;       // 8 Byte


#define     NOT_OK          0
#define     OK              1

#endif
