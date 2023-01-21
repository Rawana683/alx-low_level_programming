#ifndef RO
#define RO
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct prints
{
		char *notation;
		void (*print_dType)(va_list argptr);
} prints_t;
char _putchar(char c);
void print_char(va_list argptr);
void print_int(va_list argptr);
void print_float(va_list argptr);
void print_string(va_list argptr);
#endif 
