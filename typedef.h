/* date = July 5th 2023 8:31 am */

#ifndef TYPEDEF_H
#define TYPEDEF_H

typedef char			I8;
typedef short			I16;
typedef int				I32;
typedef long			I64;

typedef unsigned char	U8;
typedef unsigned short	U16;
typedef unsigned int	U32;
typedef unsigned long	U64;

typedef float			F32;
typedef double			F64;

typedef I8				B8;
typedef I16				B16;
typedef I32				B32;
typedef I64				B64;

#undef  NULL
#define NULL			(void*)0x00000000

#define true			1
#define false			0
#define __bool_true_false_are_defined true

#define EXIT_SUCCESS	0
#define EXIT_FAILURE	1

#ifdef _WIN32
#define DLL_EXPORT		__declspec(dllexport)
#define DLL_IMPORT		__declspec(dllimport)
#endif

#define GLOBAL			static
#define INTERNAL		static
#define LOCAL_PERSIST	static

#define STRUCT(name)			typedef struct name name; struct name
#define ENUM(name)				typedef enum name name; enum name
#define TUPLE(name, t0, t1)		typedef struct name { t0 a; t1 b; } name;


#endif //TYPEDEF_H
