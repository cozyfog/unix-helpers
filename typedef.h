/* date = July 5th 2023 8:31 am */

#ifndef TYPEDEF_H
#define TYPEDEF_H

#include <array>
#include <string>
#include <vector>
#include <stdint.h>
#include <stdbool.h>

using std::array;
using std::string;
using std::vector;

extern "C" {
	typedef int8_t         i8;
	typedef int16_t        i16;
	typedef int32_t        i32;
	typedef int64_t        i64;
	
	typedef uint8_t        u8;
	typedef uint16_t       u16;
	typedef uint32_t       u32;
	typedef uint64_t       u64;
	
	typedef float          f32;
	typedef double         f64;
}

#define function         static
#define local_persist    static
#define global           static

struct Vec2 {
	Vec2(f32 _x, f32 _y) : x(_x), y(_y) {};
	
	f32 x;
	f32 y;
};

struct Vec3 {
	Vec3(f32 _x, f32 _y, f32 _z) : x(_x), y(_y), z(_z) {};
	
	f32 x;
	f32 y;
	f32 z;
};

#endif //TYPEDEF_H
