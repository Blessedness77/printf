#ifndef MAIN_H
#define MAIN_H

#include "unistd.h"
#include "stdarg.h"

int _putchar(char);
int print_str(const char *);
int _printf(const char *, ...);
int format_handle(const char *, va_list);
int print_num(int);

#endif /* MAIN_H */
