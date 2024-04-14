GCC= gcc
FLAGS= -Wall -Werror -Wextra
INCLUDE= libft.a
G-F= ${GCC} ${FLAGS}
MOVER= mv
CARPETA= main

todo: isalpha isalmun isdigit isprint strlen memset bzero memcpy memmove strlcpy strlcat toupper tolower strchr strrchr strncmp memchr memcmp strnstr atoi calloc strdup substr strjoin strtrim split itoa strmapi striteri putchar putstr putendl putnbr
	@echo "Copilo todo los test correctamente!!"	

isalpha:
	${G-F} test1_isalpha.c ${INCLUDE} -o test1_isalpha.o
	${G-F} test2_isalpha.c ${INCLUDE} -o test2_isalpha.o

isdigit:
	${G-F} test1_isdigit.c ${INCLUDE} -o test1_isdigit.o
	${G-F} test2_isdigit.c ${INCLUDE} -o test2_isdigit.o

isalmun:
	${G-F} test1_isalnum.c ${INCLUDE} -o test1_isalnum.o
	${G-F} test2_isalnum.c ${INCLUDE} -o test2_isalnum.o

isprint:
	${G-F} test1_isprint.c ${INCLUDE} -o test1_isprint.o
	${G-F} test2_isprint.c ${INCLUDE} -o test2_isprint.o

strlen:
	${G-F} test1_strlen.c ${INCLUDE} -o test1_strlen.o

memset:
	${G-F} test1_memset.c ${INCLUDE} -o test1_memset.o
	${G-F} test2_memset.c ${INCLUDE} -o test2_memset.o

bzero:
	${G-F} test1_bzero.c ${INCLUDE} -o test1_bzero.o

memcpy:
	${G-F} test1_memcpy.c ${INCLUDE} -o test1_memcpy.o

memmove:
	${G-F} test1_memmove.c ${INCLUDE} -o test1_memmove.o

strlcpy:
	${G-F} test1_strlcpy.c ${INCLUDE} -o test1_strlcpy.o

strlcat:
	${G-F} test1_strlcat.c ${INCLUDE} -o test1_strlcat.o

toupper:
	${G-F} test1_toupper.c ${INCLUDE} -o test1_toupper.o
	${G-F} test2_toupper.c ${INCLUDE} -o test2_toupper.o

tolower:
	${G-F} test1_tolower.c ${INCLUDE} -o test1_tolower.o
	${G-F} test2_tolower.c ${INCLUDE} -o test2_tolower.o

strchr:
	${G-F} test1_strchr.c ${INCLUDE} -o test1_strchr.o

strrchr:
	${G-F} test1_strrchr.c ${INCLUDE} -o test1_strrchr.o

strncmp:
	${G-F} test1_strncmp.c ${INCLUDE} -o test1_strncmp.o

memchr:
	${G-F} test1_memchr.c ${INCLUDE} -o test1_memchr.o

memcmp:
	${G-F} test1_memcmp.c ${INCLUDE} -o test1_memcmp.o

strnstr:
	${G-F} test1_strnstr.c ${INCLUDE} -o test1_strnstr.o

atoi:
	${G-F} test1_atoi.c ${INCLUDE} -o test1_atoi.o

calloc:
	 ${G-F} test1_calloc.c ${INCLUDE} -o test1_calloc.o

strdup:
	 ${G-F} test1_strdup.c ${INCLUDE} -o test1_strdup.o

substr:
	 ${G-F} test1_substr.c ${INCLUDE} -o test1_substr.o

strjoin:
	 ${G-F} test1_strjoin.c ${INCLUDE} -o test1_strjoin.o

strtrim:
	 ${G-F} test1_strtrim.c ${INCLUDE} -o test1_strtrim.o

split:
	 ${G-F} test1_split.c ${INCLUDE} -o test1_split.o

itoa:
	 ${G-F} test1_itoa.c ${INCLUDE} -o test1_itoa.o

strmapi:
	 ${G-F} test1_strmapi.c ${INCLUDE} -o test1_strmapi.o

striteri:
	 ${G-F} test1_striteri.c ${INCLUDE} -o test1_striteri.o

putchar:
	${G-F} test1_putchar_fd.c ${INCLUDE} -o test1_putchar_fd.o

putstr:
	${G-F} test1_putstr_fd.c ${INCLUDE} -o test1_putstr_fd.o

putendl:
	${G-F} test1_putendl_fd.c ${INCLUDE} -o test1_putendl_fd.o

putnbr:
	${G-F} test1_putnbr_fd.c ${INCLUDE} -o test1_putnbr_fd.o


mover:
	${MOVER} *.o ${CARPETA} 

clean: *.o
	rm *.o

clean_main:
	rm ${CARPETA}/*.o
