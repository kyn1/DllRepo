#pragma once
#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllexport)
#endif

extern "C" MATHLIBRARY_API int Multiply(int a, int b);