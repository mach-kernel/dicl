#ifndef LIBDICL_STDLIB_H
#define LIBDICL_STDLIB_H

#if defined(__GNUC__)
#include_next <stdlib.h>
#else
#include "/usr/include/stdlib.h"
#endif

#if defined(__cplusplus)
extern "C" {
#endif

#undef strtod
#define strtod ld_strtod
extern double ld_strtod(const char *, char **);

#undef strtold
#define strtold ld_strtold
extern long double ld_strtold(const char *, char **);

#undef strtol
#define strtol ld_strtol
extern long int ld_strtol(const char *, char **, int );

#undef strtoll
#define strtoll ld_strtoll
extern long long int ld_strtoll(const char *, char **, int );

#undef strtoul
#define strtoul ld_strtoul
extern unsigned long int ld_strtoul(const char *, char **, int );

#undef strtoull
#define strtoull ld_strtoull
extern unsigned long long int ld_strtoull(const char *, char **, int );

/* Extra things not in Irix libc */
int setenv(const char *name, const char*value, int overwrite);
int unsetenv(const char *name);

const char *getprogname(void);
void setprogname(const char *progname);

char *mkdtemp(char *ftemplate);

void qsort_r(void *, size_t, size_t,
	     int(*)(const void*,const void*, void*),
	     void *);

#if defined(__cplusplus)
}
namespace std {
  double ld_strtod(const char *, char **);
  long double ld_strtold(const char *, char **);
  long int ld_strtol(const char *, char **, int );
  long long int ld_strtoll(const char *, char **, int );
  unsigned long int ld_strtoul(const char *, char **, int );
  unsigned long long int ld_strtoull(const char *, char **, int );
}
#endif

#endif
