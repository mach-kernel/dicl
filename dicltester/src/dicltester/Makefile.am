NULL=

bin_PROGRAMS=dicltester

dicltester_SOURCES=			\
	main.c				\
	dicl_printf.c			\
	dicl_fprintf.c			\
	dicl_vsnprintf.c		\
	dicl_select.c			\
	dicl_setenv.c			\
	dicl_strtod.c			\
	dicl_strtoll.c			\
	$(NULL)

AM_CFLAGS=				\
	-pthread			\
	$(DICLTESTER_DEPS_CFLAGS)	\
	$(NULL)

dicltester_LDADD=			\
	$(DICLTESTER_DEPS_LIBS)		\
	-lpthread			\
	$(NULL)

CLEANFILES=				\
	.libs				\
	$(NULL)
