# 1 "D:\\arduino_prg\\TFT\\Arduino_Demo_UNO-Mega2560\\Example05-ShowBMP\\ShowBMP\\build\\sketch\\ShowBMP.ino.cpp"
# 1 "D:\\arduino_prg\\TFT\\Arduino_Demo_UNO-Mega2560\\Example05-ShowBMP\\ShowBMP//"
# 1 "<command-line>"
# 1 "D:\\arduino_prg\\TFT\\Arduino_Demo_UNO-Mega2560\\Example05-ShowBMP\\ShowBMP\\build\\sketch\\ShowBMP.ino.cpp"
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdlib.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2007 Joerg Wunsch

   Portions of documentation Copyright (c) 1990, 1991, 1993, 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.

  $Id$
*/
# 47 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdlib.h" 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 212 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
typedef unsigned int size_t;
# 238 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 279 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* On BSD/386 1.1, at least, machine/ansi.h defines _BSD_WCHAR_T_
   instead of _WCHAR_T_, and _BSD_RUNE_T_ (which, unlike the other
   symbols in the _FOO_T_ family, stays defined even after its
   corresponding type is defined).  If we define wchar_t, then we
   must undef _WCHAR_T_; for BSD/386 1.1 (and perhaps others), if
   we undef _WCHAR_T_, then we must also define rune_t, since 
   headers like runetype.h assume that if machine/ansi.h is included,
   and _BSD_WCHAR_T_ is not defined, then rune_t is available.
   machine/ansi.h says, "Note that _WCHAR_T_ and _RUNE_T_ must be of
   the same type." */
# 306 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* FreeBSD 5 can't be handled well using "traditional" logic above
   since it no longer defines _BSD_RUNE_T_ yet still desires to export
   rune_t in some cases... */
# 358 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 48 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdlib.h" 2 3






extern "C" {


/** \file */

/** \defgroup avr_stdlib <stdlib.h>: General utilities
    \code #include <stdlib.h> \endcode

    This file declares some basic C macros and functions as
    defined by the ISO standard, plus some AVR-specific extensions.
*/

/*@{*/
/** Result type for function div(). */
typedef struct {
 int quot; /**< The Quotient. */
 int rem; /**< The Remainder. */
} div_t;

/** Result type for function ldiv(). */
typedef struct {
 long quot; /**< The Quotient. */
 long rem; /**< The Remainder. */
} ldiv_t;

/** Comparision function type for qsort(), just for convenience. */
typedef int (*__compar_fn_t)(const void *, const void *);
# 110 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdlib.h" 3
/** The abort() function causes abnormal program termination to occur.
    This realization disables interrupts and jumps to _exit() function
    with argument equal to 1. In the limited AVR environment, execution is
    effectively halted by entering an infinite loop. */
extern void abort(void) __attribute__((__noreturn__));

/** The abs() function computes the absolute value of the integer \c i.
   \note The abs() and labs() functions are builtins of gcc.
*/
extern int abs(int __i) __attribute__((__const__));




/** The labs() function computes the absolute value of the long integer
    \c i.
   \note The abs() and labs() functions are builtins of gcc.
*/
extern long labs(long __i) __attribute__((__const__));




/**
     The bsearch() function searches an array of \c nmemb objects, the
     initial member of which is pointed to by \c base, for a member
     that matches the object pointed to by \c key.  The size of each
     member of the array is specified by \c size.

     The contents of the array should be in ascending sorted order
     according to the comparison function referenced by \c compar.
     The \c compar routine is expected to have two arguments which
     point to the key object and to an array member, in that order,
     and should return an integer less than, equal to, or greater than
     zero if the key object is found, respectively, to be less than,
     to match, or be greater than the array member.

     The bsearch() function returns a pointer to a matching member of
     the array, or a null pointer if no match is found.  If two
     members compare as equal, which member is matched is unspecified.
*/
extern void *bsearch(const void *__key, const void *__base, size_t __nmemb,
       size_t __size, int (*__compar)(const void *, const void *));

/* __divmodhi4 and __divmodsi4 from libgcc.a */
/**
     The div() function computes the value \c num/denom and returns
     the quotient and remainder in a structure named \c div_t that
     contains two int members named \c quot and \c rem.
*/
extern div_t div(int __num, int __denom) __asm__("__divmodhi4") __attribute__((__const__));
/**
     The ldiv() function computes the value \c num/denom and returns
     the quotient and remainder in a structure named \c ldiv_t that
     contains two long integer members named \c quot and \c rem.
*/
extern ldiv_t ldiv(long __num, long __denom) __asm__("__divmodsi4") __attribute__((__const__));

/**
     The qsort() function is a modified partition-exchange sort, or
     quicksort.

     The qsort() function sorts an array of \c nmemb objects, the
     initial member of which is pointed to by \c base.  The size of
     each object is specified by \c size.  The contents of the array
     base are sorted in ascending order according to a comparison
     function pointed to by \c compar, which requires two arguments
     pointing to the objects being compared.

     The comparison function must return an integer less than, equal
     to, or greater than zero if the first argument is considered to
     be respectively less than, equal to, or greater than the second.
*/
extern void qsort(void *__base, size_t __nmemb, size_t __size,
    __compar_fn_t __compar);

/**
    The strtol() function converts the string in \c nptr to a long
    value.  The conversion is done according to the given base, which
    must be between 2 and 36 inclusive, or be the special value 0.

    The string may begin with an arbitrary amount of white space (as
    determined by isspace()) followed by a single optional \c '+' or \c '-'
    sign.  If \c base is zero or 16, the string may then include a
    \c "0x" prefix, and the number will be read in base 16; otherwise,
    a zero base is taken as 10 (decimal) unless the next character is
    \c '0', in which case it is taken as 8 (octal).

    The remainder of the string is converted to a long value in the
    obvious manner, stopping at the first character which is not a
    valid digit in the given base.  (In bases above 10, the letter \c 'A'
    in either upper or lower case represents 10, \c 'B' represents 11,
    and so forth, with \c 'Z' representing 35.)

    If \c endptr is not NULL, strtol() stores the address of the first
    invalid character in \c *endptr.  If there were no digits at all,
    however, strtol() stores the original value of \c nptr in \c
    *endptr.  (Thus, if \c *nptr is not \c '\\0' but \c **endptr is \c '\\0'
    on return, the entire string was valid.)

    The strtol() function returns the result of the conversion, unless
    the value would underflow or overflow.  If no conversion could be
    performed, 0 is returned.  If an overflow or underflow occurs, \c
    errno is set to \ref avr_errno "ERANGE" and the function return value
    is clamped to \c LONG_MIN or \c LONG_MAX, respectively.
*/
extern long strtol(const char *__nptr, char **__endptr, int __base);

/**
    The strtoul() function converts the string in \c nptr to an
    unsigned long value.  The conversion is done according to the
    given base, which must be between 2 and 36 inclusive, or be the
    special value 0.

    The string may begin with an arbitrary amount of white space (as
    determined by isspace()) followed by a single optional \c '+' or \c '-'
    sign.  If \c base is zero or 16, the string may then include a
    \c "0x" prefix, and the number will be read in base 16; otherwise,
    a zero base is taken as 10 (decimal) unless the next character is
    \c '0', in which case it is taken as 8 (octal).

    The remainder of the string is converted to an unsigned long value
    in the obvious manner, stopping at the first character which is
    not a valid digit in the given base.  (In bases above 10, the
    letter \c 'A' in either upper or lower case represents 10, \c 'B'
    represents 11, and so forth, with \c 'Z' representing 35.)

    If \c endptr is not NULL, strtoul() stores the address of the first
    invalid character in \c *endptr.  If there were no digits at all,
    however, strtoul() stores the original value of \c nptr in \c
    *endptr.  (Thus, if \c *nptr is not \c '\\0' but \c **endptr is \c '\\0'
    on return, the entire string was valid.)

    The strtoul() function return either the result of the conversion
    or, if there was a leading minus sign, the negation of the result
    of the conversion, unless the original (non-negated) value would
    overflow; in the latter case, strtoul() returns ULONG_MAX, and \c
    errno is set to \ref avr_errno "ERANGE".  If no conversion could 
    be performed, 0 is returned.
*/
extern unsigned long strtoul(const char *__nptr, char **__endptr, int __base);

/**
    The atol() function converts the initial portion of the string
    pointed to by \p s to long integer representation. In contrast to

        \code strtol(s, (char **)NULL, 10); \endcode

    this function does not detect overflow (\c errno is not changed and
    the result value is not predictable), uses smaller memory (flash and
    stack) and works more quickly.
*/
extern long atol(const char *__s) __attribute__((__pure__));

/**
    The atoi() function converts the initial portion of the string
    pointed to by \p s to integer representation. In contrast to

        \code (int)strtol(s, (char **)NULL, 10); \endcode

    this function does not detect overflow (\c errno is not changed and
    the result value is not predictable), uses smaller memory (flash and
    stack) and works more quickly.
*/
extern int atoi(const char *__s) __attribute__((__pure__));

/**
   The exit() function terminates the application.  Since there is no
   environment to return to, \c status is ignored, and code execution
   will eventually reach an infinite loop, thereby effectively halting
   all code processing.  Before entering the infinite loop, interrupts
   are globally disabled.

   In a C++ context, global destructors will be called before halting
   execution.
*/
extern void exit(int __status) __attribute__((__noreturn__));

/**
   The malloc() function allocates \c size bytes of memory.
   If malloc() fails, a NULL pointer is returned.

   Note that malloc() does \e not initialize the returned memory to
   zero bytes.

   See the chapter about \ref malloc "malloc() usage" for implementation
   details.
*/
extern void *malloc(size_t __size) __attribute__((__malloc__));

/**
   The free() function causes the allocated memory referenced by \c
   ptr to be made available for future allocations.  If \c ptr is
   NULL, no action occurs.
*/
extern void free(void *__ptr);

/**
   \c malloc() \ref malloc_tunables "tunable".
*/
extern size_t __malloc_margin;

/**
   \c malloc() \ref malloc_tunables "tunable".
*/
extern char *__malloc_heap_start;

/**
   \c malloc() \ref malloc_tunables "tunable".
*/
extern char *__malloc_heap_end;

/**
   Allocate \c nele elements of \c size each.  Identical to calling
   \c malloc() using <tt>nele * size</tt> as argument, except the
   allocated memory will be cleared to zero.
*/
extern void *calloc(size_t __nele, size_t __size) __attribute__((__malloc__));

/**
   The realloc() function tries to change the size of the region
   allocated at \c ptr to the new \c size value.  It returns a
   pointer to the new region.  The returned pointer might be the
   same as the old pointer, or a pointer to a completely different
   region.

   The contents of the returned region up to either the old or the new
   size value (whatever is less) will be identical to the contents of
   the old region, even in case a new region had to be allocated.

   It is acceptable to pass \c ptr as NULL, in which case realloc()
   will behave identical to malloc().

   If the new memory cannot be allocated, realloc() returns NULL, and
   the region at \c ptr will not be changed.
*/
extern void *realloc(void *__ptr, size_t __size) __attribute__((__malloc__));

extern double strtod(const char *__nptr, char **__endptr);

extern double atof(const char *__nptr);

/** Highest number that can be generated by rand(). */


/**
     The rand() function computes a sequence of pseudo-random integers in the
     range of 0 to \c RAND_MAX (as defined by the header file <stdlib.h>).

     The srand() function sets its argument \c seed as the seed for a new
     sequence of pseudo-random numbers to be returned by rand().  These
     sequences are repeatable by calling srand() with the same seed value.

     If no seed value is provided, the functions are automatically seeded with
     a value of 1.

     In compliance with the C standard, these functions operate on
     \c int arguments.  Since the underlying algorithm already uses
     32-bit calculations, this causes a loss of precision.  See
     \c random() for an alternate set of functions that retains full
     32-bit precision.
*/
extern int rand(void);
/**
   Pseudo-random number generator seeding; see rand().
*/
extern void srand(unsigned int __seed);

/**
   Variant of rand() that stores the context in the user-supplied
   variable located at \c ctx instead of a static library variable
   so the function becomes re-entrant.
*/
extern int rand_r(unsigned long *__ctx);
/*@}*/

/*@{*/
/** \name Non-standard (i.e. non-ISO C) functions.
 \ingroup avr_stdlib
*/
/**
   \brief Convert an integer to a string.

   The function itoa() converts the integer value from \c val into an
   ASCII representation that will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   \note The minimal size of the buffer \c s depends on the choice of
   radix. For example, if the radix is 2 (binary), you need to supply a buffer
   with a minimal length of 8 * sizeof (int) + 1 characters, i.e. one
   character for each bit plus one for the string terminator. Using a larger
   radix will require a smaller minimal buffer size.

   \warning If the buffer is too small, you risk a buffer overflow.

   Conversion is done using the \c radix as base, which may be a
   number between 2 (binary conversion) and up to 36.  If \c radix
   is greater than 10, the next digit after \c '9' will be the letter
   \c 'a'.
    
    If radix is 10 and val is negative, a minus sign will be prepended.

   The itoa() function returns the pointer passed as \c s.
*/



extern __inline__ __attribute__((__gnu_inline__))
char *itoa (int __val, char *__s, int __radix)
{
    if (!__builtin_constant_p (__radix)) {
 extern char *__itoa (int, char *, int);
 return __itoa (__val, __s, __radix);
    } else if (__radix < 2 || __radix > 36) {
 *__s = 0;
 return __s;
    } else {
 extern char *__itoa_ncheck (int, char *, unsigned char);
 return __itoa_ncheck (__val, __s, __radix);
    }
}


/**
 \ingroup avr_stdlib
 
   \brief Convert a long integer to a string.

   The function ltoa() converts the long integer value from \c val into an
   ASCII representation that will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   \note The minimal size of the buffer \c s depends on the choice of
   radix. For example, if the radix is 2 (binary), you need to supply a buffer
   with a minimal length of 8 * sizeof (long int) + 1 characters, i.e. one
   character for each bit plus one for the string terminator. Using a larger
   radix will require a smaller minimal buffer size.

   \warning If the buffer is too small, you risk a buffer overflow.

   Conversion is done using the \c radix as base, which may be a
   number between 2 (binary conversion) and up to 36.  If \c radix
   is greater than 10, the next digit after \c '9' will be the letter
   \c 'a'.

   If radix is 10 and val is negative, a minus sign will be prepended.

   The ltoa() function returns the pointer passed as \c s.
*/



extern __inline__ __attribute__((__gnu_inline__))
char *ltoa (long __val, char *__s, int __radix)
{
    if (!__builtin_constant_p (__radix)) {
 extern char *__ltoa (long, char *, int);
 return __ltoa (__val, __s, __radix);
    } else if (__radix < 2 || __radix > 36) {
 *__s = 0;
 return __s;
    } else {
 extern char *__ltoa_ncheck (long, char *, unsigned char);
 return __ltoa_ncheck (__val, __s, __radix);
    }
}


/**
 \ingroup avr_stdlib

   \brief Convert an unsigned integer to a string.

   The function utoa() converts the unsigned integer value from \c val into an
   ASCII representation that will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   \note The minimal size of the buffer \c s depends on the choice of
   radix. For example, if the radix is 2 (binary), you need to supply a buffer
   with a minimal length of 8 * sizeof (unsigned int) + 1 characters, i.e. one
   character for each bit plus one for the string terminator. Using a larger
   radix will require a smaller minimal buffer size.

   \warning If the buffer is too small, you risk a buffer overflow.

   Conversion is done using the \c radix as base, which may be a
   number between 2 (binary conversion) and up to 36.  If \c radix
   is greater than 10, the next digit after \c '9' will be the letter
   \c 'a'.

   The utoa() function returns the pointer passed as \c s.
*/



extern __inline__ __attribute__((__gnu_inline__))
char *utoa (unsigned int __val, char *__s, int __radix)
{
    if (!__builtin_constant_p (__radix)) {
 extern char *__utoa (unsigned int, char *, int);
 return __utoa (__val, __s, __radix);
    } else if (__radix < 2 || __radix > 36) {
 *__s = 0;
 return __s;
    } else {
 extern char *__utoa_ncheck (unsigned int, char *, unsigned char);
 return __utoa_ncheck (__val, __s, __radix);
    }
}


/**
 \ingroup avr_stdlib
   \brief Convert an unsigned long integer to a string.

   The function ultoa() converts the unsigned long integer value from
   \c val into an ASCII representation that will be stored under \c s.
   The caller is responsible for providing sufficient storage in \c s.

   \note The minimal size of the buffer \c s depends on the choice of
   radix. For example, if the radix is 2 (binary), you need to supply a buffer
   with a minimal length of 8 * sizeof (unsigned long int) + 1 characters,
   i.e. one character for each bit plus one for the string terminator. Using a
   larger radix will require a smaller minimal buffer size.

   \warning If the buffer is too small, you risk a buffer overflow.

   Conversion is done using the \c radix as base, which may be a
   number between 2 (binary conversion) and up to 36.  If \c radix
   is greater than 10, the next digit after \c '9' will be the letter
   \c 'a'.

   The ultoa() function returns the pointer passed as \c s.
*/



extern __inline__ __attribute__((__gnu_inline__))
char *ultoa (unsigned long __val, char *__s, int __radix)
{
    if (!__builtin_constant_p (__radix)) {
 extern char *__ultoa (unsigned long, char *, int);
 return __ultoa (__val, __s, __radix);
    } else if (__radix < 2 || __radix > 36) {
 *__s = 0;
 return __s;
    } else {
 extern char *__ultoa_ncheck (unsigned long, char *, unsigned char);
 return __ultoa_ncheck (__val, __s, __radix);
    }
}


/**  \ingroup avr_stdlib
Highest number that can be generated by random(). */


/**
 \ingroup avr_stdlib
     The random() function computes a sequence of pseudo-random integers in the
     range of 0 to \c RANDOM_MAX (as defined by the header file <stdlib.h>).

     The srandom() function sets its argument \c seed as the seed for a new
     sequence of pseudo-random numbers to be returned by rand().  These
     sequences are repeatable by calling srandom() with the same seed value.

     If no seed value is provided, the functions are automatically seeded with
     a value of 1.
*/
extern long random(void);
/**
 \ingroup avr_stdlib
   Pseudo-random number generator seeding; see random().
*/
extern void srandom(unsigned long __seed);

/**
 \ingroup avr_stdlib
   Variant of random() that stores the context in the user-supplied
   variable located at \c ctx instead of a static library variable
   so the function becomes re-entrant.
*/
extern long random_r(unsigned long *__ctx);

/*@}*/

/*@{*/
/** \name Conversion functions for double arguments.
 \ingroup avr_stdlib
 Note that these functions are not located in the default library,
 <tt>libc.a</tt>, but in the mathematical library, <tt>libm.a</tt>.
 So when linking the application, the \c -lm option needs to be
 specified.
*/
/** \ingroup avr_stdlib
    Bit value that can be passed in \c flags to dtostre(). */

/** \ingroup avr_stdlib
    Bit value that can be passed in \c flags to dtostre(). */

/** \ingroup avr_stdlib
    Bit value that can be passed in \c flags to dtostre(). */




/**
   \ingroup avr_stdlib
   The dtostre() function converts the double value passed in \c val into
   an ASCII representation that will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   Conversion is done in the format \c "[-]d.ddde±dd" where there is
   one digit before the decimal-point character and the number of
   digits after it is equal to the precision \c prec; if the precision
   is zero, no decimal-point character appears.  If \c flags has the
   DTOSTRE_UPPERCASE bit set, the letter \c 'E' (rather than \c 'e' ) will be
   used to introduce the exponent.  The exponent always contains two
   digits; if the value is zero, the exponent is \c "00".

   If \c flags has the DTOSTRE_ALWAYS_SIGN bit set, a space character
   will be placed into the leading position for positive numbers.

   If \c flags has the DTOSTRE_PLUS_SIGN bit set, a plus sign will be
   used instead of a space character in this case.

   The dtostre() function returns the pointer to the converted string \c s.
*/
extern char *dtostre(double __val, char *__s, unsigned char __prec,
       unsigned char __flags);

/**
   \ingroup avr_stdlib
   The dtostrf() function converts the double value passed in \c val into
   an ASCII representationthat will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   Conversion is done in the format \c "[-]d.ddd".  The minimum field
   width of the output string (including the \c '.' and the possible
   sign for negative values) is given in \c width, and \c prec determines
   the number of digits after the decimal sign. \c width is signed value,
   negative for left adjustment.

   The dtostrf() function returns the pointer to the converted string \c s.
*/
extern char *dtostrf(double __val, signed char __width,
                     unsigned char __prec, char *__s);

/**
   \ingroup avr_stdlib
    Successful termination for exit(); evaluates to 0.
*/


/**
   \ingroup avr_stdlib
    Unsuccessful termination for exit(); evaluates to a non-zero value.
*/


/*@}*/






}
# 24 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stdbool.h" 1 3 4
/* Copyright (C) 1998-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.16  Boolean type and values  <stdbool.h>
 */
# 39 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stdbool.h" 3 4
/* Supporting <stdbool.h> in C++ is a GCC extension.  */







/* Signal that all the definitions are present.  */
# 25 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\string.h" 1 3
/* Copyright (c) 2002,2007 Marek Michalkiewicz
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   string.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
 */






# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 46 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\string.h" 2 3
# 56 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\string.h" 3
extern "C" {


/** \file */
/** \defgroup avr_string <string.h>: Strings
    \code #include <string.h> \endcode

    The string functions perform string operations on NULL terminated
    strings. 

    \note If the strings you are working on resident in program space (flash),
    you will need to use the string functions described in \ref avr_pgmspace. */


/** \ingroup avr_string

    This macro finds the first (least significant) bit set in the
    input value.

    This macro is very similar to the function ffs() except that
    it evaluates its argument at compile-time, so it should only
    be applied to compile-time constant expressions where it will
    reduce to a constant itself.
    Application of this macro to expressions that are not constant
    at compile-time is not recommended, and might result in a huge
    amount of code generated.

    \returns The _FFS() macro returns the position of the first
    (least significant) bit set in the word val, or 0 if no bits are set.
    The least significant bit is position 1.  Only 16 bits of argument
    are evaluted.
*/
# 111 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\string.h" 3
extern int ffs (int __val) __attribute__((__const__));
extern int ffsl (long __val) __attribute__((__const__));
extern int ffsll (long long __val) __attribute__((__const__));
extern void *memccpy(void *, const void *, int, size_t);
extern void *memchr(const void *, int, size_t) __attribute__((__pure__));
extern int memcmp(const void *, const void *, size_t) __attribute__((__pure__));
extern void *memcpy(void *, const void *, size_t);
extern void *memmem(const void *, size_t, const void *, size_t) __attribute__((__pure__));
extern void *memmove(void *, const void *, size_t);
extern void *memrchr(const void *, int, size_t) __attribute__((__pure__));
extern void *memset(void *, int, size_t);
extern char *strcat(char *, const char *);
extern char *strchr(const char *, int) __attribute__((__pure__));
extern char *strchrnul(const char *, int) __attribute__((__pure__));
extern int strcmp(const char *, const char *) __attribute__((__pure__));
extern char *strcpy(char *, const char *);
extern int strcasecmp(const char *, const char *) __attribute__((__pure__));
extern char *strcasestr(const char *, const char *) __attribute__((__pure__));
extern size_t strcspn(const char *__s, const char *__reject) __attribute__((__pure__));
extern char *strdup(const char *s1);
extern size_t strlcat(char *, const char *, size_t);
extern size_t strlcpy(char *, const char *, size_t);
extern size_t strlen(const char *) __attribute__((__pure__));
extern char *strlwr(char *);
extern char *strncat(char *, const char *, size_t);
extern int strncmp(const char *, const char *, size_t) __attribute__((__pure__));
extern char *strncpy(char *, const char *, size_t);
extern int strncasecmp(const char *, const char *, size_t) __attribute__((__pure__));
extern size_t strnlen(const char *, size_t) __attribute__((__pure__));
extern char *strpbrk(const char *__s, const char *__accept) __attribute__((__pure__));
extern char *strrchr(const char *, int) __attribute__((__pure__));
extern char *strrev(char *);
extern char *strsep(char **, const char *);
extern size_t strspn(const char *__s, const char *__accept) __attribute__((__pure__));
extern char *strstr(const char *, const char *) __attribute__((__pure__));
extern char *strtok(char *, const char *);
extern char *strtok_r(char *, const char *, char **);
extern char *strupr(char *);


}
# 26 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\math.h" 1 3
/* Copyright (c) 2002,2007-2009 Michael Stumpf

   Portions of documentation Copyright (c) 1990 - 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   math.h - mathematical functions

   Author : Michael Stumpf
            Michael.Stumpf@t-online.de

   __ATTR_CONST__ added by marekm@linux.org.pl for functions
   that "do not examine any values except their arguments, and have
   no effects except the return value", for better optimization by gcc.
 */




/** \file */
/** \defgroup avr_math <math.h>: Mathematics
    \code #include <math.h> \endcode

    This header file declares basic mathematics constants and
    functions.

    \par Notes:
    - In order to access the functions declared herein, it is usually
      also required to additionally link against the library \c libm.a.
      See also the related \ref faq_libm "FAQ entry".
    - Math functions do not raise exceptions and do not change the
      \c errno variable. Therefore the majority of them are declared
      with const attribute, for better optimization by GCC.	*/


/** \ingroup avr_math	*/
/*@{*/

/** The constant \a e.	*/


/** The logarithm of the \a e to base 2. */


/** The logarithm of the \a e to base 10. */


/** The natural logarithm of the 2.	*/


/** The natural logarithm of the 10.	*/


/** The constant \a pi.	*/


/** The constant \a pi/2.	*/


/** The constant \a pi/4.	*/


/** The constant \a 1/pi.	*/


/** The constant \a 2/pi.	*/


/** The constant \a 2/sqrt(pi).	*/


/** The square root of 2.	*/


/** The constant \a 1/sqrt(2).	*/


/** NAN constant.	*/


/** INFINITY constant.	*/
# 121 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\math.h" 3
extern "C" {


/**
    The cos() function returns the cosine of \a __x, measured in radians.
 */
extern double cos(double __x) __attribute__((__const__));


/**
    The sin() function returns the sine of \a __x, measured in radians.
 */
extern double sin(double __x) __attribute__((__const__));


/**
    The tan() function returns the tangent of \a __x, measured in radians.
 */
extern double tan(double __x) __attribute__((__const__));


/**
    The fabs() function computes the absolute value of a floating-point
    number \a __x.
 */
extern double fabs(double __x) __attribute__((__const__));


/**
    The function fmod() returns the floating-point remainder of <em>__x /
    __y</em>.
 */
extern double fmod(double __x, double __y) __attribute__((__const__));


/**
    The modf() function breaks the argument \a __x into integral and
    fractional parts, each of which has the same sign as the argument. 
    It stores the integral part as a double in the object pointed to by
    \a __iptr.

    The modf() function returns the signed fractional part of \a __x.

    \note This implementation skips writing by zero pointer.  However,
    the GCC 4.3 can replace this function with inline code that does not
    permit to use NULL address for the avoiding of storing.
 */
extern double modf(double __x, double *__iptr);

/** The alias for modf().
 */
extern float modff (float __x, float *__iptr);

/**
    The sqrt() function returns the non-negative square root of \a __x.
 */
extern double sqrt(double __x) __attribute__((__const__));


/**
    The cbrt() function returns the cube root of \a __x.
 */
extern double cbrt(double __x) __attribute__((__const__));


/**
    The hypot() function returns <em>sqrt(__x*__x + __y*__y)</em>. This
    is the length of the hypotenuse of a right triangle with sides of
    length \a __x and \a __y, or the  distance of the point (\a __x, \a
    __y) from the origin. Using this function  instead of the direct
    formula is wise, since the error is much smaller. No underflow with
    small \a __x and \a __y. No overflow if result is in range.
 */
extern double hypot (double __x, double __y) __attribute__((__const__));


/**
    The function square() returns <em>__x * __x</em>.

    \note This function does not belong to the C standard definition.
 */
extern double square(double __x) __attribute__((__const__));


/**
    The floor() function returns the largest integral value less than or
    equal to \a __x, expressed as a floating-point number.
 */
extern double floor(double __x) __attribute__((__const__));


/**
    The ceil() function returns the smallest integral value greater than
    or equal to \a __x, expressed as a floating-point number.
 */
extern double ceil(double __x) __attribute__((__const__));


/**
    The frexp() function breaks a floating-point number into a normalized
    fraction and an integral power of 2.  It stores the integer in the \c
    int object pointed to by \a __pexp.

    If \a __x is a normal float point number, the frexp() function
    returns the value \c v, such that \c v has a magnitude in the
    interval [1/2, 1) or zero, and \a __x equals \c v times 2 raised to
    the power \a __pexp. If \a __x is zero, both parts of the result are
    zero. If \a __x is not a finite number, the frexp() returns \a __x as
    is and stores 0 by \a __pexp.

    \note  This implementation permits a zero pointer as a directive to
    skip a storing the exponent.
 */
extern double frexp(double __x, int *__pexp);


/**
    The ldexp() function multiplies a floating-point number by an integral
    power of 2. It returns the value of \a __x times 2 raised to the power
    \a __exp.
 */
extern double ldexp(double __x, int __exp) __attribute__((__const__));


/**
    The exp() function returns the exponential value of \a __x.
 */
extern double exp(double __x) __attribute__((__const__));


/**
    The cosh() function returns the hyperbolic cosine of \a __x.
 */
extern double cosh(double __x) __attribute__((__const__));


/**
    The sinh() function returns the hyperbolic sine of \a __x.
 */
extern double sinh(double __x) __attribute__((__const__));


/**
    The tanh() function returns the hyperbolic tangent of \a __x.
 */
extern double tanh(double __x) __attribute__((__const__));


/**
    The acos() function computes the principal value of the arc cosine of
    \a __x.  The returned value is in the range [0, pi] radians. A domain
    error occurs for arguments not in the range [-1, +1].
 */
extern double acos(double __x) __attribute__((__const__));


/**
    The asin() function computes the principal value of the arc sine of
    \a __x.  The returned value is in the range [-pi/2, pi/2] radians. A
    domain error occurs for arguments not in the range [-1, +1].
 */
extern double asin(double __x) __attribute__((__const__));


/**
    The atan() function computes the principal value of the arc tangent
    of \a __x.  The returned value is in the range [-pi/2, pi/2] radians.
 */
extern double atan(double __x) __attribute__((__const__));


/**
    The atan2() function computes the principal value of the arc tangent
    of <em>__y / __x</em>, using the signs of both arguments to determine
    the quadrant of the return value.  The returned value is in the range
    [-pi, +pi] radians.
 */
extern double atan2(double __y, double __x) __attribute__((__const__));


/**
    The log() function returns the natural logarithm of argument \a __x.
 */
extern double log(double __x) __attribute__((__const__));


/**
    The log10() function returns the logarithm of argument \a __x to base 10.
 */
extern double log10(double __x) __attribute__((__const__));


/**
    The function pow() returns the value of \a __x to the exponent \a __y.
 */
extern double pow(double __x, double __y) __attribute__((__const__));


/**
    The function isnan() returns 1 if the argument \a __x represents a
    "not-a-number" (NaN) object, otherwise 0.
 */
extern int isnan(double __x) __attribute__((__const__));


/**
    The function isinf() returns 1 if the argument \a __x is positive
    infinity, -1 if \a __x is negative infinity, and 0 otherwise.

    \note The GCC 4.3 can replace this function with inline code that
    returns the 1 value for both infinities (gcc bug #35509).
 */
extern int isinf(double __x) __attribute__((__const__));


/**
    The isfinite() function returns a nonzero value if \a __x is finite:
    not plus or minus infinity, and not NaN.
 */
__attribute__((__const__)) static inline int isfinite (double __x)
{
    unsigned char __exp;
    __asm__ (
 "mov	%0, %C1		\n\t"
 "lsl	%0		\n\t"
 "mov	%0, %D1		\n\t"
 "rol	%0		"
 : "=r" (__exp)
 : "r" (__x) );
    return __exp != 0xff;
}


/**
    The copysign() function returns \a __x but with the sign of \a __y.
    They work even if \a __x or \a __y are NaN or zero.
*/
__attribute__((__const__)) static inline double copysign (double __x, double __y)
{
    __asm__ (
 "bst	%D2, 7	\n\t"
 "bld	%D0, 7	"
 : "=r" (__x)
 : "0" (__x), "r" (__y) );
    return __x;
}


/**
    The signbit() function returns a nonzero value if the value of \a __x
    has its sign bit set.  This is not the same as `\a __x < 0.0',
    because IEEE 754 floating point allows zero to be signed. The
    comparison `-0.0 < 0.0' is false, but `signbit (-0.0)' will return a
    nonzero value.
 */
extern int signbit (double __x) __attribute__((__const__));


/**
    The fdim() function returns <em>max(__x - __y, 0)</em>. If \a __x or
    \a __y or both are NaN, NaN is returned.
 */
extern double fdim (double __x, double __y) __attribute__((__const__));


/**
    The fma() function performs floating-point multiply-add. This is the
    operation <em>(__x * __y) + __z</em>, but the intermediate result is
    not rounded to the destination type.  This can sometimes improve the
    precision of a calculation.
 */
extern double fma (double __x, double __y, double __z) __attribute__((__const__));


/**
    The fmax() function returns the greater of the two values \a __x and
    \a __y. If an argument is NaN, the other argument is returned. If
    both arguments are NaN, NaN is returned.
 */
extern double fmax (double __x, double __y) __attribute__((__const__));


/**
    The fmin() function returns the lesser of the two values \a __x and
    \a __y. If an argument is NaN, the other argument is returned. If
    both arguments are NaN, NaN is returned.
 */
extern double fmin (double __x, double __y) __attribute__((__const__));


/**
    The trunc() function rounds \a __x to the nearest integer not larger
    in absolute value.
 */
extern double trunc (double __x) __attribute__((__const__));


/**
    The round() function rounds \a __x to the nearest integer, but rounds
    halfway cases away from zero (instead of to the nearest even integer).
    Overflow is impossible.

    \return The rounded value. If \a __x is an integral or infinite, \a
    __x itself is returned. If \a __x is \c NaN, then \c NaN is returned.
 */
extern double round (double __x) __attribute__((__const__));


/**
    The lround() function rounds \a __x to the nearest integer, but rounds
    halfway cases away from zero (instead of to the nearest even integer).
    This function is similar to round() function, but it differs in type of
    return value and in that an overflow is possible.

    \return The rounded long integer value. If \a __x is not a finite number
    or an overflow was, this realization returns the \c LONG_MIN value
    (0x80000000).
 */
extern long lround (double __x) __attribute__((__const__));


/**
    The lrint() function rounds \a __x to the nearest integer, rounding the
    halfway cases to the even integer direction. (That is both 1.5 and 2.5
    values are rounded to 2). This function is similar to rint() function,
    but it differs in type of return value and in that an overflow is
    possible.

    \return The rounded long integer value. If \a __x is not a finite
    number or an overflow was, this realization returns the \c LONG_MIN
    value (0x80000000).
 */
extern long lrint (double __x) __attribute__((__const__));



}


/*@}*/
# 27 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 2

# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 1 3
/* Copyright (c) 2002-2007  Marek Michalkiewicz
   Copyright (c) 2006, Carlos Lamas
   Copyright (c) 2009-2010, Jan Waclawek
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   pgmspace.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
     Eric B. Weddington <eric@ecentral.com>
     Wolfgang Haidinger <wh@vmars.tuwien.ac.at> (pgm_read_dword())
     Ivanov Anton <anton@arc.com.ru> (pgm_read_float())
 */

/** \file */
/** \defgroup avr_pgmspace <avr/pgmspace.h>: Program Space Utilities
    \code
    #include <avr/io.h>
    #include <avr/pgmspace.h>
    \endcode

    The functions in this module provide interfaces for a program to access
    data stored in program space (flash memory) of the device.  In order to
    use these functions, the target device must support either the \c LPM or
    \c ELPM instructions.

    \note These functions are an attempt to provide some compatibility with
    header files that come with IAR C, to make porting applications between
    different compilers easier.  This is not 100% compatibility though (GCC
    does not have full support for multiple address spaces yet).

    \note If you are working with strings which are completely based in ram,
    use the standard string functions described in \ref avr_string.

    \note If possible, put your constant tables in the lower 64 KB and use
    pgm_read_byte_near() or pgm_read_word_near() instead of
    pgm_read_byte_far() or pgm_read_word_far() since it is more efficient that
    way, and you can still use the upper 64K for executable code.
    All functions that are suffixed with a \c _P \e require their
    arguments to be in the lower 64 KB of the flash ROM, as they do
    not use ELPM instructions.  This is normally not a big concern as
    the linker setup arranges any program space constants declared
    using the macros from this header file so they are placed right after
    the interrupt vectors, and in front of any executable code.  However,
    it can become a problem if there are too many of these constants, or
    for bootloaders on devices with more than 64 KB of ROM.
    <em>All these functions will not work in that situation.</em>

    \note For <b>Xmega</b> devices, make sure the NVM controller
    command register (\c NVM.CMD or \c NVM_CMD) is set to 0x00 (NOP)
    before using any of these functions.
*/





# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stdint.h" 1 3 4
# 9 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stdint.h" 3 4
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdint.h" 1 3 4
/* Copyright (c) 2002,2004,2005 Marek Michalkiewicz
   Copyright (c) 2005, Carlos Lamas
   Copyright (c) 2005,2007 Joerg Wunsch
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
 * ISO/IEC 9899:1999  7.18 Integer types <stdint.h>
 */




/** \file */
/** \defgroup avr_stdint <stdint.h>: Standard Integer Types
    \code #include <stdint.h> \endcode

    Use [u]intN_t if you need exactly N bits.

    Since these typedefs are mandated by the C99 standard, they are preferred
    over rolling your own typedefs.  */

/*
 * __USING_MINT8 is defined to 1 if the -mint8 option is in effect.
 */






/* Integer types */
# 119 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdint.h" 3 4
/* actual implementation goes here */

typedef signed int int8_t __attribute__((__mode__(__QI__)));
typedef unsigned int uint8_t __attribute__((__mode__(__QI__)));
typedef signed int int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int uint16_t __attribute__ ((__mode__ (__HI__)));
typedef signed int int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int uint32_t __attribute__ ((__mode__ (__SI__)));

typedef signed int int64_t __attribute__((__mode__(__DI__)));
typedef unsigned int uint64_t __attribute__((__mode__(__DI__)));




/** \name Integer types capable of holding object pointers
    These allow you to declare variables of the same size as a pointer. */

/*@{*/

/** \ingroup avr_stdint
    Signed pointer compatible type. */

typedef int16_t intptr_t;

/** \ingroup avr_stdint
    Unsigned pointer compatible type. */

typedef uint16_t uintptr_t;

/*@}*/

/** \name Minimum-width integer types
   Integer types having at least the specified width */

/*@{*/

/** \ingroup avr_stdint
    signed int with at least 8 bits. */

typedef int8_t int_least8_t;

/** \ingroup avr_stdint
    unsigned int with at least 8 bits. */

typedef uint8_t uint_least8_t;

/** \ingroup avr_stdint
    signed int with at least 16 bits. */

typedef int16_t int_least16_t;

/** \ingroup avr_stdint
    unsigned int with at least 16 bits. */

typedef uint16_t uint_least16_t;

/** \ingroup avr_stdint
    signed int with at least 32 bits. */

typedef int32_t int_least32_t;

/** \ingroup avr_stdint
    unsigned int with at least 32 bits. */

typedef uint32_t uint_least32_t;


/** \ingroup avr_stdint
    signed int with at least 64 bits.
    \note This type is not available when the compiler
    option -mint8 is in effect. */

typedef int64_t int_least64_t;

/** \ingroup avr_stdint
    unsigned int with at least 64 bits.
    \note This type is not available when the compiler
    option -mint8 is in effect. */

typedef uint64_t uint_least64_t;


/*@}*/


/** \name Fastest minimum-width integer types
   Integer types being usually fastest having at least the specified width */

/*@{*/

/** \ingroup avr_stdint
    fastest signed int with at least 8 bits. */

typedef int8_t int_fast8_t;

/** \ingroup avr_stdint
    fastest unsigned int with at least 8 bits. */

typedef uint8_t uint_fast8_t;

/** \ingroup avr_stdint
    fastest signed int with at least 16 bits. */

typedef int16_t int_fast16_t;

/** \ingroup avr_stdint
    fastest unsigned int with at least 16 bits. */

typedef uint16_t uint_fast16_t;

/** \ingroup avr_stdint
    fastest signed int with at least 32 bits. */

typedef int32_t int_fast32_t;

/** \ingroup avr_stdint
    fastest unsigned int with at least 32 bits. */

typedef uint32_t uint_fast32_t;


/** \ingroup avr_stdint
    fastest signed int with at least 64 bits.
    \note This type is not available when the compiler
    option -mint8 is in effect. */

typedef int64_t int_fast64_t;

/** \ingroup avr_stdint
    fastest unsigned int with at least 64 bits.
    \note This type is not available when the compiler
    option -mint8 is in effect. */

typedef uint64_t uint_fast64_t;


/*@}*/


/** \name Greatest-width integer types
   Types designating integer data capable of representing any value of
   any integer type in the corresponding signed or unsigned category */

/*@{*/






/** \ingroup avr_stdint
    largest signed int available. */

typedef int64_t intmax_t;

/** \ingroup avr_stdint
    largest unsigned int available. */

typedef uint64_t uintmax_t;


/*@}*/

/* Helping macro */







/** \name Limits of specified-width integer types
   C++ implementations should define these macros only when
   __STDC_LIMIT_MACROS is defined before <stdint.h> is included */

/*@{*/

/** \ingroup avr_stdint
    largest positive value an int8_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int8_t can hold. */



/** \ingroup avr_stdint
    largest value an uint8_t can hold. */
# 324 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdint.h" 3 4
/** \ingroup avr_stdint
    largest positive value an int16_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int16_t can hold. */



/** \ingroup avr_stdint
    largest value an uint16_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int32_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int32_t can hold. */



/** \ingroup avr_stdint
    largest value an uint32_t can hold. */





/** \ingroup avr_stdint
    largest positive value an int64_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int64_t can hold. */



/** \ingroup avr_stdint
    largest value an uint64_t can hold. */



/*@}*/

/** \name Limits of minimum-width integer types */
/*@{*/

/** \ingroup avr_stdint
    largest positive value an int_least8_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_least8_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_least8_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_least16_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_least16_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_least16_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_least32_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_least32_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_least32_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_least64_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_least64_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_least64_t can hold. */



/*@}*/

/** \name Limits of fastest minimum-width integer types */

/*@{*/

/** \ingroup avr_stdint
    largest positive value an int_fast8_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_fast8_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_fast8_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_fast16_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_fast16_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_fast16_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_fast32_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_fast32_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_fast32_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_fast64_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_fast64_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_fast64_t can hold. */



/*@}*/

/** \name Limits of integer types capable of holding object pointers */

/*@{*/

/** \ingroup avr_stdint
    largest positive value an intptr_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an intptr_t can hold. */



/** \ingroup avr_stdint
    largest value an uintptr_t can hold. */



/*@}*/

/** \name Limits of greatest-width integer types */

/*@{*/

/** \ingroup avr_stdint
    largest positive value an intmax_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an intmax_t can hold. */



/** \ingroup avr_stdint
    largest value an uintmax_t can hold. */



/*@}*/

/** \name Limits of other integer types
    C++ implementations should define these macros only when
    __STDC_LIMIT_MACROS is defined before <stdint.h> is included */

/*@{*/

/** \ingroup avr_stdint
    largest positive value a ptrdiff_t can hold. */



/** \ingroup avr_stdint
    smallest negative value a ptrdiff_t can hold. */




/* Limits of sig_atomic_t */
/* signal.h is currently not implemented (not avr/signal.h) */

/** \ingroup avr_stdint
    largest positive value a sig_atomic_t can hold. */



/** \ingroup avr_stdint
    smallest negative value a sig_atomic_t can hold. */




/** \ingroup avr_stdint
    largest value a size_t can hold. */




/* Limits of wchar_t */
/* wchar.h is currently not implemented */
/* #define WCHAR_MAX */
/* #define WCHAR_MIN */


/* Limits of wint_t */
/* wchar.h is currently not implemented */
/* #define WINT_MAX */
/* #define WINT_MIN */






/** \name Macros for integer constants
    C++ implementations should define these macros only when
    __STDC_CONSTANT_MACROS is defined before <stdint.h> is included.

    These definitions are valid for integer constants without suffix and
    for macros defined as integer constant without suffix */

/** \ingroup avr_stdint
    define a constant of type int8_t */



/** \ingroup avr_stdint
    define a constant of type uint8_t */
# 626 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdint.h" 3 4
/** \ingroup avr_stdint
    define a constant of type int16_t */



/** \ingroup avr_stdint
    define a constant of type uint16_t */



/** \ingroup avr_stdint
    define a constant of type int32_t */



/** \ingroup avr_stdint
    define a constant of type uint32_t */





/** \ingroup avr_stdint
    define a constant of type int64_t */



/** \ingroup avr_stdint
    define a constant of type uint64_t */



/** \ingroup avr_stdint
    define a constant of type intmax_t */



/** \ingroup avr_stdint
    define a constant of type uintmax_t */



/*@}*/
# 10 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stdint.h" 2 3 4
# 38 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 2 3

/** \file */
/** \defgroup avr_inttypes <inttypes.h>: Integer Type conversions
    \code #include <inttypes.h> \endcode

    This header file includes the exact-width integer definitions from
    <tt><stdint.h></tt>, and extends them with additional facilities
    provided by the implementation.

    Currently, the extensions include two additional integer types
    that could hold a "far" pointer (i.e. a code pointer that can
    address more than 64 KB), as well as standard names for all printf
    and scanf formatting options that are supported by the \ref avr_stdio.
    As the library does not support the full range of conversion
    specifiers from ISO 9899:1999, only those conversions that are
    actually implemented will be listed here.

    The idea behind these conversion macros is that, for each of the
    types defined by <stdint.h>, a macro will be supplied that portably
    allows formatting an object of that type in printf() or scanf()
    operations.  Example:

    \code
    #include <inttypes.h>

    uint8_t smallval;
    int32_t longval;
    ...
    printf("The hexadecimal value of smallval is %" PRIx8
           ", the decimal value of longval is %" PRId32 ".\n",
	   smallval, longval);
    \endcode
*/

/** \name Far pointers for memory access >64K */

/*@{*/
/** \ingroup avr_inttypes
    signed integer type that can hold a pointer > 64 KB */
typedef int32_t int_farptr_t;

/** \ingroup avr_inttypes
    unsigned integer type that can hold a pointer > 64 KB */
typedef uint32_t uint_farptr_t;
/*@}*/




/** \name macros for printf and scanf format specifiers

    For C++, these are only included if __STDC_LIMIT_MACROS
    is defined before including <inttypes.h>.
 */

/*@{*/
/** \ingroup avr_inttypes
    decimal printf format for int8_t */

/** \ingroup avr_inttypes
    decimal printf format for int_least8_t */

/** \ingroup avr_inttypes
    decimal printf format for int_fast8_t */


/** \ingroup avr_inttypes
    integer printf format for int8_t */

/** \ingroup avr_inttypes
    integer printf format for int_least8_t */

/** \ingroup avr_inttypes
    integer printf format for int_fast8_t */



/** \ingroup avr_inttypes
    decimal printf format for int16_t */

/** \ingroup avr_inttypes
    decimal printf format for int_least16_t */

/** \ingroup avr_inttypes
    decimal printf format for int_fast16_t */


/** \ingroup avr_inttypes
    integer printf format for int16_t */

/** \ingroup avr_inttypes
    integer printf format for int_least16_t */

/** \ingroup avr_inttypes
    integer printf format for int_fast16_t */



/** \ingroup avr_inttypes
    decimal printf format for int32_t */

/** \ingroup avr_inttypes
    decimal printf format for int_least32_t */

/** \ingroup avr_inttypes
    decimal printf format for int_fast32_t */


/** \ingroup avr_inttypes
    integer printf format for int32_t */

/** \ingroup avr_inttypes
    integer printf format for int_least32_t */

/** \ingroup avr_inttypes
    integer printf format for int_fast32_t */
# 173 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 3
/** \ingroup avr_inttypes
    decimal printf format for intptr_t */

/** \ingroup avr_inttypes
    integer printf format for intptr_t */


/** \ingroup avr_inttypes
    octal printf format for uint8_t */

/** \ingroup avr_inttypes
    octal printf format for uint_least8_t */

/** \ingroup avr_inttypes
    octal printf format for uint_fast8_t */


/** \ingroup avr_inttypes
    decimal printf format for uint8_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_least8_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_fast8_t */


/** \ingroup avr_inttypes
    hexadecimal printf format for uint8_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_least8_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_fast8_t */


/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint8_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_least8_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_fast8_t */



/** \ingroup avr_inttypes
    octal printf format for uint16_t */

/** \ingroup avr_inttypes
    octal printf format for uint_least16_t */

/** \ingroup avr_inttypes
    octal printf format for uint_fast16_t */


/** \ingroup avr_inttypes
    decimal printf format for uint16_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_least16_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_fast16_t */


/** \ingroup avr_inttypes
    hexadecimal printf format for uint16_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_least16_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_fast16_t */


/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint16_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_least16_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_fast16_t */



/** \ingroup avr_inttypes
    octal printf format for uint32_t */

/** \ingroup avr_inttypes
    octal printf format for uint_least32_t */

/** \ingroup avr_inttypes
    octal printf format for uint_fast32_t */


/** \ingroup avr_inttypes
    decimal printf format for uint32_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_least32_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_fast32_t */


/** \ingroup avr_inttypes
    hexadecimal printf format for uint32_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_least32_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_fast32_t */


/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint32_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_least32_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_fast32_t */
# 328 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 3
/** \ingroup avr_inttypes
    octal printf format for uintptr_t */

/** \ingroup avr_inttypes
    decimal printf format for uintptr_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uintptr_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uintptr_t */
# 355 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 3
/** \ingroup avr_inttypes
    decimal scanf format for int16_t */

/** \ingroup avr_inttypes
    decimal scanf format for int_least16_t */

/** \ingroup avr_inttypes
    decimal scanf format for int_fast16_t */


/** \ingroup avr_inttypes
    generic-integer scanf format for int16_t */

/** \ingroup avr_inttypes
    generic-integer scanf format for int_least16_t */

/** \ingroup avr_inttypes
    generic-integer scanf format for int_fast16_t */



/** \ingroup avr_inttypes
    decimal scanf format for int32_t */

/** \ingroup avr_inttypes
    decimal scanf format for int_least32_t */

/** \ingroup avr_inttypes
    decimal scanf format for int_fast32_t */


/** \ingroup avr_inttypes
    generic-integer scanf format for int32_t */

/** \ingroup avr_inttypes
    generic-integer scanf format for int_least32_t */

/** \ingroup avr_inttypes
    generic-integer scanf format for int_fast32_t */
# 412 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 3
/** \ingroup avr_inttypes
    decimal scanf format for intptr_t */

/** \ingroup avr_inttypes
    generic-integer scanf format for intptr_t */
# 435 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 3
/** \ingroup avr_inttypes
    octal scanf format for uint16_t */

/** \ingroup avr_inttypes
    octal scanf format for uint_least16_t */

/** \ingroup avr_inttypes
    octal scanf format for uint_fast16_t */


/** \ingroup avr_inttypes
    decimal scanf format for uint16_t */

/** \ingroup avr_inttypes
    decimal scanf format for uint_least16_t */

/** \ingroup avr_inttypes
    decimal scanf format for uint_fast16_t */


/** \ingroup avr_inttypes
    hexadecimal scanf format for uint16_t */

/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_least16_t */

/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_fast16_t */



/** \ingroup avr_inttypes
    octal scanf format for uint32_t */

/** \ingroup avr_inttypes
    octal scanf format for uint_least32_t */

/** \ingroup avr_inttypes
    octal scanf format for uint_fast32_t */


/** \ingroup avr_inttypes
    decimal scanf format for uint32_t */

/** \ingroup avr_inttypes
    decimal scanf format for uint_least32_t */

/** \ingroup avr_inttypes
    decimal scanf format for uint_fast32_t */


/** \ingroup avr_inttypes
    hexadecimal scanf format for uint32_t */

/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_least32_t */

/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_fast32_t */
# 517 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 3
/** \ingroup avr_inttypes
    octal scanf format for uintptr_t */

/** \ingroup avr_inttypes
    decimal scanf format for uintptr_t */

/** \ingroup avr_inttypes
    hexadecimal scanf format for uintptr_t */


/*@}*/
# 87 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 2 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 88 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 2 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\sfr_defs.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz <marekm@amelek.gda.pl>
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.  */

/* avr/sfr_defs.h - macros for accessing AVR special function registers */

/* $Id$ */




/** \defgroup avr_sfr_notes Additional notes from <avr/sfr_defs.h>
    \ingroup avr_sfr

   The \c <avr/sfr_defs.h> file is included by all of the \c <avr/ioXXXX.h>
   files, which use macros defined here to make the special function register
   definitions look like C variables or simple constants, depending on the
   <tt>_SFR_ASM_COMPAT</tt> define.  Some examples from \c <avr/iocanxx.h> to
   show how to define such macros:

\code
#define PORTA   _SFR_IO8(0x02)
#define EEAR    _SFR_IO16(0x21)
#define UDR0    _SFR_MEM8(0xC6)
#define TCNT3   _SFR_MEM16(0x94)
#define CANIDT  _SFR_MEM32(0xF0)
\endcode

   If \c _SFR_ASM_COMPAT is not defined, C programs can use names like
   <tt>PORTA</tt> directly in C expressions (also on the left side of
   assignment operators) and GCC will do the right thing (use short I/O
   instructions if possible).  The \c __SFR_OFFSET definition is not used in
   any way in this case.

   Define \c _SFR_ASM_COMPAT as 1 to make these names work as simple constants
   (addresses of the I/O registers).  This is necessary when included in
   preprocessed assembler (*.S) source files, so it is done automatically if
   \c __ASSEMBLER__ is defined.  By default, all addresses are defined as if
   they were memory addresses (used in \c lds/sts instructions).  To use these
   addresses in \c in/out instructions, you must subtract 0x20 from them.

   For more backwards compatibility, insert the following at the start of your
   old assembler source file:

\code
#define __SFR_OFFSET 0
\endcode

   This automatically subtracts 0x20 from I/O space addresses, but it's a
   hack, so it is recommended to change your source: wrap such addresses in
   macros defined here, as shown below.  After this is done, the
   <tt>__SFR_OFFSET</tt> definition is no longer necessary and can be removed.

   Real example - this code could be used in a boot loader that is portable
   between devices with \c SPMCR at different addresses.

\verbatim
<avr/iom163.h>: #define SPMCR _SFR_IO8(0x37)
<avr/iom128.h>: #define SPMCR _SFR_MEM8(0x68)
\endverbatim

\code
#if _SFR_IO_REG_P(SPMCR)
	out	_SFR_IO_ADDR(SPMCR), r24
#else
	sts	_SFR_MEM_ADDR(SPMCR), r24
#endif
\endcode

   You can use the \c in/out/cbi/sbi/sbic/sbis instructions, without the
   <tt>_SFR_IO_REG_P</tt> test, if you know that the register is in the I/O
   space (as with \c SREG, for example).  If it isn't, the assembler will
   complain (I/O address out of range 0...0x3f), so this should be fairly
   safe.

   If you do not define \c __SFR_OFFSET (so it will be 0x20 by default), all
   special register addresses are defined as memory addresses (so \c SREG is
   0x5f), and (if code size and speed are not important, and you don't like
   the ugly \#if above) you can always use lds/sts to access them.  But, this
   will not work if <tt>__SFR_OFFSET</tt> != 0x20, so use a different macro
   (defined only if <tt>__SFR_OFFSET</tt> == 0x20) for safety:

\code
	sts	_SFR_ADDR(SPMCR), r24
\endcode

   In C programs, all 3 combinations of \c _SFR_ASM_COMPAT and
   <tt>__SFR_OFFSET</tt> are supported - the \c _SFR_ADDR(SPMCR) macro can be
   used to get the address of the \c SPMCR register (0x57 or 0x68 depending on
   device). */
# 125 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\sfr_defs.h" 3
/* These only work in C programs.  */
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 127 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\sfr_defs.h" 2 3
# 194 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\sfr_defs.h" 3
/** \name Bit manipulation */

/*@{*/
/** \def _BV
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Converts a bit number into a byte value.

    \note The bit shift is performed by the compiler which then inserts the
    result into the code. Thus, there is no run-time overhead when using
    _BV(). */



/*@}*/
# 219 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\sfr_defs.h" 3
/** \name IO register bit manipulation */

/*@{*/



/** \def bit_is_set
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Test whether bit \c bit in IO register \c sfr is set. 
    This will return a 0 if the bit is clear, and non-zero
    if the bit is set. */



/** \def bit_is_clear
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Test whether bit \c bit in IO register \c sfr is clear. 
    This will return non-zero if the bit is clear, and a 0
    if the bit is set. */



/** \def loop_until_bit_is_set
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Wait until bit \c bit in IO register \c sfr is set. */



/** \def loop_until_bit_is_clear
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Wait until bit \c bit in IO register \c sfr is clear. */



/*@}*/
# 100 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 2 3
# 272 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iom328p.h" 1 3
/* Copyright (c) 2007 Atmel Corporation

   All rights reserved.



   Redistribution and use in source and binary forms, with or without

   modification, are permitted provided that the following conditions are met:



   * Redistributions of source code must retain the above copyright

     notice, this list of conditions and the following disclaimer.



   * Redistributions in binary form must reproduce the above copyright

     notice, this list of conditions and the following disclaimer in

     the documentation and/or other materials provided with the

     distribution.



   * Neither the name of the copyright holders nor the names of

     contributors may be used to endorse or promote products derived

     from this software without specific prior written permission.



  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"

  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE

  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE

  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE

  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR

  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF

  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS

  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN

  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)

  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE

  POSSIBILITY OF SUCH DAMAGE. 

*/
# 32 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iom328p.h" 3
/* $Id: iom328p.h 2444 2014-08-11 22:10:47Z joerg_wunsch $ */

/* avr/iom328p.h - definitions for ATmega328P. */

/* This file should only be included from <avr/io.h>, never directly. */
# 52 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iom328p.h" 3
/* Registers and associated bit numbers */
# 790 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iom328p.h" 3
/* Interrupt Vectors */
/* Interrupt Vector 0 is the reset vector. */
# 872 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iom328p.h" 3
/* Constants */
# 884 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iom328p.h" 3
/* Fuses */


/* Low Fuse Byte */
# 898 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iom328p.h" 3
/* High Fuse Byte */
# 909 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iom328p.h" 3
/* Extended Fuse Byte */







/* Lock Bits */





/* Signature */
# 273 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 2 3
# 616 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 1 3
/* Copyright (c) 2003  Theodore A. Roth
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




/* This file should only be included from <avr/io.h>, never directly. */





/* Define Generic PORTn, DDn, and PINn values. */

/* Port Data Register (generic) */
# 54 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* Port Data Direction Register (generic) */
# 64 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* Port Input Pins (generic) */
# 74 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* Define PORTxn an Pxn values for all possible port pins if not defined already by io.h. */

/* PORT A */
# 119 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT B */
# 162 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT C */
# 205 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT D */
# 248 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT E */
# 291 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT F */
# 334 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT G */
# 377 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT H */
# 420 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT J */
# 463 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT K */
# 506 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT L */
# 617 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 2 3

# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 1 3
/* Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */





# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\sfr_defs.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz <marekm@amelek.gda.pl>
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.  */

/* avr/sfr_defs.h - macros for accessing AVR special function registers */

/* $Id$ */
# 38 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 2 3

/* 
This purpose of this header is to define registers that have not been 
previously defined in the individual device IO header files, and to define 
other symbols that are common across AVR device families.

This file is designed to be included in <avr/io.h> after the individual
device IO header files, and after <avr/sfr_defs.h>

*/

/*------------ Registers Not Previously Defined ------------*/

/* 
These are registers that are not previously defined in the individual
IO header files, OR they are defined here because they are used in parts of
avr-libc even if a device is not selected but a general architecture has
been selected.
*/


/*
Stack pointer register.

AVR architecture 1 has no RAM, thus no stack pointer. 

All other architectures do have a stack pointer.  Some devices have only
less than 256 bytes of possible RAM locations (128 Bytes of SRAM
and no option for external RAM), thus SPH is officially "reserved"
for them.
*/
# 98 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* Status Register */
# 108 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* SREG bit definitions */
# 206 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/*------------ Common Symbols ------------*/

/* 
Generic definitions for registers that are common across multiple AVR devices
and families.
*/

/* Pointer registers definitions */
# 224 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* Status Register */
# 234 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* Stack Pointer (combined) Register */
# 244 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* Stack Pointer High Register */
# 255 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* Stack Pointer Low Register */
# 265 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* RAMPD Register */
# 275 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* RAMPX Register */
# 285 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* RAMPY Register */
# 295 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* RAMPZ Register */
# 305 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* Extended Indirect Register */
# 315 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/*------------ Workaround to old compilers (4.1.2 and earlier)  ------------*/
# 619 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 2 3

# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\version.h" 1 3
/* Copyright (c) 2005, Joerg Wunsch                               -*- c -*-
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \defgroup avr_version <avr/version.h>: avr-libc version macros
    \code #include <avr/version.h> \endcode

    This header file defines macros that contain version numbers and
    strings describing the current version of avr-libc.

    The version number itself basically consists of three pieces that
    are separated by a dot: the major number, the minor number, and
    the revision number.  For development versions (which use an odd
    minor number), the string representation additionally gets the
    date code (YYYYMMDD) appended.

    This file will also be included by \c <avr/io.h>.  That way,
    portable tests can be implemented using \c <avr/io.h> that can be
    used in code that wants to remain backwards-compatible to library
    versions prior to the date when the library version API had been
    added, as referenced but undefined C preprocessor macros
    automatically evaluate to 0.
*/




/** \ingroup avr_version
    String literal representation of the current library version. */


/** \ingroup avr_version
    Numerical representation of the current library version.

    In the numerical representation, the major number is multiplied by
    10000, the minor number by 100, and all three parts are then
    added.  It is intented to provide a monotonically increasing
    numerical value that can easily be used in numerical checks.
 */


/** \ingroup avr_version
    String literal representation of the release date. */


/** \ingroup avr_version
    Numerical representation of the release date. */


/** \ingroup avr_version
    Library major version number. */


/** \ingroup avr_version
    Library minor version number. */


/** \ingroup avr_version
    Library revision number. */
# 621 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 2 3





/* Include fuse.h after individual IO header files. */
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\fuse.h" 1 3
/* Copyright (c) 2007, Atmel Corporation
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/* avr/fuse.h - Fuse API */




/* This file must be explicitly included by <avr/io.h>. */





/** \file */
/** \defgroup avr_fuse <avr/fuse.h>: Fuse Support

    \par Introduction

    The Fuse API allows a user to specify the fuse settings for the specific
    AVR device they are compiling for. These fuse settings will be placed
    in a special section in the ELF output file, after linking.

    Programming tools can take advantage of the fuse information embedded in
    the ELF file, by extracting this information and determining if the fuses
    need to be programmed before programming the Flash and EEPROM memories.
    This also allows a single ELF file to contain all the
    information needed to program an AVR. 

    To use the Fuse API, include the <avr/io.h> header file, which in turn
    automatically includes the individual I/O header file and the <avr/fuse.h>
    file. These other two files provides everything necessary to set the AVR
    fuses.
    
    \par Fuse API
    
    Each I/O header file must define the FUSE_MEMORY_SIZE macro which is
    defined to the number of fuse bytes that exist in the AVR device.
    
    A new type, __fuse_t, is defined as a structure. The number of fields in 
    this structure are determined by the number of fuse bytes in the 
    FUSE_MEMORY_SIZE macro.
    
    If FUSE_MEMORY_SIZE == 1, there is only a single field: byte, of type
    unsigned char.
    
    If FUSE_MEMORY_SIZE == 2, there are two fields: low, and high, of type
    unsigned char.
    
    If FUSE_MEMORY_SIZE == 3, there are three fields: low, high, and extended,
    of type unsigned char.
    
    If FUSE_MEMORY_SIZE > 3, there is a single field: byte, which is an array
    of unsigned char with the size of the array being FUSE_MEMORY_SIZE.
    
    A convenience macro, FUSEMEM, is defined as a GCC attribute for a 
    custom-named section of ".fuse".
    
    A convenience macro, FUSES, is defined that declares a variable, __fuse, of
    type __fuse_t with the attribute defined by FUSEMEM. This variable
    allows the end user to easily set the fuse data.

    \note If a device-specific I/O header file has previously defined FUSEMEM,
    then FUSEMEM is not redefined. If a device-specific I/O header file has
    previously defined FUSES, then FUSES is not redefined.

    Each AVR device I/O header file has a set of defined macros which specify the
    actual fuse bits available on that device. The AVR fuses have inverted
    values, logical 1 for an unprogrammed (disabled) bit and logical 0 for a
    programmed (enabled) bit. The defined macros for each individual fuse
    bit represent this in their definition by a bit-wise inversion of a mask.
    For example, the FUSE_EESAVE fuse in the ATmega128 is defined as:
    \code
    #define FUSE_EESAVE      ~_BV(3)
    \endcode
    \note The _BV macro creates a bit mask from a bit number. It is then 
    inverted to represent logical values for a fuse memory byte.
    
    To combine the fuse bits macros together to represent a whole fuse byte,
    use the bitwise AND operator, like so:
    \code
    (FUSE_BOOTSZ0 & FUSE_BOOTSZ1 & FUSE_EESAVE & FUSE_SPIEN & FUSE_JTAGEN)
    \endcode
    
    Each device I/O header file also defines macros that provide default values
    for each fuse byte that is available. LFUSE_DEFAULT is defined for a Low
    Fuse byte. HFUSE_DEFAULT is defined for a High Fuse byte. EFUSE_DEFAULT
    is defined for an Extended Fuse byte.
    
    If FUSE_MEMORY_SIZE > 3, then the I/O header file defines macros that
    provide default values for each fuse byte like so:
    FUSE0_DEFAULT
    FUSE1_DEFAULT
    FUSE2_DEFAULT
    FUSE3_DEFAULT
    FUSE4_DEFAULT
    ....
    
    \par API Usage Example
    
    Putting all of this together is easy. Using C99's designated initializers:
    
    \code
    #include <avr/io.h>

    FUSES = 
    {
        .low = LFUSE_DEFAULT,
        .high = (FUSE_BOOTSZ0 & FUSE_BOOTSZ1 & FUSE_EESAVE & FUSE_SPIEN & FUSE_JTAGEN),
        .extended = EFUSE_DEFAULT,
    };

    int main(void)
    {
        return 0;
    }
    \endcode
    
    Or, using the variable directly instead of the FUSES macro,
    
    \code
    #include <avr/io.h>

    __fuse_t __fuse __attribute__((section (".fuse"))) = 
    {
        .low = LFUSE_DEFAULT,
        .high = (FUSE_BOOTSZ0 & FUSE_BOOTSZ1 & FUSE_EESAVE & FUSE_SPIEN & FUSE_JTAGEN),
        .extended = EFUSE_DEFAULT,
    };

    int main(void)
    {
        return 0;
    }
    \endcode
    
    If you are compiling in C++, you cannot use the designated intializers so
    you must do:

    \code
    #include <avr/io.h>

    FUSES = 
    {
        LFUSE_DEFAULT, // .low
        (FUSE_BOOTSZ0 & FUSE_BOOTSZ1 & FUSE_EESAVE & FUSE_SPIEN & FUSE_JTAGEN), // .high
        EFUSE_DEFAULT, // .extended
    };

    int main(void)
    {
        return 0;
    }
    \endcode
    
    
    However there are a number of caveats that you need to be aware of to
    use this API properly.
    
    Be sure to include <avr/io.h> to get all of the definitions for the API.
    The FUSES macro defines a global variable to store the fuse data. This 
    variable is assigned to its own linker section. Assign the desired fuse 
    values immediately in the variable initialization.
    
    The .fuse section in the ELF file will get its values from the initial 
    variable assignment ONLY. This means that you can NOT assign values to 
    this variable in functions and the new values will not be put into the
    ELF .fuse section.
    
    The global variable is declared in the FUSES macro has two leading 
    underscores, which means that it is reserved for the "implementation",
    meaning the library, so it will not conflict with a user-named variable.
    
    You must initialize ALL fields in the __fuse_t structure. This is because
    the fuse bits in all bytes default to a logical 1, meaning unprogrammed. 
    Normal uninitialized data defaults to all locgial zeros. So it is vital that
    all fuse bytes are initialized, even with default data. If they are not,
    then the fuse bits may not programmed to the desired settings.
    
    Be sure to have the -mmcu=<em>device</em> flag in your compile command line and
    your linker command line to have the correct device selected and to have 
    the correct I/O header file included when you include <avr/io.h>.

    You can print out the contents of the .fuse section in the ELF file by
    using this command line:
    \code
    avr-objdump -s -j .fuse <ELF file>
    \endcode
    The section contents shows the address on the left, then the data going from
    lower address to a higher address, left to right.

*/
# 239 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\fuse.h" 3
typedef struct
{
    unsigned char low;
    unsigned char high;
    unsigned char extended;
} __fuse_t;
# 628 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 2 3

/* Include lock.h after individual IO header files. */
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\lock.h" 1 3
/* Copyright (c) 2007, Atmel Corporation
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/* avr/lock.h - Lock Bits API */





/** \file */
/** \defgroup avr_lock <avr/lock.h>: Lockbit Support

    \par Introduction

    The Lockbit API allows a user to specify the lockbit settings for the 
    specific AVR device they are compiling for. These lockbit settings will be 
    placed in a special section in the ELF output file, after linking.

    Programming tools can take advantage of the lockbit information embedded in
    the ELF file, by extracting this information and determining if the lockbits
    need to be programmed after programming the Flash and EEPROM memories.
    This also allows a single ELF file to contain all the
    information needed to program an AVR. 

    To use the Lockbit API, include the <avr/io.h> header file, which in turn
    automatically includes the individual I/O header file and the <avr/lock.h>
    file. These other two files provides everything necessary to set the AVR
    lockbits.
    
    \par Lockbit API
    
    Each I/O header file may define up to 3 macros that controls what kinds
    of lockbits are available to the user.
    
    If __LOCK_BITS_EXIST is defined, then two lock bits are available to the
    user and 3 mode settings are defined for these two bits.
    
    If __BOOT_LOCK_BITS_0_EXIST is defined, then the two BLB0 lock bits are
    available to the user and 4 mode settings are defined for these two bits.
    
    If __BOOT_LOCK_BITS_1_EXIST is defined, then the two BLB1 lock bits are
    available to the user and 4 mode settings are defined for these two bits.

    If __BOOT_LOCK_APPLICATION_TABLE_BITS_EXIST is defined then two lock bits
    are available to set the locking mode for the Application Table Section 
    (which is used in the XMEGA family).
    
    If __BOOT_LOCK_APPLICATION_BITS_EXIST is defined then two lock bits are
    available to set the locking mode for the Application Section (which is used
    in the XMEGA family).
    
    If __BOOT_LOCK_BOOT_BITS_EXIST is defined then two lock bits are available
    to set the locking mode for the Boot Loader Section (which is used in the
    XMEGA family).

    The AVR lockbit modes have inverted values, logical 1 for an unprogrammed 
    (disabled) bit and logical 0 for a programmed (enabled) bit. The defined 
    macros for each individual lock bit represent this in their definition by a 
    bit-wise inversion of a mask. For example, the LB_MODE_3 macro is defined 
    as:
    \code
    #define LB_MODE_3  (0xFC)
`   \endcode
    
    To combine the lockbit mode macros together to represent a whole byte,
    use the bitwise AND operator, like so:
    \code
    (LB_MODE_3 & BLB0_MODE_2)
    \endcode
    
    <avr/lock.h> also defines a macro that provides a default lockbit value:
    LOCKBITS_DEFAULT which is defined to be 0xFF.

    See the AVR device specific datasheet for more details about these
    lock bits and the available mode settings.
    
    A convenience macro, LOCKMEM, is defined as a GCC attribute for a 
    custom-named section of ".lock".
    
    A convenience macro, LOCKBITS, is defined that declares a variable, __lock, 
    of type unsigned char with the attribute defined by LOCKMEM. This variable
    allows the end user to easily set the lockbit data.

    \note If a device-specific I/O header file has previously defined LOCKMEM,
    then LOCKMEM is not redefined. If a device-specific I/O header file has
    previously defined LOCKBITS, then LOCKBITS is not redefined. LOCKBITS is
    currently known to be defined in the I/O header files for the XMEGA devices.

    \par API Usage Example
    
    Putting all of this together is easy:
    
    \code
    #include <avr/io.h>

    LOCKBITS = (LB_MODE_1 & BLB0_MODE_3 & BLB1_MODE_4);

    int main(void)
    {
        return 0;
    }
    \endcode
    
    Or:
    
    \code
    #include <avr/io.h>

    unsigned char __lock __attribute__((section (".lock"))) = 
        (LB_MODE_1 & BLB0_MODE_3 & BLB1_MODE_4);

    int main(void)
    {
        return 0;
    }
    \endcode
    
    
    
    However there are a number of caveats that you need to be aware of to
    use this API properly.
    
    Be sure to include <avr/io.h> to get all of the definitions for the API.
    The LOCKBITS macro defines a global variable to store the lockbit data. This 
    variable is assigned to its own linker section. Assign the desired lockbit 
    values immediately in the variable initialization.
    
    The .lock section in the ELF file will get its values from the initial 
    variable assignment ONLY. This means that you can NOT assign values to 
    this variable in functions and the new values will not be put into the
    ELF .lock section.
    
    The global variable is declared in the LOCKBITS macro has two leading 
    underscores, which means that it is reserved for the "implementation",
    meaning the library, so it will not conflict with a user-named variable.
    
    You must initialize the lockbit variable to some meaningful value, even
    if it is the default value. This is because the lockbits default to a 
    logical 1, meaning unprogrammed. Normal uninitialized data defaults to all 
    locgial zeros. So it is vital that all lockbits are initialized, even with 
    default data. If they are not, then the lockbits may not programmed to the 
    desired settings and can possibly put your device into an unrecoverable 
    state.
    
    Be sure to have the -mmcu=<em>device</em> flag in your compile command line and
    your linker command line to have the correct device selected and to have 
    the correct I/O header file included when you include <avr/io.h>.

    You can print out the contents of the .lock section in the ELF file by
    using this command line:
    \code
    avr-objdump -s -j .lock <ELF file>
    \endcode

*/
# 200 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\lock.h" 3
/* Lock Bit Modes */
# 631 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 2 3
# 89 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 2 3
# 102 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 3
/**
   \ingroup avr_pgmspace
   \def PROGMEM

   Attribute to use in order to declare an object being located in
   flash ROM.
 */



extern "C" {
# 382 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 3
/* Although in C, we can get away with just using __c, it does not work in
   C++. We need to use &__c[0] to avoid the compiler puking. Dave Hylands
   explaned it thusly,

     Let's suppose that we use PSTR("Test"). In this case, the type returned
     by __c is a prog_char[5] and not a prog_char *. While these are
     compatible, they aren't the same thing (especially in C++). The type
     returned by &__c[0] is a prog_char *, which explains why it works
     fine. */
# 403 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 3
/* The real thing. */
# 611 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 3
/*
Macro to read data from program memory for avr tiny parts(tiny 4/5/9/10/20/40).
why:
- LPM instruction is not available in AVR_TINY instruction set.
- Programs are executed starting from address 0x0000 in program memory.
But it must be addressed starting from 0x4000 when accessed via data memory.
Reference: TINY device (ATTiny 4,5,9,10,20 and 40) datasheets
Bug: avrtc-536
*/
# 632 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 3
/** \ingroup avr_pgmspace
    \def pgm_read_byte_near(address_short)
    Read a byte from the program space with a 16-bit (near) address. 
    \note The address is a byte address.
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_word_near(address_short)
    Read a word from the program space with a 16-bit (near) address. 
    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_dword_near(address_short)
    Read a double word from the program space with a 16-bit (near) address. 
    \note The address is a byte address. 
    The address is in the program space. */




/** \ingroup avr_pgmspace
    \def pgm_read_float_near(address_short)
    Read a float from the program space with a 16-bit (near) address. 
    \note The address is a byte address. 
    The address is in the program space. */




/** \ingroup avr_pgmspace
    \def pgm_read_ptr_near(address_short)
    Read a pointer from the program space with a 16-bit (near) address. 
    \note The address is a byte address. 
    The address is in the program space. */
# 1039 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 3
/** \ingroup avr_pgmspace
    \def pgm_read_byte(address_short)
    Read a byte from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_word(address_short)
    Read a word from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_dword(address_short)
    Read a double word from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_float(address_short)
    Read a float from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_ptr(address_short)
    Read a pointer from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/* pgm_get_far_address() macro

   This macro facilitates the obtention of a 32 bit "far" pointer (only 24 bits
   used) to data even passed the 64KB limit for the 16 bit ordinary pointer. It
   is similar to the '&' operator, with some limitations.

   Comments:

   - The overhead is minimal and it's mainly due to the 32 bit size operation.

   - 24 bit sizes guarantees the code compatibility for use in future devices.

   - hh8() is an undocumented feature but seems to give the third significant byte
     of a 32 bit data and accepts symbols, complementing the functionality of hi8()
     and lo8(). There is not an equivalent assembler function to get the high
     significant byte.

   - 'var' has to be resolved at linking time as an existing symbol, i.e, a simple
     type variable name, an array name (not an indexed element of the array, if the
     index is a constant the compiler does not complain but fails to get the address
     if optimization is enabled), a struct name or a struct field name, a function
     identifier, a linker defined identifier,...

   - The returned value is the identifier's VMA (virtual memory address) determined
     by the linker and falls in the corresponding memory region. The AVR Harvard
     architecture requires non overlapping VMA areas for the multiple address spaces
     in the processor: Flash ROM, RAM, and EEPROM. Typical offset for this are
     0x00000000, 0x00800xx0, and 0x00810000 respectively, derived from the linker
	 script used and linker options. The value returned can be seen then as a
     universal pointer.

*/
# 1137 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 3
extern const void * memchr_P(const void *, int __val, size_t __len) __attribute__((__const__));
extern int memcmp_P(const void *, const void *, size_t) __attribute__((__pure__));
extern void *memccpy_P(void *, const void *, int __val, size_t);
extern void *memcpy_P(void *, const void *, size_t);
extern void *memmem_P(const void *, size_t, const void *, size_t) __attribute__((__pure__));
extern const void * memrchr_P(const void *, int __val, size_t __len) __attribute__((__const__));
extern char *strcat_P(char *, const char *);
extern const char * strchr_P(const char *, int __val) __attribute__((__const__));
extern const char * strchrnul_P(const char *, int __val) __attribute__((__const__));
extern int strcmp_P(const char *, const char *) __attribute__((__pure__));
extern char *strcpy_P(char *, const char *);
extern int strcasecmp_P(const char *, const char *) __attribute__((__pure__));
extern char *strcasestr_P(const char *, const char *) __attribute__((__pure__));
extern size_t strcspn_P(const char *__s, const char * __reject) __attribute__((__pure__));
extern size_t strlcat_P (char *, const char *, size_t );
extern size_t strlcpy_P (char *, const char *, size_t );
extern size_t __strlen_P(const char *) __attribute__((__const__)); /* program memory can't change */
extern size_t strnlen_P(const char *, size_t) __attribute__((__const__)); /* program memory can't change */
extern int strncmp_P(const char *, const char *, size_t) __attribute__((__pure__));
extern int strncasecmp_P(const char *, const char *, size_t) __attribute__((__pure__));
extern char *strncat_P(char *, const char *, size_t);
extern char *strncpy_P(char *, const char *, size_t);
extern char *strpbrk_P(const char *__s, const char * __accept) __attribute__((__pure__));
extern const char * strrchr_P(const char *, int __val) __attribute__((__const__));
extern char *strsep_P(char **__sp, const char * __delim);
extern size_t strspn_P(const char *__s, const char * __accept) __attribute__((__pure__));
extern char *strstr_P(const char *, const char *) __attribute__((__pure__));
extern char *strtok_P(char *__s, const char * __delim);
extern char *strtok_rP(char *__s, const char * __delim, char **__last);

extern size_t strlen_PF (uint_farptr_t src) __attribute__((__const__)); /* program memory can't change */
extern size_t strnlen_PF (uint_farptr_t src, size_t len) __attribute__((__const__)); /* program memory can't change */
extern void *memcpy_PF (void *dest, uint_farptr_t src, size_t len);
extern char *strcpy_PF (char *dest, uint_farptr_t src);
extern char *strncpy_PF (char *dest, uint_farptr_t src, size_t len);
extern char *strcat_PF (char *dest, uint_farptr_t src);
extern size_t strlcat_PF (char *dst, uint_farptr_t src, size_t siz);
extern char *strncat_PF (char *dest, uint_farptr_t src, size_t len);
extern int strcmp_PF (const char *s1, uint_farptr_t s2) __attribute__((__pure__));
extern int strncmp_PF (const char *s1, uint_farptr_t s2, size_t n) __attribute__((__pure__));
extern int strcasecmp_PF (const char *s1, uint_farptr_t s2) __attribute__((__pure__));
extern int strncasecmp_PF (const char *s1, uint_farptr_t s2, size_t n) __attribute__((__pure__));
extern char *strstr_PF (const char *s1, uint_farptr_t s2);
extern size_t strlcpy_PF (char *dst, uint_farptr_t src, size_t siz);
extern int memcmp_PF(const void *, uint_farptr_t, size_t) __attribute__((__pure__));


__attribute__((__always_inline__)) static inline size_t strlen_P(const char * s);
static inline size_t strlen_P(const char *s) {
  return __builtin_constant_p(__builtin_strlen(s))
     ? __builtin_strlen(s) : __strlen_P(s);
}




}
# 29 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/
# 30 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\interrupt.h" 1 3
/* Copyright (c) 2002,2005,2007 Marek Michalkiewicz
   Copyright (c) 2007, Dean Camera

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/
# 39 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\interrupt.h" 2 3


/* Auxiliary macro for ISR_ALIAS(). */



/** 
\file 
\@{ 
*/


/** \name Global manipulation of the interrupt flag

    The global interrupt flag is maintained in the I bit of the status
    register (SREG).

    Handling interrupts frequently requires attention regarding atomic
    access to objects that could be altered by code running within an
    interrupt context, see <util/atomic.h>.

    Frequently, interrupts are being disabled for periods of time in
    order to perform certain operations without being disturbed; see
    \ref optim_code_reorder for things to be taken into account with
    respect to compiler optimizations.
*/
# 103 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\interrupt.h" 3
/** \name Macros for writing interrupt handler functions */
# 283 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\interrupt.h" 3
/** \name ISR attributes */
# 342 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\interrupt.h" 3
/* \@} */
# 31 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 2

# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/binary.h" 1
/*
  binary.h - Definitions for binary constants
  Copyright (c) 2006 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 33 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 2


extern "C"{


void yield(void);
# 79 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h"
// undefine stdlib's abs if encountered
# 108 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h"
// avr-libc defines _NOP() since 1.6.2




typedef unsigned int word;



typedef bool boolean;
typedef uint8_t byte;

void init(void);
void initVariant(void);

int atexit(void (*func)()) __attribute__((weak));

void pinMode(uint8_t, uint8_t);
void digitalWrite(uint8_t, uint8_t);
int digitalRead(uint8_t);
int analogRead(uint8_t);
void analogReference(uint8_t mode);
void analogWrite(uint8_t, int);

unsigned long millis(void);
unsigned long micros(void);
void delay(unsigned long);
void delayMicroseconds(unsigned int us);
unsigned long pulseIn(uint8_t pin, uint8_t state, unsigned long timeout);
unsigned long pulseInLong(uint8_t pin, uint8_t state, unsigned long timeout);

void shiftOut(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder, uint8_t val);
uint8_t shiftIn(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder);

void attachInterrupt(uint8_t, void (*)(void), int mode);
void detachInterrupt(uint8_t);

void setup(void);
void loop(void);

// Get the bit location within the hardware port of the given virtual pin.
// This comes from the pins_*.c file for the active board configuration.



// On the ATmega1280, the addresses of some of the port registers are
// greater than 255, so we can't store them in uint8_t's.
extern const uint16_t __attribute__((__progmem__)) port_to_mode_PGM[];
extern const uint16_t __attribute__((__progmem__)) port_to_input_PGM[];
extern const uint16_t __attribute__((__progmem__)) port_to_output_PGM[];

extern const uint8_t __attribute__((__progmem__)) digital_pin_to_port_PGM[];
// extern const uint8_t PROGMEM digital_pin_to_bit_PGM[];
extern const uint8_t __attribute__((__progmem__)) digital_pin_to_bit_mask_PGM[];
extern const uint8_t __attribute__((__progmem__)) digital_pin_to_timer_PGM[];

// Get the bit location within the hardware port of the given virtual pin.
// This comes from the pins_*.c file for the active board configuration.
// 
// These perform slightly better as macros compared to inline functions
//
# 218 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h"
} // extern "C"



# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/WCharacter.h" 1
/*
 WCharacter.h - Character utility functions for Wiring & Arduino
 Copyright (c) 2010 Hernando Barragan.  All right reserved.
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\ctype.h" 1 3
/* Copyright (c) 2002,2007 Michael Stumpf
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   ctype.h - character conversion macros and ctype macros

  Author : Michael Stumpf
           Michael.Stumpf@t-online.de
*/
# 48 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\ctype.h" 3
extern "C" {


/** \file */
/** \defgroup ctype <ctype.h>: Character Operations
    These functions perform various operations on characters.

    \code #include <ctype.h>\endcode 

*/

/** \name Character classification routines

    These functions perform character classification. They return true or
    false status depending whether the character passed to the function falls
    into the function's classification (i.e. isdigit() returns true if its
    argument is any value '0' though '9', inclusive). If the input is not
    an unsigned char value, all of this function return false.	*/

 /* @{ */

/** \ingroup ctype

    Checks for an alphanumeric character. It is equivalent to <tt>(isalpha(c)
    || isdigit(c))</tt>. */

extern int isalnum(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for an alphabetic character. It is equivalent to <tt>(isupper(c) ||
    islower(c))</tt>. */

extern int isalpha(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks whether \c c is a 7-bit unsigned char value that fits into the
    ASCII character set. */

extern int isascii(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a blank character, that is, a space or a tab. */

extern int isblank(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a control character. */

extern int iscntrl(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a digit (0 through 9). */

extern int isdigit(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for any printable character except space. */

extern int isgraph(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a lower-case character. */

extern int islower(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for any printable character including space. */

extern int isprint(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for any printable character which is not a space or an alphanumeric
    character. */

extern int ispunct(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for white-space characters.  For the avr-libc library, these are:
    space, form-feed ('\\f'), newline ('\\n'), carriage return ('\\r'),
    horizontal tab ('\\t'), and vertical tab ('\\v'). */

extern int isspace(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for an uppercase letter. */

extern int isupper(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a hexadecimal digits, i.e. one of 0 1 2 3 4 5 6 7 8 9 a b c d e
    f A B C D E F. */

extern int isxdigit(int __c) __attribute__((__const__));

/* @} */

/** \name Character convertion routines 

    This realization permits all possible values of integer argument.
    The toascii() function clears all highest bits. The tolower() and
    toupper() functions return an input argument as is, if it is not an
    unsigned char value.	*/

/* @{ */

/** \ingroup ctype

    Converts \c c to a 7-bit unsigned char value that fits into the ASCII
    character set, by clearing the high-order bits.

    \warning Many people will be unhappy if you use this function. This
    function will convert accented letters into random characters. */

extern int toascii(int __c) __attribute__((__const__));

/** \ingroup ctype

    Converts the letter \c c to lower case, if possible. */

extern int tolower(int __c) __attribute__((__const__));

/** \ingroup ctype

    Converts the letter \c c to upper case, if possible. */

extern int toupper(int __c) __attribute__((__const__));

/* @} */


}
# 24 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/WCharacter.h" 2

// WCharacter.h prototypes
inline boolean isAlphaNumeric(int c) __attribute__((always_inline));
inline boolean isAlpha(int c) __attribute__((always_inline));
inline boolean isAscii(int c) __attribute__((always_inline));
inline boolean isWhitespace(int c) __attribute__((always_inline));
inline boolean isControl(int c) __attribute__((always_inline));
inline boolean isDigit(int c) __attribute__((always_inline));
inline boolean isGraph(int c) __attribute__((always_inline));
inline boolean isLowerCase(int c) __attribute__((always_inline));
inline boolean isPrintable(int c) __attribute__((always_inline));
inline boolean isPunct(int c) __attribute__((always_inline));
inline boolean isSpace(int c) __attribute__((always_inline));
inline boolean isUpperCase(int c) __attribute__((always_inline));
inline boolean isHexadecimalDigit(int c) __attribute__((always_inline));
inline int toAscii(int c) __attribute__((always_inline));
inline int toLowerCase(int c) __attribute__((always_inline));
inline int toUpperCase(int c)__attribute__((always_inline));


// Checks for an alphanumeric character. 
// It is equivalent to (isalpha(c) || isdigit(c)).
inline boolean isAlphaNumeric(int c)
{
  return ( isalnum(c) == 0 ? false : true);
}


// Checks for an alphabetic character. 
// It is equivalent to (isupper(c) || islower(c)).
inline boolean isAlpha(int c)
{
  return ( isalpha(c) == 0 ? false : true);
}


// Checks whether c is a 7-bit unsigned char value 
// that fits into the ASCII character set.
inline boolean isAscii(int c)
{
  return ( isascii (c) == 0 ? false : true);
}


// Checks for a blank character, that is, a space or a tab.
inline boolean isWhitespace(int c)
{
  return ( isblank (c) == 0 ? false : true);
}


// Checks for a control character.
inline boolean isControl(int c)
{
  return ( iscntrl (c) == 0 ? false : true);
}


// Checks for a digit (0 through 9).
inline boolean isDigit(int c)
{
  return ( isdigit (c) == 0 ? false : true);
}


// Checks for any printable character except space.
inline boolean isGraph(int c)
{
  return ( isgraph (c) == 0 ? false : true);
}


// Checks for a lower-case character.
inline boolean isLowerCase(int c)
{
  return (islower (c) == 0 ? false : true);
}


// Checks for any printable character including space.
inline boolean isPrintable(int c)
{
  return ( isprint (c) == 0 ? false : true);
}


// Checks for any printable character which is not a space 
// or an alphanumeric character.
inline boolean isPunct(int c)
{
  return ( ispunct (c) == 0 ? false : true);
}


// Checks for white-space characters. For the avr-libc library, 
// these are: space, formfeed ('\f'), newline ('\n'), carriage 
// return ('\r'), horizontal tab ('\t'), and vertical tab ('\v').
inline boolean isSpace(int c)
{
  return ( isspace (c) == 0 ? false : true);
}


// Checks for an uppercase letter.
inline boolean isUpperCase(int c)
{
  return ( isupper (c) == 0 ? false : true);
}


// Checks for a hexadecimal digits, i.e. one of 0 1 2 3 4 5 6 7 
// 8 9 a b c d e f A B C D E F.
inline boolean isHexadecimalDigit(int c)
{
  return ( isxdigit (c) == 0 ? false : true);
}


// Converts c to a 7-bit unsigned char value that fits into the 
// ASCII character set, by clearing the high-order bits.
inline int toAscii(int c)
{
  return toascii (c);
}


// Warning:
// Many people will be unhappy if you use this function. 
// This function will convert accented letters into random 
// characters.

// Converts the letter c to lower case, if possible.
inline int toLowerCase(int c)
{
  return tolower (c);
}


// Converts the letter c to upper case, if possible.
inline int toUpperCase(int c)
{
  return toupper (c);
}
# 223 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/WString.h" 1
/*
  WString.h - String library for Wiring & Arduino
  ...mostly rewritten by Paul Stoffregen...
  Copyright (c) 2009-10 Hernando Barragan.  All right reserved.
  Copyright 2011, Paul Stoffregen, paul@pjrc.com

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdlib.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2007 Joerg Wunsch

   Portions of documentation Copyright (c) 1990, 1991, 1993, 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.

  $Id$
*/
# 27 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/WString.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\string.h" 1 3
/* Copyright (c) 2002,2007 Marek Michalkiewicz
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   string.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
 */
# 28 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/WString.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\ctype.h" 1 3
/* Copyright (c) 2002,2007 Michael Stumpf
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   ctype.h - character conversion macros and ctype macros

  Author : Michael Stumpf
           Michael.Stumpf@t-online.de
*/
# 29 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/WString.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 1 3
/* Copyright (c) 2002-2007  Marek Michalkiewicz
   Copyright (c) 2006, Carlos Lamas
   Copyright (c) 2009-2010, Jan Waclawek
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   pgmspace.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
     Eric B. Weddington <eric@ecentral.com>
     Wolfgang Haidinger <wh@vmars.tuwien.ac.at> (pgm_read_dword())
     Ivanov Anton <anton@arc.com.ru> (pgm_read_float())
 */

/** \file */
/** \defgroup avr_pgmspace <avr/pgmspace.h>: Program Space Utilities
    \code
    #include <avr/io.h>
    #include <avr/pgmspace.h>
    \endcode

    The functions in this module provide interfaces for a program to access
    data stored in program space (flash memory) of the device.  In order to
    use these functions, the target device must support either the \c LPM or
    \c ELPM instructions.

    \note These functions are an attempt to provide some compatibility with
    header files that come with IAR C, to make porting applications between
    different compilers easier.  This is not 100% compatibility though (GCC
    does not have full support for multiple address spaces yet).

    \note If you are working with strings which are completely based in ram,
    use the standard string functions described in \ref avr_string.

    \note If possible, put your constant tables in the lower 64 KB and use
    pgm_read_byte_near() or pgm_read_word_near() instead of
    pgm_read_byte_far() or pgm_read_word_far() since it is more efficient that
    way, and you can still use the upper 64K for executable code.
    All functions that are suffixed with a \c _P \e require their
    arguments to be in the lower 64 KB of the flash ROM, as they do
    not use ELPM instructions.  This is normally not a big concern as
    the linker setup arranges any program space constants declared
    using the macros from this header file so they are placed right after
    the interrupt vectors, and in front of any executable code.  However,
    it can become a problem if there are too many of these constants, or
    for bootloaders on devices with more than 64 KB of ROM.
    <em>All these functions will not work in that situation.</em>

    \note For <b>Xmega</b> devices, make sure the NVM controller
    command register (\c NVM.CMD or \c NVM_CMD) is set to 0x00 (NOP)
    before using any of these functions.
*/
# 30 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/WString.h" 2

// When compiling programs with this class, the following gcc parameters
// dramatically increase performance and memory (RAM) efficiency, typically
// with little or no increase in code size.
//     -felide-constructors
//     -std=c++0x

class __FlashStringHelper;


// An inherited class for holding the result of a concatenation.  These
// result objects are assumed to be writable by subsequent concatenations.
class StringSumHelper;

// The string class
class String
{
 // use a function pointer to allow for "if (s)" without the
 // complications of an operator bool(). for more information, see:
 // http://www.artima.com/cppsource/safebool.html
 typedef void (String::*StringIfHelperType)() const;
 void StringIfHelper() const {}

public:
 // constructors
 // creates a copy of the initial value.
 // if the initial value is null or invalid, or if memory allocation
 // fails, the string will be marked as invalid (i.e. "if (s)" will
 // be false).
 String(const char *cstr = "");
 String(const String &str);
 String(const __FlashStringHelper *str);

 String(String &&rval);
 String(StringSumHelper &&rval);

 explicit String(char c);
 explicit String(unsigned char, unsigned char base=10);
 explicit String(int, unsigned char base=10);
 explicit String(unsigned int, unsigned char base=10);
 explicit String(long, unsigned char base=10);
 explicit String(unsigned long, unsigned char base=10);
 explicit String(float, unsigned char decimalPlaces=2);
 explicit String(double, unsigned char decimalPlaces=2);
 ~String(void);

 // memory management
 // return true on success, false on failure (in which case, the string
 // is left unchanged).  reserve(0), if successful, will validate an
 // invalid string (i.e., "if (s)" will be true afterwards)
 unsigned char reserve(unsigned int size);
 inline unsigned int length(void) const {return len;}

 // creates a copy of the assigned value.  if the value is null or
 // invalid, or if the memory allocation fails, the string will be 
 // marked as invalid ("if (s)" will be false).
 String & operator = (const String &rhs);
 String & operator = (const char *cstr);
 String & operator = (const __FlashStringHelper *str);

 String & operator = (String &&rval);
 String & operator = (StringSumHelper &&rval);


 // concatenate (works w/ built-in types)

 // returns true on success, false on failure (in which case, the string
 // is left unchanged).  if the argument is null or invalid, the 
 // concatenation is considered unsucessful.  
 unsigned char concat(const String &str);
 unsigned char concat(const char *cstr);
 unsigned char concat(char c);
 unsigned char concat(unsigned char c);
 unsigned char concat(int num);
 unsigned char concat(unsigned int num);
 unsigned char concat(long num);
 unsigned char concat(unsigned long num);
 unsigned char concat(float num);
 unsigned char concat(double num);
 unsigned char concat(const __FlashStringHelper * str);

 // if there's not enough memory for the concatenated value, the string
 // will be left unchanged (but this isn't signalled in any way)
 String & operator += (const String &rhs) {concat(rhs); return (*this);}
 String & operator += (const char *cstr) {concat(cstr); return (*this);}
 String & operator += (char c) {concat(c); return (*this);}
 String & operator += (unsigned char num) {concat(num); return (*this);}
 String & operator += (int num) {concat(num); return (*this);}
 String & operator += (unsigned int num) {concat(num); return (*this);}
 String & operator += (long num) {concat(num); return (*this);}
 String & operator += (unsigned long num) {concat(num); return (*this);}
 String & operator += (float num) {concat(num); return (*this);}
 String & operator += (double num) {concat(num); return (*this);}
 String & operator += (const __FlashStringHelper *str){concat(str); return (*this);}

 friend StringSumHelper & operator + (const StringSumHelper &lhs, const String &rhs);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, const char *cstr);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, char c);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned char num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, int num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned int num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, long num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned long num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, float num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, double num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, const __FlashStringHelper *rhs);

 // comparison (only works w/ Strings and "strings")
 operator StringIfHelperType() const { return buffer ? &String::StringIfHelper : 0; }
 int compareTo(const String &s) const;
 unsigned char equals(const String &s) const;
 unsigned char equals(const char *cstr) const;
 unsigned char operator == (const String &rhs) const {return equals(rhs);}
 unsigned char operator == (const char *cstr) const {return equals(cstr);}
 unsigned char operator != (const String &rhs) const {return !equals(rhs);}
 unsigned char operator != (const char *cstr) const {return !equals(cstr);}
 unsigned char operator < (const String &rhs) const;
 unsigned char operator > (const String &rhs) const;
 unsigned char operator <= (const String &rhs) const;
 unsigned char operator >= (const String &rhs) const;
 unsigned char equalsIgnoreCase(const String &s) const;
 unsigned char startsWith( const String &prefix) const;
 unsigned char startsWith(const String &prefix, unsigned int offset) const;
 unsigned char endsWith(const String &suffix) const;

 // character acccess
 char charAt(unsigned int index) const;
 void setCharAt(unsigned int index, char c);
 char operator [] (unsigned int index) const;
 char& operator [] (unsigned int index);
 void getBytes(unsigned char *buf, unsigned int bufsize, unsigned int index=0) const;
 void toCharArray(char *buf, unsigned int bufsize, unsigned int index=0) const
  {getBytes((unsigned char *)buf, bufsize, index);}
 const char * c_str() const { return buffer; }

 // search
 int indexOf( char ch ) const;
 int indexOf( char ch, unsigned int fromIndex ) const;
 int indexOf( const String &str ) const;
 int indexOf( const String &str, unsigned int fromIndex ) const;
 int lastIndexOf( char ch ) const;
 int lastIndexOf( char ch, unsigned int fromIndex ) const;
 int lastIndexOf( const String &str ) const;
 int lastIndexOf( const String &str, unsigned int fromIndex ) const;
 String substring( unsigned int beginIndex ) const { return substring(beginIndex, len); };
 String substring( unsigned int beginIndex, unsigned int endIndex ) const;

 // modification
 void replace(char find, char replace);
 void replace(const String& find, const String& replace);
 void remove(unsigned int index);
 void remove(unsigned int index, unsigned int count);
 void toLowerCase(void);
 void toUpperCase(void);
 void trim(void);

 // parsing/conversion
 long toInt(void) const;
 float toFloat(void) const;

protected:
 char *buffer; // the actual char array
 unsigned int capacity; // the array length minus one (for the '\0')
 unsigned int len; // the String length (not counting the '\0')
protected:
 void init(void);
 void invalidate(void);
 unsigned char changeBuffer(unsigned int maxStrLen);
 unsigned char concat(const char *cstr, unsigned int length);

 // copy and move
 String & copy(const char *cstr, unsigned int length);
 String & copy(const __FlashStringHelper *pstr, unsigned int length);

 void move(String &rhs);

};

class StringSumHelper : public String
{
public:
 StringSumHelper(const String &s) : String(s) {}
 StringSumHelper(const char *p) : String(p) {}
 StringSumHelper(char c) : String(c) {}
 StringSumHelper(unsigned char num) : String(num) {}
 StringSumHelper(int num) : String(num) {}
 StringSumHelper(unsigned int num) : String(num) {}
 StringSumHelper(long num) : String(num) {}
 StringSumHelper(unsigned long num) : String(num) {}
 StringSumHelper(float num) : String(num) {}
 StringSumHelper(double num) : String(num) {}
};
# 224 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/HardwareSerial.h" 1
/*
  HardwareSerial.h - Hardware serial library for Wiring
  Copyright (c) 2006 Nicholas Zambetti.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  Modified 28 September 2010 by Mark Sproul
  Modified 14 August 2012 by Alarus
  Modified 3 December 2013 by Matthijs Kooijman
*/




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 28 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/HardwareSerial.h" 2

# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Stream.h" 1
/*
  Stream.h - base class for character-based streams.
  Copyright (c) 2010 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  parsing functions based on TextFinder library by Michael Margolis
*/




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 26 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Stream.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Print.h" 1
/*
  Print.h - Base class that provides print() and println()
  Copyright (c) 2008 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 24 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Print.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 1 3
/* Copyright (c) 2002, 2005, 2007 Joerg Wunsch
   All rights reserved.

   Portions of documentation Copyright (c) 1990, 1991, 1993
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.

  $Id$
*/






# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 45 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 2 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stdarg.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 36 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stdarg.h" 3 4
/* Define __gnuc_va_list.  */



typedef __builtin_va_list __gnuc_va_list;


/* Define the standard macros for the user,
   if this invocation was from the user program.  */
# 55 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stdarg.h" 3 4
/* Define va_list, if desired, from __gnuc_va_list. */
/* We deliberately do not define va_list when called from
   stdio.h, because ANSI C says that stdio.h is not supposed to define
   va_list.  stdio.h needs to have access to that data type, 
   but must not use that name.  It should use the name __gnuc_va_list,
   which is safe because it is reserved for the implementation.  */
# 85 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stdarg.h" 3 4
/* The macro _VA_LIST_ is the same thing used by this file in Ultrix.
   But on BSD NET2 we must not test or define or undef it.
   (Note that the comments in NET 2's ansi.h
   are incorrect for _VA_LIST_--see stdio.h!)  */

/* The macro _VA_LIST_DEFINED is used in Windows NT 3.5  */

/* The macro _VA_LIST is used in SCO Unix 3.2.  */

/* The macro _VA_LIST_T_H is used in the Bull dpx2  */

/* The macro __va_list__ is used by BeOS.  */

typedef __gnuc_va_list va_list;
# 46 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 2 3



# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 50 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 2 3

/** \file */
/** \defgroup avr_stdio <stdio.h>: Standard IO facilities
    \code #include <stdio.h> \endcode

    <h3>Introduction to the Standard IO facilities</h3>

    This file declares the standard IO facilities that are implemented
    in \c avr-libc.  Due to the nature of the underlying hardware,
    only a limited subset of standard IO is implemented.  There is no
    actual file implementation available, so only device IO can be
    performed.  Since there's no operating system, the application
    needs to provide enough details about their devices in order to
    make them usable by the standard IO facilities.

    Due to space constraints, some functionality has not been
    implemented at all (like some of the \c printf conversions that
    have been left out).  Nevertheless, potential users of this
    implementation should be warned: the \c printf and \c scanf families of functions, although
    usually associated with presumably simple things like the
    famous "Hello, world!" program, are actually fairly complex
    which causes their inclusion to eat up a fair amount of code space.
    Also, they are not fast due to the nature of interpreting the
    format string at run-time.  Whenever possible, resorting to the
    (sometimes non-standard) predetermined conversion facilities that are
    offered by avr-libc will usually cost much less in terms of speed
    and code size.

    <h3>Tunable options for code size vs. feature set</h3>

    In order to allow programmers a code size vs. functionality tradeoff,
    the function vfprintf() which is the heart of the printf family can be
    selected in different flavours using linker options.  See the
    documentation of vfprintf() for a detailed description.  The same
    applies to vfscanf() and the \c scanf family of functions.

    <h3>Outline of the chosen API</h3>

    The standard streams \c stdin, \c stdout, and \c stderr are
    provided, but contrary to the C standard, since avr-libc has no
    knowledge about applicable devices, these streams are not already
    pre-initialized at application startup.  Also, since there is no
    notion of "file" whatsoever to avr-libc, there is no function
    \c fopen() that could be used to associate a stream to some device.
    (See \ref stdio_note1 "note 1".)  Instead, the function \c fdevopen()
    is provided to associate a stream to a device, where the device
    needs to provide a function to send a character, to receive a
    character, or both.  There is no differentiation between "text" and
    "binary" streams inside avr-libc.  Character \c \\n is sent
    literally down to the device's \c put() function.  If the device
    requires a carriage return (\c \\r) character to be sent before
    the linefeed, its \c put() routine must implement this (see
    \ref stdio_note2 "note 2").

    As an alternative method to fdevopen(), the macro
    fdev_setup_stream() might be used to setup a user-supplied FILE
    structure.

    It should be noted that the automatic conversion of a newline
    character into a carriage return - newline sequence breaks binary
    transfers.  If binary transfers are desired, no automatic
    conversion should be performed, but instead any string that aims
    to issue a CR-LF sequence must use <tt>"\r\n"</tt> explicitly.

    For convenience, the first call to \c fdevopen() that opens a
    stream for reading will cause the resulting stream to be aliased
    to \c stdin.  Likewise, the first call to \c fdevopen() that opens
    a stream for writing will cause the resulting stream to be aliased
    to both, \c stdout, and \c stderr.  Thus, if the open was done
    with both, read and write intent, all three standard streams will
    be identical.  Note that these aliases are indistinguishable from
    each other, thus calling \c fclose() on such a stream will also
    effectively close all of its aliases (\ref stdio_note3 "note 3").

    It is possible to tie additional user data to a stream, using
    fdev_set_udata().  The backend put and get functions can then
    extract this user data using fdev_get_udata(), and act
    appropriately.  For example, a single put function could be used
    to talk to two different UARTs that way, or the put and get
    functions could keep internal state between calls there.

    <h3>Format strings in flash ROM</h3>

    All the \c printf and \c scanf family functions come in two flavours: the
    standard name, where the format string is expected to be in
    SRAM, as well as a version with the suffix "_P" where the format
    string is expected to reside in the flash ROM.  The macro
    \c PSTR (explained in \ref avr_pgmspace) becomes very handy
    for declaring these format strings.

    \anchor stdio_without_malloc
    <h3>Running stdio without malloc()</h3>

    By default, fdevopen() requires malloc().  As this is often
    not desired in the limited environment of a microcontroller, an
    alternative option is provided to run completely without malloc().

    The macro fdev_setup_stream() is provided to prepare a
    user-supplied FILE buffer for operation with stdio.

    <h4>Example</h4>

    \code
    #include <stdio.h>

    static int uart_putchar(char c, FILE *stream);

    static FILE mystdout = FDEV_SETUP_STREAM(uart_putchar, NULL,
                                             _FDEV_SETUP_WRITE);

    static int
    uart_putchar(char c, FILE *stream)
    {

      if (c == '\n')
        uart_putchar('\r', stream);
      loop_until_bit_is_set(UCSRA, UDRE);
      UDR = c;
      return 0;
    }

    int
    main(void)
    {
      init_uart();
      stdout = &mystdout;
      printf("Hello, world!\n");

      return 0;
    }
    \endcode

    This example uses the initializer form FDEV_SETUP_STREAM() rather
    than the function-like fdev_setup_stream(), so all data
    initialization happens during C start-up.

    If streams initialized that way are no longer needed, they can be
    destroyed by first calling the macro fdev_close(), and then
    destroying the object itself.  No call to fclose() should be
    issued for these streams.  While calling fclose() itself is
    harmless, it will cause an undefined reference to free() and thus
    cause the linker to link the malloc module into the application.

    <h3>Notes</h3>

    \anchor stdio_note1 \par Note 1:
    It might have been possible to implement a device abstraction that
    is compatible with \c fopen() but since this would have required
    to parse a string, and to take all the information needed either
    out of this string, or out of an additional table that would need to be
    provided by the application, this approach was not taken.

    \anchor stdio_note2 \par Note 2:
    This basically follows the Unix approach: if a device such as a
    terminal needs special handling, it is in the domain of the
    terminal device driver to provide this functionality.  Thus, a
    simple function suitable as \c put() for \c fdevopen() that talks
    to a UART interface might look like this:

    \code
    int
    uart_putchar(char c, FILE *stream)
    {

      if (c == '\n')
        uart_putchar('\r');
      loop_until_bit_is_set(UCSRA, UDRE);
      UDR = c;
      return 0;
    }
    \endcode

    \anchor stdio_note3 \par Note 3:
    This implementation has been chosen because the cost of maintaining
    an alias is considerably smaller than the cost of maintaining full
    copies of each stream.  Yet, providing an implementation that offers
    the complete set of standard streams was deemed to be useful.  Not
    only that writing \c printf() instead of <tt>fprintf(mystream, ...)</tt>
    saves typing work, but since avr-gcc needs to resort to pass all
    arguments of variadic functions on the stack (as opposed to passing
    them in registers for functions that take a fixed number of
    parameters), the ability to pass one parameter less by implying
    \c stdin or stdout will also save some execution time.
*/



/*
 * This is an internal structure of the library that is subject to be
 * changed without warnings at any time.  Please do *never* reference
 * elements of it beyond by using the official interfaces provided.
 */
struct __file {
 char *buf; /* buffer pointer */
 unsigned char unget; /* ungetc() buffer */
 uint8_t flags; /* flags, see below */
# 261 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 3
 int size; /* size of buffer */
 int len; /* characters read or written so far */
 int (*put)(char, struct __file *); /* function to write one char to device */
 int (*get)(struct __file *); /* function to read one char from device */
 void *udata; /* User defined and accessible data. */
};



/*@{*/
/**
   \c FILE is the opaque structure that is passed around between the
   various standard IO functions.
*/


/**
   Stream that will be used as an input stream by the simplified
   functions that don't take a \c stream argument.

   The first stream opened with read intent using \c fdevopen()
   will be assigned to \c stdin.
*/


/**
   Stream that will be used as an output stream by the simplified
   functions that don't take a \c stream argument.

   The first stream opened with write intent using \c fdevopen()
   will be assigned to both, \c stdin, and \c stderr.
*/


/**
   Stream destined for error output.  Unless specifically assigned,
   identical to \c stdout.

   If \c stderr should point to another stream, the result of
   another \c fdevopen() must be explicitly assigned to it without
   closing the previous \c stderr (since this would also close
   \c stdout).
*/


/**
   \c EOF declares the value that is returned by various standard IO
   functions in case of an error.  Since the AVR platform (currently)
   doesn't contain an abstraction for actual files, its origin as
   "end of file" is somewhat meaningless here.
*/


/** This macro inserts a pointer to user defined data into a FILE
    stream object.

    The user data can be useful for tracking state in the put and get
    functions supplied to the fdevopen() function. */


/** This macro retrieves a pointer to user defined data from a FILE
    stream object. */
# 361 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 3
/**
 * Return code for an error condition during device read.
 *
 * To be used in the get function of fdevopen().
 */


/**
 * Return code for an end-of-file condition during device read.
 *
 * To be used in the get function of fdevopen().
 */
# 397 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 3
extern "C" {



/*
 * Doxygen documentation can be found in fdevopen.c.
 */

extern struct __file *__iob[];
# 416 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 3
/* New prototype for avr-libc 1.4 and above. */
extern struct __file *fdevopen(int (*__put)(char, struct __file*), int (*__get)(struct __file*));




/**
   This function closes \c stream, and disallows and further
   IO to and from it.

   When using fdevopen() to setup the stream, a call to fclose() is
   needed in order to free the internal resources allocated.

   If the stream has been set up using fdev_setup_stream() or
   FDEV_SETUP_STREAM(), use fdev_close() instead.

   It currently always returns 0 (for success).
*/
extern int fclose(struct __file *__stream);

/**
   This macro frees up any library resources that might be associated
   with \c stream.  It should be called if \c stream is no longer
   needed, right before the application is going to destroy the
   \c stream object itself.

   (Currently, this macro evaluates to nothing, but this might change
   in future versions of the library.)
*/






/**
   \c vfprintf is the central facility of the \c printf family of
   functions.  It outputs values to \c stream under control of a
   format string passed in \c fmt.  The actual values to print are
   passed as a variable argument list \c ap.

   \c vfprintf returns the number of characters written to \c stream,
   or \c EOF in case of an error.  Currently, this will only happen
   if \c stream has not been opened with write intent.

   The format string is composed of zero or more directives: ordinary
   characters (not \c %), which are copied unchanged to the output
   stream; and conversion specifications, each of which results in
   fetching zero or more subsequent arguments.  Each conversion
   specification is introduced by the \c % character.  The arguments must
   properly correspond (after type promotion) with the conversion
   specifier.  After the \c %, the following appear in sequence:

   - Zero or more of the following flags:
      <ul>
      <li> \c # The value should be converted to an "alternate form".  For
            c, d, i, s, and u conversions, this option has no effect.
            For o conversions, the precision of the number is
            increased to force the first character of the output
            string to a zero (except if a zero value is printed with
            an explicit precision of zero).  For x and X conversions,
            a non-zero result has the string `0x' (or `0X' for X
            conversions) prepended to it.</li>
      <li> \c 0 (zero) Zero padding.  For all conversions, the converted
            value is padded on the left with zeros rather than blanks.
            If a precision is given with a numeric conversion (d, i,
            o, u, i, x, and X), the 0 flag is ignored.</li>
      <li> \c - A negative field width flag; the converted value is to be
            left adjusted on the field boundary.  The converted value
            is padded on the right with blanks, rather than on the
            left with blanks or zeros.  A - overrides a 0 if both are
            given.</li>
      <li> ' ' (space) A blank should be left before a positive number
            produced by a signed conversion (d, or i).</li>
      <li> \c + A sign must always be placed before a number produced by a
            signed conversion.  A + overrides a space if both are
            used.</li>
      </ul>
      
   -   An optional decimal digit string specifying a minimum field width.
       If the converted value has fewer characters than the field width, it
       will be padded with spaces on the left (or right, if the left-adjustment
       flag has been given) to fill out the field width.
   -   An optional precision, in the form of a period . followed by an
       optional digit string.  If the digit string is omitted, the
       precision is taken as zero.  This gives the minimum number of
       digits to appear for d, i, o, u, x, and X conversions, or the
       maximum number of characters to be printed from a string for \c s
       conversions.
   -   An optional \c l or \c h length modifier, that specifies that the
       argument for the d, i, o, u, x, or X conversion is a \c "long int"
       rather than \c int. The \c h is ignored, as \c "short int" is
       equivalent to \c int.
   -   A character that specifies the type of conversion to be applied.

   The conversion specifiers and their meanings are:

   - \c diouxX The int (or appropriate variant) argument is converted
           to signed decimal (d and i), unsigned octal (o), unsigned
           decimal (u), or unsigned hexadecimal (x and X) notation.
           The letters "abcdef" are used for x conversions; the
           letters "ABCDEF" are used for X conversions.  The
           precision, if any, gives the minimum number of digits that
           must appear; if the converted value requires fewer digits,
           it is padded on the left with zeros.
   - \c p  The <tt>void *</tt> argument is taken as an unsigned integer,
           and converted similarly as a <tt>%\#x</tt> command would do.
   - \c c  The \c int argument is converted to an \c "unsigned char", and the
           resulting character is written.
   - \c s  The \c "char *" argument is expected to be a pointer to an array
           of character type (pointer to a string).  Characters from
           the array are written up to (but not including) a
           terminating NUL character; if a precision is specified, no
           more than the number specified are written.  If a precision
           is given, no null character need be present; if the
           precision is not specified, or is greater than the size of
           the array, the array must contain a terminating NUL
           character.
   - \c %  A \c % is written.  No argument is converted.  The complete
           conversion specification is "%%".
   - \c eE The double argument is rounded and converted in the format
           \c "[-]d.ddde±dd" where there is one digit before the
           decimal-point character and the number of digits after it
           is equal to the precision; if the precision is missing, it
           is taken as 6; if the precision is zero, no decimal-point
           character appears.  An \e E conversion uses the letter \c 'E'
           (rather than \c 'e') to introduce the exponent.  The exponent
           always contains two digits; if the value is zero,
           the exponent is 00.
   - \c fF The double argument is rounded and converted to decimal notation
           in the format \c "[-]ddd.ddd", where the number of digits after the
           decimal-point character is equal to the precision specification.
           If the precision is missing, it is taken as 6; if the precision
           is explicitly zero, no decimal-point character appears.  If a
           decimal point appears, at least one digit appears before it.
   - \c gG The double argument is converted in style \c f or \c e (or
           \c F or \c E for \c G conversions).  The precision
           specifies the number of significant digits.  If the
           precision is missing, 6 digits are given; if the precision
           is zero, it is treated as 1.  Style \c e is used if the
           exponent from its conversion is less than -4 or greater
           than or equal to the precision.  Trailing zeros are removed
           from the fractional part of the result; a decimal point
           appears only if it is followed by at least one digit.
   - \c S  Similar to the \c s format, except the pointer is expected to
           point to a program-memory (ROM) string instead of a RAM string.

   In no case does a non-existent or small field width cause truncation of a
   numeric field; if the result of a conversion is wider than the field
   width, the field is expanded to contain the conversion result.

   Since the full implementation of all the mentioned features becomes
   fairly large, three different flavours of vfprintf() can be
   selected using linker options.  The default vfprintf() implements
   all the mentioned functionality except floating point conversions.
   A minimized version of vfprintf() is available that only implements
   the very basic integer and string conversion facilities, but only
   the \c # additional option can be specified using conversion
   flags (these flags are parsed correctly from the format
   specification, but then simply ignored).  This version can be
   requested using the following \ref gcc_minusW "compiler options":

   \code
   -Wl,-u,vfprintf -lprintf_min
   \endcode

   If the full functionality including the floating point conversions
   is required, the following options should be used:

   \code
   -Wl,-u,vfprintf -lprintf_flt -lm
   \endcode

   \par Limitations:
   - The specified width and precision can be at most 255.

   \par Notes:
   - For floating-point conversions, if you link default or minimized
     version of vfprintf(), the symbol \c ? will be output and double
     argument will be skiped. So you output below will not be crashed.
     For default version the width field and the "pad to left" ( symbol
     minus ) option will work in this case.
   - The \c hh length modifier is ignored (\c char argument is
     promouted to \c int). More exactly, this realization does not check
     the number of \c h symbols.
   - But the \c ll length modifier will to abort the output, as this
     realization does not operate \c long \c long arguments.
   - The variable width or precision field (an asterisk \c * symbol)
     is not realized and will to abort the output.

 */

extern int vfprintf(struct __file *__stream, const char *__fmt, va_list __ap);

/**
   Variant of \c vfprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int vfprintf_P(struct __file *__stream, const char *__fmt, va_list __ap);

/**
   The function \c fputc sends the character \c c (though given as type
   \c int) to \c stream.  It returns the character, or \c EOF in case
   an error occurred.
*/
extern int fputc(int __c, struct __file *__stream);



/* putc() function implementation, required by standard */
extern int putc(int __c, struct __file *__stream);

/* putchar() function implementation, required by standard */
extern int putchar(int __c);



/**
   The macro \c putc used to be a "fast" macro implementation with a
   functionality identical to fputc().  For space constraints, in
   \c avr-libc, it is just an alias for \c fputc.
*/


/**
   The macro \c putchar sends character \c c to \c stdout.
*/


/**
   The function \c printf performs formatted output to stream
   \c stdout.  See \c vfprintf() for details.
*/
extern int printf(const char *__fmt, ...);

/**
   Variant of \c printf() that uses a \c fmt string that resides
   in program memory.
*/
extern int printf_P(const char *__fmt, ...);

/**
   The function \c vprintf performs formatted output to stream
   \c stdout, taking a variable argument list as in vfprintf().

   See vfprintf() for details.
*/
extern int vprintf(const char *__fmt, va_list __ap);

/**
   Variant of \c printf() that sends the formatted characters
   to string \c s.
*/
extern int sprintf(char *__s, const char *__fmt, ...);

/**
   Variant of \c sprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int sprintf_P(char *__s, const char *__fmt, ...);

/**
   Like \c sprintf(), but instead of assuming \c s to be of infinite
   size, no more than \c n characters (including the trailing NUL
   character) will be converted to \c s.

   Returns the number of characters that would have been written to
   \c s if there were enough space.
*/
extern int snprintf(char *__s, size_t __n, const char *__fmt, ...);

/**
   Variant of \c snprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int snprintf_P(char *__s, size_t __n, const char *__fmt, ...);

/**
   Like \c sprintf() but takes a variable argument list for the
   arguments.
*/
extern int vsprintf(char *__s, const char *__fmt, va_list ap);

/**
   Variant of \c vsprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int vsprintf_P(char *__s, const char *__fmt, va_list ap);

/**
   Like \c vsprintf(), but instead of assuming \c s to be of infinite
   size, no more than \c n characters (including the trailing NUL
   character) will be converted to \c s.

   Returns the number of characters that would have been written to
   \c s if there were enough space.
*/
extern int vsnprintf(char *__s, size_t __n, const char *__fmt, va_list ap);

/**
   Variant of \c vsnprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int vsnprintf_P(char *__s, size_t __n, const char *__fmt, va_list ap);
/**
   The function \c fprintf performs formatted output to \c stream.
   See \c vfprintf() for details.
*/
extern int fprintf(struct __file *__stream, const char *__fmt, ...);

/**
   Variant of \c fprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int fprintf_P(struct __file *__stream, const char *__fmt, ...);

/**
   Write the string pointed to by \c str to stream \c stream.

   Returns 0 on success and EOF on error.
*/
extern int fputs(const char *__str, struct __file *__stream);

/**
   Variant of fputs() where \c str resides in program memory.
*/
extern int fputs_P(const char *__str, struct __file *__stream);

/**
   Write the string pointed to by \c str, and a trailing newline
   character, to \c stdout.
*/
extern int puts(const char *__str);

/**
   Variant of puts() where \c str resides in program memory.
*/
extern int puts_P(const char *__str);

/**
   Write \c nmemb objects, \c size bytes each, to \c stream.
   The first byte of the first object is referenced by \c ptr.

   Returns the number of objects successfully written, i. e.
   \c nmemb unless an output error occured.
 */
extern size_t fwrite(const void *__ptr, size_t __size, size_t __nmemb,
         struct __file *__stream);

/**
   The function \c fgetc reads a character from \c stream.  It returns
   the character, or \c EOF in case end-of-file was encountered or an
   error occurred.  The routines feof() or ferror() must be used to
   distinguish between both situations.
*/
extern int fgetc(struct __file *__stream);



/* getc() function implementation, required by standard */
extern int getc(struct __file *__stream);

/* getchar() function implementation, required by standard */
extern int getchar(void);



/**
   The macro \c getc used to be a "fast" macro implementation with a
   functionality identical to fgetc().  For space constraints, in
   \c avr-libc, it is just an alias for \c fgetc.
*/


/**
   The macro \c getchar reads a character from \c stdin.  Return
   values and error handling is identical to fgetc().
*/


/**
   The ungetc() function pushes the character \c c (converted to an
   unsigned char) back onto the input stream pointed to by \c stream.
   The pushed-back character will be returned by a subsequent read on
   the stream.

   Currently, only a single character can be pushed back onto the
   stream.
   
   The ungetc() function returns the character pushed back after the
   conversion, or \c EOF if the operation fails.  If the value of the
   argument \c c character equals \c EOF, the operation will fail and
   the stream will remain unchanged.
*/
extern int ungetc(int __c, struct __file *__stream);

/**
   Read at most <tt>size - 1</tt> bytes from \c stream, until a
   newline character was encountered, and store the characters in the
   buffer pointed to by \c str.  Unless an error was encountered while
   reading, the string will then be terminated with a \c NUL
   character.

   If an error was encountered, the function returns NULL and sets the
   error flag of \c stream, which can be tested using ferror().
   Otherwise, a pointer to the string will be returned.  */
extern char *fgets(char *__str, int __size, struct __file *__stream);

/**
   Similar to fgets() except that it will operate on stream \c stdin,
   and the trailing newline (if any) will not be stored in the string.
   It is the caller's responsibility to provide enough storage to hold
   the characters read.  */
extern char *gets(char *__str);

/**
   Read \c nmemb objects, \c size bytes each, from \c stream,
   to the buffer pointed to by \c ptr.

   Returns the number of objects successfully read, i. e.
   \c nmemb unless an input error occured or end-of-file was
   encountered.  feof() and ferror() must be used to distinguish
   between these two conditions.
 */
extern size_t fread(void *__ptr, size_t __size, size_t __nmemb,
        struct __file *__stream);

/**
   Clear the error and end-of-file flags of \c stream.
 */
extern void clearerr(struct __file *__stream);


/* fast inlined version of clearerr() */



/**
   Test the end-of-file flag of \c stream.  This flag can only be cleared
   by a call to clearerr().
 */
extern int feof(struct __file *__stream);


/* fast inlined version of feof() */



/**
   Test the error flag of \c stream.  This flag can only be cleared
   by a call to clearerr().
 */
extern int ferror(struct __file *__stream);


/* fast inlined version of ferror() */



extern int vfscanf(struct __file *__stream, const char *__fmt, va_list __ap);

/**
   Variant of vfscanf() using a \c fmt string in program memory.
 */
extern int vfscanf_P(struct __file *__stream, const char *__fmt, va_list __ap);

/**
   The function \c fscanf performs formatted input, reading the
   input data from \c stream.

   See vfscanf() for details.
 */
extern int fscanf(struct __file *__stream, const char *__fmt, ...);

/**
   Variant of fscanf() using a \c fmt string in program memory.
 */
extern int fscanf_P(struct __file *__stream, const char *__fmt, ...);

/**
   The function \c scanf performs formatted input from stream \c stdin.

   See vfscanf() for details.
 */
extern int scanf(const char *__fmt, ...);

/**
   Variant of scanf() where \c fmt resides in program memory.
 */
extern int scanf_P(const char *__fmt, ...);

/**
   The function \c vscanf performs formatted input from stream
   \c stdin, taking a variable argument list as in vfscanf().

   See vfscanf() for details.
*/
extern int vscanf(const char *__fmt, va_list __ap);

/**
   The function \c sscanf performs formatted input, reading the
   input data from the buffer pointed to by \c buf.

   See vfscanf() for details.
 */
extern int sscanf(const char *__buf, const char *__fmt, ...);

/**
   Variant of sscanf() using a \c fmt string in program memory.
 */
extern int sscanf_P(const char *__buf, const char *__fmt, ...);
# 938 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 3
static __inline__ int fflush(struct __file *stream __attribute__((unused)))
{
 return 0;
}



}


/*@}*/

/*
 * The following constants are currently not used by avr-libc's
 * stdio subsystem.  They are defined here since the gcc build
 * environment expects them to be here.
 */
# 25 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Print.h" 2

# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/WString.h" 1
/*
  WString.h - String library for Wiring & Arduino
  ...mostly rewritten by Paul Stoffregen...
  Copyright (c) 2009-10 Hernando Barragan.  All right reserved.
  Copyright 2011, Paul Stoffregen, paul@pjrc.com

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 27 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Print.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Printable.h" 1
/*
  Printable.h - Interface class that allows printing of complex types
  Copyright (c) 2011 Adrian McEwen.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdlib.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2007 Joerg Wunsch

   Portions of documentation Copyright (c) 1990, 1991, 1993, 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.

  $Id$
*/
# 24 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Printable.h" 2

class Print;

/** The Printable class provides a way for new classes to allow themselves to be printed.
    By deriving from Printable and implementing the printTo method, it will then be possible
    for users to print out instances of this class by passing them into the usual
    Print::print and Print::println methods.
*/

class Printable
{
  public:
    virtual size_t printTo(Print& p) const = 0;
};
# 28 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Print.h" 2






class Print
{
  private:
    int write_error;
    size_t printNumber(unsigned long, uint8_t);
    size_t printFloat(double, uint8_t);
  protected:
    void setWriteError(int err = 1) { write_error = err; }
  public:
    Print() : write_error(0) {}

    int getWriteError() { return write_error; }
    void clearWriteError() { setWriteError(0); }

    virtual size_t write(uint8_t) = 0;
    size_t write(const char *str) {
      if (str == __null) return 0;
      return write((const uint8_t *)str, strlen(str));
    }
    virtual size_t write(const uint8_t *buffer, size_t size);
    size_t write(const char *buffer, size_t size) {
      return write((const uint8_t *)buffer, size);
    }

    size_t print(const __FlashStringHelper *);
    size_t print(const String &);
    size_t print(const char[]);
    size_t print(char);
    size_t print(unsigned char, int = 10);
    size_t print(int, int = 10);
    size_t print(unsigned int, int = 10);
    size_t print(long, int = 10);
    size_t print(unsigned long, int = 10);
    size_t print(double, int = 2);
    size_t print(const Printable&);

    size_t println(const __FlashStringHelper *);
    size_t println(const String &s);
    size_t println(const char[]);
    size_t println(char);
    size_t println(unsigned char, int = 10);
    size_t println(int, int = 10);
    size_t println(unsigned int, int = 10);
    size_t println(long, int = 10);
    size_t println(unsigned long, int = 10);
    size_t println(double, int = 2);
    size_t println(const Printable&);
    size_t println(void);
};
# 27 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Stream.h" 2

// compatability macros for testing
/*
#define   getInt()            parseInt()
#define   getInt(ignore)    parseInt(ignore)
#define   getFloat()          parseFloat()
#define   getFloat(ignore)  parseFloat(ignore)
#define   getString( pre_string, post_string, buffer, length)
readBytesBetween( pre_string, terminator, buffer, length)
*/

// This enumeration provides the lookahead options for parseInt(), parseFloat()
// The rules set out here are used until either the first valid character is found
// or a time out occurs due to lack of input.
enum LookaheadMode{
    SKIP_ALL, // All invalid characters are ignored.
    SKIP_NONE, // Nothing is skipped, and the stream is not touched unless the first waiting character is valid.
    SKIP_WHITESPACE // Only tabs, spaces, line feeds & carriage returns are skipped.
};



class Stream : public Print
{
  protected:
    unsigned long _timeout; // number of milliseconds to wait for the next char before aborting timed read
    unsigned long _startMillis; // used for timeout measurement
    int timedRead(); // private method to read stream with timeout
    int timedPeek(); // private method to peek stream with timeout
    int peekNextDigit(LookaheadMode lookahead, bool detectDecimal); // returns the next numeric digit in the stream or -1 if timeout

  public:
    virtual int available() = 0;
    virtual int read() = 0;
    virtual int peek() = 0;
    virtual void flush() = 0;

    Stream() {_timeout=1000;}

// parsing methods

  void setTimeout(unsigned long timeout); // sets maximum milliseconds to wait for stream data, default is 1 second

  bool find(char *target); // reads data from the stream until the target string is found
  bool find(uint8_t *target) { return find ((char *)target); }
  // returns true if target string is found, false if timed out (see setTimeout)

  bool find(char *target, size_t length); // reads data from the stream until the target string of given length is found
  bool find(uint8_t *target, size_t length) { return find ((char *)target, length); }
  // returns true if target string is found, false if timed out

  bool find(char target) { return find (&target, 1); }

  bool findUntil(char *target, char *terminator); // as find but search ends if the terminator string is found
  bool findUntil(uint8_t *target, char *terminator) { return findUntil((char *)target, terminator); }

  bool findUntil(char *target, size_t targetLen, char *terminate, size_t termLen); // as above but search ends if the terminate string is found
  bool findUntil(uint8_t *target, size_t targetLen, char *terminate, size_t termLen) {return findUntil((char *)target, targetLen, terminate, termLen); }

  long parseInt(LookaheadMode lookahead = SKIP_ALL, char ignore = '\x01' /* a char not found in a valid ASCII numeric field*/);
  // returns the first valid (long) integer value from the current position.
  // lookahead determines how parseInt looks ahead in the stream.
  // See LookaheadMode enumeration at the top of the file.
  // Lookahead is terminated by the first character that is not a valid part of an integer.
  // Once parsing commences, 'ignore' will be skipped in the stream.

  float parseFloat(LookaheadMode lookahead = SKIP_ALL, char ignore = '\x01' /* a char not found in a valid ASCII numeric field*/);
  // float version of parseInt

  size_t readBytes( char *buffer, size_t length); // read chars from stream into buffer
  size_t readBytes( uint8_t *buffer, size_t length) { return readBytes((char *)buffer, length); }
  // terminates if length characters have been read or timeout (see setTimeout)
  // returns the number of characters placed in the buffer (0 means no valid data found)

  size_t readBytesUntil( char terminator, char *buffer, size_t length); // as readBytes with terminator character
  size_t readBytesUntil( char terminator, uint8_t *buffer, size_t length) { return readBytesUntil(terminator, (char *)buffer, length); }
  // terminates if length characters have been read, timeout, or if the terminator character  detected
  // returns the number of characters placed in the buffer (0 means no valid data found)

  // Arduino String functions to be added here
  String readString();
  String readStringUntil(char terminator);

  protected:
  long parseInt(char ignore) { return parseInt(SKIP_ALL, ignore); }
  float parseFloat(char ignore) { return parseFloat(SKIP_ALL, ignore); }
  // These overload exists for compatibility with any class that has derived
  // Stream and used parseFloat/Int with a custom ignore character. To keep
  // the public API simple, these overload remains protected.

  struct MultiTarget {
    const char *str; // string you're searching for
    size_t len; // length of string you're searching for
    size_t index; // index used by the search routine.
  };

  // This allows you to search for an arbitrary number of strings.
  // Returns index of the target that is found first or -1 if timeout occurs.
  int findMulti(struct MultiTarget *targets, int tCount);
};
# 30 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/HardwareSerial.h" 2

// Define constants and variables for buffering incoming serial data.  We're
// using a ring buffer (I think), in which head is the index of the location
// to which to write the next incoming character and tail is the index of the
// location from which to read.
// NOTE: a "power of 2" buffer size is reccomended to dramatically
//       optimize all the modulo operations for ring buffers.
// WARNING: When buffer sizes are increased to > 256, the buffer index
// variables are automatically increased in size, but the extra
// atomicity guards needed for that are not implemented. This will
// often work, but occasionally a race condition can occur that makes
// Serial behave erratically. See https://github.com/arduino/Arduino/issues/2405
# 59 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/HardwareSerial.h"
typedef uint8_t tx_buffer_index_t;




typedef uint8_t rx_buffer_index_t;


// Define config for Serial.begin(baud, config);
# 93 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/HardwareSerial.h"
class HardwareSerial : public Stream
{
  protected:
    volatile uint8_t * const _ubrrh;
    volatile uint8_t * const _ubrrl;
    volatile uint8_t * const _ucsra;
    volatile uint8_t * const _ucsrb;
    volatile uint8_t * const _ucsrc;
    volatile uint8_t * const _udr;
    // Has any byte been written to the UART since begin()
    bool _written;

    volatile rx_buffer_index_t _rx_buffer_head;
    volatile rx_buffer_index_t _rx_buffer_tail;
    volatile tx_buffer_index_t _tx_buffer_head;
    volatile tx_buffer_index_t _tx_buffer_tail;

    // Don't put any members after these buffers, since only the first
    // 32 bytes of this struct can be accessed quickly using the ldd
    // instruction.
    unsigned char _rx_buffer[64];
    unsigned char _tx_buffer[64];

  public:
    inline HardwareSerial(
      volatile uint8_t *ubrrh, volatile uint8_t *ubrrl,
      volatile uint8_t *ucsra, volatile uint8_t *ucsrb,
      volatile uint8_t *ucsrc, volatile uint8_t *udr);
    void begin(unsigned long baud) { begin(baud, 0x06); }
    void begin(unsigned long, uint8_t);
    void end();
    virtual int available(void);
    virtual int peek(void);
    virtual int read(void);
    int availableForWrite(void);
    virtual void flush(void);
    virtual size_t write(uint8_t);
    inline size_t write(unsigned long n) { return write((uint8_t)n); }
    inline size_t write(long n) { return write((uint8_t)n); }
    inline size_t write(unsigned int n) { return write((uint8_t)n); }
    inline size_t write(int n) { return write((uint8_t)n); }
    using Print::write; // pull in write(str) and write(buf, size) from Print
    operator bool() { return true; }

    // Interrupt handlers - Not intended to be called externally
    inline void _rx_complete_irq(void);
    void _tx_udr_empty_irq(void);
};


  extern HardwareSerial Serial;
# 159 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/HardwareSerial.h"
extern void serialEventRun(void) __attribute__((weak));
# 225 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/USBAPI.h" 1
/*
  USBAPI.h
  Copyright (c) 2005-2014 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 24 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/USBAPI.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 1 3
/* Copyright (c) 2002-2007  Marek Michalkiewicz
   Copyright (c) 2006, Carlos Lamas
   Copyright (c) 2009-2010, Jan Waclawek
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   pgmspace.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
     Eric B. Weddington <eric@ecentral.com>
     Wolfgang Haidinger <wh@vmars.tuwien.ac.at> (pgm_read_dword())
     Ivanov Anton <anton@arc.com.ru> (pgm_read_float())
 */

/** \file */
/** \defgroup avr_pgmspace <avr/pgmspace.h>: Program Space Utilities
    \code
    #include <avr/io.h>
    #include <avr/pgmspace.h>
    \endcode

    The functions in this module provide interfaces for a program to access
    data stored in program space (flash memory) of the device.  In order to
    use these functions, the target device must support either the \c LPM or
    \c ELPM instructions.

    \note These functions are an attempt to provide some compatibility with
    header files that come with IAR C, to make porting applications between
    different compilers easier.  This is not 100% compatibility though (GCC
    does not have full support for multiple address spaces yet).

    \note If you are working with strings which are completely based in ram,
    use the standard string functions described in \ref avr_string.

    \note If possible, put your constant tables in the lower 64 KB and use
    pgm_read_byte_near() or pgm_read_word_near() instead of
    pgm_read_byte_far() or pgm_read_word_far() since it is more efficient that
    way, and you can still use the upper 64K for executable code.
    All functions that are suffixed with a \c _P \e require their
    arguments to be in the lower 64 KB of the flash ROM, as they do
    not use ELPM instructions.  This is normally not a big concern as
    the linker setup arranges any program space constants declared
    using the macros from this header file so they are placed right after
    the interrupt vectors, and in front of any executable code.  However,
    it can become a problem if there are too many of these constants, or
    for bootloaders on devices with more than 64 KB of ROM.
    <em>All these functions will not work in that situation.</em>

    \note For <b>Xmega</b> devices, make sure the NVM controller
    command register (\c NVM.CMD or \c NVM_CMD) is set to 0x00 (NOP)
    before using any of these functions.
*/
# 25 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/USBAPI.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\eeprom.h" 1 3
/* Copyright (c) 2002, 2003, 2004, 2007 Marek Michalkiewicz
   Copyright (c) 2005, 2006 Bjoern Haase
   Copyright (c) 2008 Atmel Corporation
   Copyright (c) 2008 Wouter van Gulik
   Copyright (c) 2009 Dmitry Xmelkov
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/
# 39 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\eeprom.h" 2 3
# 570 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\eeprom.h" 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */





/* snaroff@next.com says the NeXT needs this.  */




/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 147 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
typedef int ptrdiff_t;
# 157 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 412 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */






/* Type whose alignment is supported in every context and is at least
   as great as that of any standard type not using alignment
   specifiers.  */
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;






  typedef decltype(nullptr) nullptr_t;
# 571 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\eeprom.h" 2 3


/** \defgroup avr_eeprom <avr/eeprom.h>: EEPROM handling
    \code #include <avr/eeprom.h> \endcode

    This header file declares the interface to some simple library
    routines suitable for handling the data EEPROM contained in the
    AVR microcontrollers.  The implementation uses a simple polled
    mode interface.  Applications that require interrupt-controlled
    EEPROM access to ensure that no time will be wasted in spinloops
    will have to deploy their own implementation.

    \par Notes:

    - In addition to the write functions there is a set of update ones.
    This functions read each byte first and skip the burning if the
    old value is the same with new.  The scaning direction is from
    high address to low, to obtain quick return in common cases.

    - All of the read/write functions first make sure the EEPROM is
    ready to be accessed.  Since this may cause long delays if a
    write operation is still pending, time-critical applications
    should first poll the EEPROM e. g. using eeprom_is_ready() before
    attempting any actual I/O.  But this functions are not wait until
    SELFPRGEN in SPMCSR becomes zero.  Do this manually, if your
    softwate contains the Flash burning.

    - As these functions modify IO registers, they are known to be
    non-reentrant.  If any of these functions are used from both,
    standard and interrupt context, the applications must ensure
    proper protection (e.g. by disabling interrupts before accessing
    them).

    - All write functions force erase_and_write programming mode.
    
    - For Xmega the EEPROM start address is 0, like other architectures.
    The reading functions add the 0x2000 value to use EEPROM mapping into
    data space.
 */


extern "C" {
# 623 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\eeprom.h" 3
/** \def EEMEM
    \ingroup avr_eeprom
    Attribute expression causing a variable to be allocated within the
    .eeprom section.	*/


/** \def eeprom_is_ready
    \ingroup avr_eeprom
    \returns 1 if EEPROM is ready for a new read/write operation, 0 if not.
 */
# 646 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\eeprom.h" 3
/** \def eeprom_busy_wait
    \ingroup avr_eeprom
    Loops until the eeprom is no longer busy.
    \returns Nothing.
 */



/** \ingroup avr_eeprom
    Read one byte from EEPROM address \a __p.
 */
uint8_t __eerd_byte_m328p (const uint8_t *__p) __attribute__((__pure__));

/** \ingroup avr_eeprom
    Read one 16-bit word (little endian) from EEPROM address \a __p.
 */
uint16_t __eerd_word_m328p (const uint16_t *__p) __attribute__((__pure__));

/** \ingroup avr_eeprom
    Read one 32-bit double word (little endian) from EEPROM address \a __p.
 */
uint32_t __eerd_dword_m328p (const uint32_t *__p) __attribute__((__pure__));

/** \ingroup avr_eeprom
    Read one float value (little endian) from EEPROM address \a __p.
 */
float __eerd_float_m328p (const float *__p) __attribute__((__pure__));

/** \ingroup avr_eeprom
    Read a block of \a __n bytes from EEPROM address \a __src to SRAM
    \a __dst.
 */
void __eerd_block_m328p (void *__dst, const void *__src, size_t __n);


/** \ingroup avr_eeprom
    Write a byte \a __value to EEPROM address \a __p.
 */
void __eewr_byte_m328p (uint8_t *__p, uint8_t __value);

/** \ingroup avr_eeprom
    Write a word \a __value to EEPROM address \a __p.
 */
void __eewr_word_m328p (uint16_t *__p, uint16_t __value);

/** \ingroup avr_eeprom
    Write a 32-bit double word \a __value to EEPROM address \a __p.
 */
void __eewr_dword_m328p (uint32_t *__p, uint32_t __value);

/** \ingroup avr_eeprom
    Write a float \a __value to EEPROM address \a __p.
 */
void __eewr_float_m328p (float *__p, float __value);

/** \ingroup avr_eeprom
    Write a block of \a __n bytes to EEPROM address \a __dst from \a __src.
    \note The argument order is mismatch with common functions like strcpy().
 */
void __eewr_block_m328p (const void *__src, void *__dst, size_t __n);


/** \ingroup avr_eeprom
    Update a byte \a __value to EEPROM address \a __p.
 */
void __eeupd_byte_m328p (uint8_t *__p, uint8_t __value);

/** \ingroup avr_eeprom
    Update a word \a __value to EEPROM address \a __p.
 */
void __eeupd_word_m328p (uint16_t *__p, uint16_t __value);

/** \ingroup avr_eeprom
    Update a 32-bit double word \a __value to EEPROM address \a __p.
 */
void __eeupd_dword_m328p (uint32_t *__p, uint32_t __value);

/** \ingroup avr_eeprom
    Update a float \a __value to EEPROM address \a __p.
 */
void __eeupd_float_m328p (float *__p, float __value);

/** \ingroup avr_eeprom
    Update a block of \a __n bytes to EEPROM address \a __dst from \a __src.
    \note The argument order is mismatch with common functions like strcpy().
 */
void __eeupd_block_m328p (const void *__src, void *__dst, size_t __n);


/** \name IAR C compatibility defines	*/
/*@{*/

/** \def _EEPUT
    \ingroup avr_eeprom
    Write a byte to EEPROM. Compatibility define for IAR C.	*/


/** \def __EEPUT
    \ingroup avr_eeprom
    Write a byte to EEPROM. Compatibility define for IAR C.	*/


/** \def _EEGET
    \ingroup avr_eeprom
    Read a byte from EEPROM. Compatibility define for IAR C.	*/


/** \def __EEGET
    \ingroup avr_eeprom
    Read a byte from EEPROM. Compatibility define for IAR C.	*/


/*@}*/


}
# 26 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/USBAPI.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\interrupt.h" 1 3
/* Copyright (c) 2002,2005,2007 Marek Michalkiewicz
   Copyright (c) 2007, Dean Camera

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 27 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/USBAPI.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2007  Florin-Viorel Petrov
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 42 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 43 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 2 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay_basic.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2007 Joerg Wunsch
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 38 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay_basic.h" 2 3


static inline void _delay_loop_1(uint8_t __count) __attribute__((always_inline));
static inline void _delay_loop_2(uint16_t __count) __attribute__((always_inline));


/** \file */
/** \defgroup util_delay_basic <util/delay_basic.h>: Basic busy-wait delay loops
    \code
    #include <util/delay_basic.h>
    \endcode

    The functions in this header file implement simple delay loops
    that perform a busy-waiting.  They are typically used to
    facilitate short delays in the program execution.  They are
    implemented as count-down loops with a well-known CPU cycle
    count per loop iteration.  As such, no other processing can
    occur simultaneously.  It should be kept in mind that the
    functions described here do not disable interrupts.

    In general, for long delays, the use of hardware timers is
    much preferrable, as they free the CPU, and allow for
    concurrent processing of other events while the timer is
    running.  However, in particular for very short delays, the
    overhead of setting up a hardware timer is too much compared
    to the overall delay time.

    Two inline functions are provided for the actual delay algorithms.

*/

/** \ingroup util_delay_basic

    Delay loop using an 8-bit counter \c __count, so up to 256
    iterations are possible.  (The value 256 would have to be passed
    as 0.)  The loop executes three CPU cycles per iteration, not
    including the overhead the compiler needs to setup the counter
    register.

    Thus, at a CPU speed of 1 MHz, delays of up to 768 microseconds
    can be achieved.
*/
void
_delay_loop_1(uint8_t __count)
{
 __asm__ volatile (
  "1: dec %0" "\n\t"
  "brne 1b"
  : "=r" (__count)
  : "0" (__count)
 );
}

/** \ingroup util_delay_basic

    Delay loop using a 16-bit counter \c __count, so up to 65536
    iterations are possible.  (The value 65536 would have to be
    passed as 0.)  The loop executes four CPU cycles per iteration,
    not including the overhead the compiler requires to setup the
    counter register pair.

    Thus, at a CPU speed of 1 MHz, delays of up to about 262.1
    milliseconds can be achieved.
 */
void
_delay_loop_2(uint16_t __count)
{
 __asm__ volatile (
  "1: sbiw %0,1" "\n\t"
  "brne 1b"
  : "=w" (__count)
  : "0" (__count)
 );
}
# 44 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 2 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\math.h" 1 3
/* Copyright (c) 2002,2007-2009 Michael Stumpf

   Portions of documentation Copyright (c) 1990 - 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   math.h - mathematical functions

   Author : Michael Stumpf
            Michael.Stumpf@t-online.de

   __ATTR_CONST__ added by marekm@linux.org.pl for functions
   that "do not examine any values except their arguments, and have
   no effects except the return value", for better optimization by gcc.
 */
# 45 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 2 3

/** \file */
/** \defgroup util_delay <util/delay.h>: Convenience functions for busy-wait delay loops
    \code
    #define F_CPU 1000000UL  // 1 MHz
    //#define F_CPU 14.7456E6
    #include <util/delay.h>
    \endcode

    \note As an alternative method, it is possible to pass the
    F_CPU macro down to the compiler from the Makefile.
    Obviously, in that case, no \c \#define statement should be
    used.

    The functions in this header file are wrappers around the basic
    busy-wait functions from <util/delay_basic.h>.  They are meant as
    convenience functions where actual time values can be specified
    rather than a number of cycles to wait for.  The idea behind is
    that compile-time constant expressions will be eliminated by
    compiler optimization so floating-point expressions can be used
    to calculate the number of delay cycles needed based on the CPU
    frequency passed by the macro F_CPU.

    \note In order for these functions to work as intended, compiler
    optimizations <em>must</em> be enabled, and the delay time
    <em>must</em> be an expression that is a known constant at
    compile-time.  If these requirements are not met, the resulting
    delay will be much longer (and basically unpredictable), and
    applications that otherwise do not use floating-point calculations
    will experience severe code bloat by the floating-point library
    routines linked into the application.

    The functions available allow the specification of microsecond, and
    millisecond delays directly, using the application-supplied macro
    F_CPU as the CPU clock frequency (in Hertz).

*/


static inline void _delay_us(double __us) __attribute__((always_inline));
static inline void _delay_ms(double __ms) __attribute__((always_inline));
# 101 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\math.h" 1 3
/* Copyright (c) 2002,2007-2009 Michael Stumpf

   Portions of documentation Copyright (c) 1990 - 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   math.h - mathematical functions

   Author : Michael Stumpf
            Michael.Stumpf@t-online.de

   __ATTR_CONST__ added by marekm@linux.org.pl for functions
   that "do not examine any values except their arguments, and have
   no effects except the return value", for better optimization by gcc.
 */
# 102 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 2 3


/**
   \ingroup util_delay

   Perform a delay of \c __ms milliseconds, using _delay_loop_2().

   The macro F_CPU is supposed to be defined to a
   constant defining the CPU clock frequency (in Hertz).

   The maximal possible delay is 262.14 ms / F_CPU in MHz.

   When the user request delay which exceed the maximum possible one,
   _delay_ms() provides a decreased resolution functionality. In this
   mode _delay_ms() will work with a resolution of 1/10 ms, providing
   delays up to 6.5535 seconds (independent from CPU frequency).  The
   user will not be informed about decreased resolution.

   If the avr-gcc toolchain has __builtin_avr_delay_cycles(unsigned long)
   support, maximal possible delay is 4294967.295 ms/ F_CPU in MHz. For
   values greater than the maximal possible delay, overflows results in
   no delay i.e., 0ms.

   Conversion of __us into clock cycles may not always result in integer.
   By default, the clock cycles rounded up to next integer. This ensures that
   the user gets atleast __us microseconds of delay.

   Alternatively, user can define __DELAY_ROUND_DOWN__ and __DELAY_ROUND_CLOSEST__
   to round down and round to closest integer.

   Note: The new implementation of _delay_ms(double __ms) with 
    __builtin_avr_delay_cycles(unsigned long) support is not backward compatible. 
   User can define __DELAY_BACKWARD_COMPATIBLE__ to get a backward compatible delay.
   Also, the backward compatible
   algorithm will be chosen if the code is compiled in a <em>freestanding
   environment</em> (GCC option \c -ffreestanding), as the math functions
   required for rounding are not available to the compiler then.

 */
void
_delay_ms(double __ms)
{
 double __tmp ;



 uint32_t __ticks_dc;
 extern void __builtin_avr_delay_cycles(unsigned long);
 __tmp = ((16000000L) / 1e3) * __ms;
# 159 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 3
  //round up by default
  __ticks_dc = (uint32_t)(ceil(fabs(__tmp)));


 __builtin_avr_delay_cycles(__ticks_dc);
# 186 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 3
}

/**
   \ingroup util_delay

   Perform a delay of \c __us microseconds, using _delay_loop_1().

   The macro F_CPU is supposed to be defined to a
   constant defining the CPU clock frequency (in Hertz).

   The maximal possible delay is 768 us / F_CPU in MHz.

   If the user requests a delay greater than the maximal possible one,
   _delay_us() will automatically call _delay_ms() instead.  The user
   will not be informed about this case.

   If the avr-gcc toolchain has __builtin_avr_delay_cycles(unsigned long)
   support, maximal possible delay is 4294967.295 us/ F_CPU in MHz. For
   values greater than the maximal possible delay, overflow results in
   no delay i.e., 0us.
  
   Conversion of __us into clock cycles may not always result in integer.
   By default, the clock cycles rounded up to next integer. This ensures that
   the user gets atleast __us microseconds of delay.

   Alternatively, user can define __DELAY_ROUND_DOWN__ and __DELAY_ROUND_CLOSEST__
   to round down and round to closest integer.
 
   Note: The new implementation of _delay_us(double __us) with 
    __builtin_avr_delay_cycles(unsigned long) support is not backward compatible.
   User can define __DELAY_BACKWARD_COMPATIBLE__ to get a backward compatible delay.
   Also, the backward compatible
   algorithm will be chosen if the code is compiled in a <em>freestanding
   environment</em> (GCC option \c -ffreestanding), as the math functions
   required for rounding are not available to the compiler then.

 */
void
_delay_us(double __us)
{
 double __tmp ;



 uint32_t __ticks_dc;
 extern void __builtin_avr_delay_cycles(unsigned long);
 __tmp = ((16000000L) / 1e6) * __us;
# 241 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 3
  //round up by default
  __ticks_dc = (uint32_t)(ceil(fabs(__tmp)));


 __builtin_avr_delay_cycles(__ticks_dc);
# 268 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 3
}
# 28 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/USBAPI.h" 2

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;

# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 34 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/USBAPI.h" 2

// This definitions is usefull if you want to reduce the EP_SIZE to 16
// at the moment only 64 and 16 as EP_SIZE for all EPs are supported except the control endpoint
# 226 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 2




uint16_t makeWord(uint16_t w);
uint16_t makeWord(byte h, byte l);



unsigned long pulseIn(uint8_t pin, uint8_t state, unsigned long timeout = 1000000L);
unsigned long pulseInLong(uint8_t pin, uint8_t state, unsigned long timeout = 1000000L);

void tone(uint8_t _pin, unsigned int frequency, unsigned long duration = 0);
void noTone(uint8_t _pin);

// WMath prototypes
long random(long);
long random(long, long);
void randomSeed(unsigned long);
long map(long, long, long, long, long);



# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\variants\\standard/pins_arduino.h" 1
/*
  pins_arduino.h - Pin definition functions for Arduino
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2007 David A. Mellis

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA
*/




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 1 3
/* Copyright (c) 2002-2007  Marek Michalkiewicz
   Copyright (c) 2006, Carlos Lamas
   Copyright (c) 2009-2010, Jan Waclawek
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   pgmspace.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
     Eric B. Weddington <eric@ecentral.com>
     Wolfgang Haidinger <wh@vmars.tuwien.ac.at> (pgm_read_dword())
     Ivanov Anton <anton@arc.com.ru> (pgm_read_float())
 */

/** \file */
/** \defgroup avr_pgmspace <avr/pgmspace.h>: Program Space Utilities
    \code
    #include <avr/io.h>
    #include <avr/pgmspace.h>
    \endcode

    The functions in this module provide interfaces for a program to access
    data stored in program space (flash memory) of the device.  In order to
    use these functions, the target device must support either the \c LPM or
    \c ELPM instructions.

    \note These functions are an attempt to provide some compatibility with
    header files that come with IAR C, to make porting applications between
    different compilers easier.  This is not 100% compatibility though (GCC
    does not have full support for multiple address spaces yet).

    \note If you are working with strings which are completely based in ram,
    use the standard string functions described in \ref avr_string.

    \note If possible, put your constant tables in the lower 64 KB and use
    pgm_read_byte_near() or pgm_read_word_near() instead of
    pgm_read_byte_far() or pgm_read_word_far() since it is more efficient that
    way, and you can still use the upper 64K for executable code.
    All functions that are suffixed with a \c _P \e require their
    arguments to be in the lower 64 KB of the flash ROM, as they do
    not use ELPM instructions.  This is normally not a big concern as
    the linker setup arranges any program space constants declared
    using the macros from this header file so they are placed right after
    the interrupt vectors, and in front of any executable code.  However,
    it can become a problem if there are too many of these constants, or
    for bootloaders on devices with more than 64 KB of ROM.
    <em>All these functions will not work in that situation.</em>

    \note For <b>Xmega</b> devices, make sure the NVM controller
    command register (\c NVM.CMD or \c NVM_CMD) is set to 0x00 (NOP)
    before using any of these functions.
*/
# 27 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\variants\\standard/pins_arduino.h" 2
# 38 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\variants\\standard/pins_arduino.h"
static const uint8_t SS = 10;
static const uint8_t MOSI = 11;
static const uint8_t MISO = 12;
static const uint8_t SCK = 13;

static const uint8_t SDA = 18;
static const uint8_t SCL = 19;


static const uint8_t A0 = 14;
static const uint8_t A1 = 15;
static const uint8_t A2 = 16;
static const uint8_t A3 = 17;
static const uint8_t A4 = 18;
static const uint8_t A5 = 19;
static const uint8_t A6 = 20;
static const uint8_t A7 = 21;
# 218 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\variants\\standard/pins_arduino.h"
// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
# 250 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 2
# 2 "D:\\arduino_prg\\TFT\\Arduino_Demo_UNO-Mega2560\\Example05-ShowBMP\\ShowBMP\\build\\sketch\\ShowBMP.ino.cpp" 2
# 1 "D:\\arduino_prg\\TFT\\Arduino_Demo_UNO-Mega2560\\Example05-ShowBMP\\ShowBMP\\build\\sketch\\ShowBMP.ino.cpp"
# 1 "D:\\arduino_prg\\TFT\\Arduino_Demo_UNO-Mega2560\\Example05-ShowBMP\\ShowBMP\\ShowBMP.ino"
// IMPORTANT: Adafruit_TFTLCD LIBRARY MUST BE SPECIFICALLY
// CONFIGURED FOR EITHER THE TFT SHIELD OR THE BREAKOUT BOARD.
// SEE RELEVANT COMMENTS IN Adafruit_TFTLCD.h FOR SETUP.
//Technical support:goodtft@163.com

# 1 "C:\\Users\\user\\Documents\\Arduino\\libraries\\AdafruitGFXLibrarymaster/Adafruit_GFX.h" 1




# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 6 "C:\\Users\\user\\Documents\\Arduino\\libraries\\AdafruitGFXLibrarymaster/Adafruit_GFX.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Print.h" 1
/*
  Print.h - Base class that provides print() and println()
  Copyright (c) 2008 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 7 "C:\\Users\\user\\Documents\\Arduino\\libraries\\AdafruitGFXLibrarymaster/Adafruit_GFX.h" 2






class Adafruit_GFX : public Print {

 public:

  Adafruit_GFX(int16_t w, int16_t h); // Constructor

  // This MUST be defined by the subclass:
  virtual void drawPixel(int16_t x, int16_t y, uint16_t color) = 0;

  // These MAY be overridden by the subclass to provide device-specific
  // optimized code.  Otherwise 'generic' versions are used.
  virtual void
    drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color),
    drawFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color),
    drawFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color),
    drawRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color),
    fillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color),
    fillScreen(uint16_t color),
    invertDisplay(boolean i);

  // These exist only with Adafruit_GFX (no subclass overrides)
  void
    drawCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color),
    drawCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername,
      uint16_t color),
    fillCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color),
    fillCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername,
      int16_t delta, uint16_t color),
    drawTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
      int16_t x2, int16_t y2, uint16_t color),
    fillTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
      int16_t x2, int16_t y2, uint16_t color),
    drawRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h,
      int16_t radius, uint16_t color),
    fillRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h,
      int16_t radius, uint16_t color),
    drawBitmap(int16_t x, int16_t y, const uint8_t *bitmap,
      int16_t w, int16_t h, uint16_t color),
    drawBitmap(int16_t x, int16_t y, const uint8_t *bitmap,
      int16_t w, int16_t h, uint16_t color, uint16_t bg),
    drawXBitmap(int16_t x, int16_t y, const uint8_t *bitmap,
      int16_t w, int16_t h, uint16_t color),
    drawChar(int16_t x, int16_t y, unsigned char c, uint16_t color,
      uint16_t bg, uint8_t size),
    setCursor(int16_t x, int16_t y),
    setTextColor(uint16_t c),
    setTextColor(uint16_t c, uint16_t bg),
    setTextSize(uint8_t s),
    setTextWrap(boolean w),
    setRotation(uint8_t r);


  virtual size_t write(uint8_t);




  int16_t height(void) const;
  int16_t width(void) const;

  uint8_t getRotation(void) const;

 protected:
  const int16_t
    WIDTH, HEIGHT; // This is the 'raw' display w/h - never changes
  int16_t
    _width, _height, // Display w/h as modified by current rotation
    cursor_x, cursor_y;
  uint16_t
    textcolor, textbgcolor;
  uint8_t
    textsize,
    rotation;
  boolean
    wrap; // If set, 'wrap' text at right edge of display
};
# 7 "D:\\arduino_prg\\TFT\\Arduino_Demo_UNO-Mega2560\\Example05-ShowBMP\\ShowBMP\\ShowBMP.ino" 2
# 1 "C:\\Users\\user\\Documents\\Arduino\\libraries\\TFTLCD-Library/Adafruit_TFTLCD.h" 1
// IMPORTANT: SEE COMMENTS @ LINE 15 REGARDING SHIELD VS BREAKOUT BOARD USAGE.

// Graphics library by ladyada/adafruit with init code from Rossum
// MIT license





# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 11 "C:\\Users\\user\\Documents\\Arduino\\libraries\\TFTLCD-Library/Adafruit_TFTLCD.h" 2






// **** IF USING THE LCD BREAKOUT BOARD, COMMENT OUT THIS NEXT LINE. ****
// **** IF USING THE LCD SHIELD, LEAVE THE LINE ENABLED:             ****

//#define USE_ADAFRUIT_SHIELD_PINOUT 1

class Adafruit_TFTLCD : public Adafruit_GFX {

 public:

  Adafruit_TFTLCD(uint8_t cs, uint8_t cd, uint8_t wr, uint8_t rd, uint8_t rst);
  Adafruit_TFTLCD(void);

  void begin(uint16_t id = 0x9325);
  void drawPixel(int16_t x, int16_t y, uint16_t color);
  void drawFastHLine(int16_t x0, int16_t y0, int16_t w, uint16_t color);
  void drawFastVLine(int16_t x0, int16_t y0, int16_t h, uint16_t color);
  void fillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t c);
  void fillScreen(uint16_t color);
  void reset(void);
  void setRegisters8(uint8_t *ptr, uint8_t n);
  void setRegisters16(uint16_t *ptr, uint8_t n);
  void setRotation(uint8_t x);
       // These methods are public in order for BMP examples to work:
  void setAddrWindow(int x1, int y1, int x2, int y2);
  void pushColors(uint16_t *data, uint8_t len, boolean first);

  uint16_t color565(uint8_t r, uint8_t g, uint8_t b),
           readPixel(int16_t x, int16_t y),
           readID(void);
  uint32_t readReg(uint8_t r);

 private:

  void init(),
           // These items may have previously been defined as macros
           // in pin_magic.h.  If not, function versions are declared:

           write8(uint8_t value),


           setWriteDir(void),


           setReadDir(void),


           writeRegister8(uint8_t a, uint8_t d),


           writeRegister16(uint16_t a, uint16_t d),

    writeRegister24(uint8_t a, uint32_t d),
    writeRegister32(uint8_t a, uint32_t d),

           writeRegisterPair(uint8_t aH, uint8_t aL, uint16_t d),

           setLR(void),
           flood(uint16_t color, uint32_t len);
  uint8_t driver;


  uint8_t read8fn(void);






    volatile uint8_t *csPort , *cdPort , *wrPort , *rdPort;
 uint8_t csPinSet , cdPinSet , wrPinSet , rdPinSet ,
       csPinUnset, cdPinUnset, wrPinUnset, rdPinUnset,
       _reset;
# 98 "C:\\Users\\user\\Documents\\Arduino\\libraries\\TFTLCD-Library/Adafruit_TFTLCD.h"
};

// For compatibility with sketches written for older versions of library.
// Color function name was changed to 'color565' for parity with 2.2" LCD
// library.
# 8 "D:\\arduino_prg\\TFT\\Arduino_Demo_UNO-Mega2560\\Example05-ShowBMP\\ShowBMP\\ShowBMP.ino" 2
# 1 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/SD.h" 1
/*

 SD - a slightly more friendly wrapper for sdfatlib

 This library aims to expose a subset of SD card functionality
 in the form of a higher level "wrapper" object.

 License: GNU General Public License V3
          (Because sdfatlib is licensed with this.)

 (C) Copyright 2010 SparkFun Electronics

 */




# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 19 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/SD.h" 2

# 1 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h" 1
/* Arduino SdFat Library

 * Copyright (C) 2009 by William Greiman

 *

 * This file is part of the Arduino SdFat Library

 *

 * This Library is free software: you can redistribute it and/or modify

 * it under the terms of the GNU General Public License as published by

 * the Free Software Foundation, either version 3 of the License, or

 * (at your option) any later version.

 *

 * This Library is distributed in the hope that it will be useful,

 * but WITHOUT ANY WARRANTY; without even the implied warranty of

 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the

 * GNU General Public License for more details.

 *

 * You should have received a copy of the GNU General Public License

 * along with the Arduino SdFat Library.  If not, see

 * <http://www.gnu.org/licenses/>.

 */
# 22 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
/**

 * \file

 * SdFile and SdVolume classes

 */
# 27 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 1 3
/* Copyright (c) 2002-2007  Marek Michalkiewicz
   Copyright (c) 2006, Carlos Lamas
   Copyright (c) 2009-2010, Jan Waclawek
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   pgmspace.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
     Eric B. Weddington <eric@ecentral.com>
     Wolfgang Haidinger <wh@vmars.tuwien.ac.at> (pgm_read_dword())
     Ivanov Anton <anton@arc.com.ru> (pgm_read_float())
 */

/** \file */
/** \defgroup avr_pgmspace <avr/pgmspace.h>: Program Space Utilities
    \code
    #include <avr/io.h>
    #include <avr/pgmspace.h>
    \endcode

    The functions in this module provide interfaces for a program to access
    data stored in program space (flash memory) of the device.  In order to
    use these functions, the target device must support either the \c LPM or
    \c ELPM instructions.

    \note These functions are an attempt to provide some compatibility with
    header files that come with IAR C, to make porting applications between
    different compilers easier.  This is not 100% compatibility though (GCC
    does not have full support for multiple address spaces yet).

    \note If you are working with strings which are completely based in ram,
    use the standard string functions described in \ref avr_string.

    \note If possible, put your constant tables in the lower 64 KB and use
    pgm_read_byte_near() or pgm_read_word_near() instead of
    pgm_read_byte_far() or pgm_read_word_far() since it is more efficient that
    way, and you can still use the upper 64K for executable code.
    All functions that are suffixed with a \c _P \e require their
    arguments to be in the lower 64 KB of the flash ROM, as they do
    not use ELPM instructions.  This is normally not a big concern as
    the linker setup arranges any program space constants declared
    using the macros from this header file so they are placed right after
    the interrupt vectors, and in front of any executable code.  However,
    it can become a problem if there are too many of these constants, or
    for bootloaders on devices with more than 64 KB of ROM.
    <em>All these functions will not work in that situation.</em>

    \note For <b>Xmega</b> devices, make sure the NVM controller
    command register (\c NVM.CMD or \c NVM_CMD) is set to 0x00 (NOP)
    before using any of these functions.
*/
# 28 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h" 2

# 1 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2Card.h" 1
/* Arduino Sd2Card Library

 * Copyright (C) 2009 by William Greiman

 *

 * This file is part of the Arduino Sd2Card Library

 *

 * This Library is free software: you can redistribute it and/or modify

 * it under the terms of the GNU General Public License as published by

 * the Free Software Foundation, either version 3 of the License, or

 * (at your option) any later version.

 *

 * This Library is distributed in the hope that it will be useful,

 * but WITHOUT ANY WARRANTY; without even the implied warranty of

 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the

 * GNU General Public License for more details.

 *

 * You should have received a copy of the GNU General Public License

 * along with the Arduino Sd2Card Library.  If not, see

 * <http://www.gnu.org/licenses/>.

 */
# 22 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2Card.h"
/**

 * \file

 * Sd2Card class

 */
# 26 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2Card.h"
# 1 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2PinMap.h" 1
/* Arduino SdFat Library

 * Copyright (C) 2010 by William Greiman

 *

 * This file is part of the Arduino SdFat Library

 *

 * This Library is free software: you can redistribute it and/or modify

 * it under the terms of the GNU General Public License as published by

 * the Free Software Foundation, either version 3 of the License, or

 * (at your option) any later version.

 *

 * This Library is distributed in the hope that it will be useful,

 * but WITHOUT ANY WARRANTY; without even the implied warranty of

 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the

 * GNU General Public License for more details.

 *

 * You should have received a copy of the GNU General Public License

 * along with the Arduino SdFat Library.  If not, see

 * <http://www.gnu.org/licenses/>.

 */
# 36 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2PinMap.h"
// Warning this file was generated by a program.


# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/
# 40 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2PinMap.h" 2

//------------------------------------------------------------------------------
/** struct for mapping digital pins */
struct pin_map_t {
  volatile uint8_t* ddr;
  volatile uint8_t* pin;
  volatile uint8_t* port;
  uint8_t bit;
};
//------------------------------------------------------------------------------
# 411 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2PinMap.h"
// 168 and 328 Arduinos

// Two Wire (aka I2C) ports
uint8_t const SDA_PIN = 18;
uint8_t const SCL_PIN = 19;

// SPI port
uint8_t const SS_PIN = 10;
uint8_t const MOSI_PIN = 11;
uint8_t const MISO_PIN = 12;
uint8_t const SCK_PIN = 13;

static const pin_map_t digitalPinMap[] = {
  {&(*(volatile uint8_t *)((0x0A) + 0x20)), &(*(volatile uint8_t *)((0x09) + 0x20)), &(*(volatile uint8_t *)((0x0B) + 0x20)), 0}, // D0  0
  {&(*(volatile uint8_t *)((0x0A) + 0x20)), &(*(volatile uint8_t *)((0x09) + 0x20)), &(*(volatile uint8_t *)((0x0B) + 0x20)), 1}, // D1  1
  {&(*(volatile uint8_t *)((0x0A) + 0x20)), &(*(volatile uint8_t *)((0x09) + 0x20)), &(*(volatile uint8_t *)((0x0B) + 0x20)), 2}, // D2  2
  {&(*(volatile uint8_t *)((0x0A) + 0x20)), &(*(volatile uint8_t *)((0x09) + 0x20)), &(*(volatile uint8_t *)((0x0B) + 0x20)), 3}, // D3  3
  {&(*(volatile uint8_t *)((0x0A) + 0x20)), &(*(volatile uint8_t *)((0x09) + 0x20)), &(*(volatile uint8_t *)((0x0B) + 0x20)), 4}, // D4  4
  {&(*(volatile uint8_t *)((0x0A) + 0x20)), &(*(volatile uint8_t *)((0x09) + 0x20)), &(*(volatile uint8_t *)((0x0B) + 0x20)), 5}, // D5  5
  {&(*(volatile uint8_t *)((0x0A) + 0x20)), &(*(volatile uint8_t *)((0x09) + 0x20)), &(*(volatile uint8_t *)((0x0B) + 0x20)), 6}, // D6  6
  {&(*(volatile uint8_t *)((0x0A) + 0x20)), &(*(volatile uint8_t *)((0x09) + 0x20)), &(*(volatile uint8_t *)((0x0B) + 0x20)), 7}, // D7  7
  {&(*(volatile uint8_t *)((0x04) + 0x20)), &(*(volatile uint8_t *)((0x03) + 0x20)), &(*(volatile uint8_t *)((0x05) + 0x20)), 0}, // B0  8
  {&(*(volatile uint8_t *)((0x04) + 0x20)), &(*(volatile uint8_t *)((0x03) + 0x20)), &(*(volatile uint8_t *)((0x05) + 0x20)), 1}, // B1  9
  {&(*(volatile uint8_t *)((0x04) + 0x20)), &(*(volatile uint8_t *)((0x03) + 0x20)), &(*(volatile uint8_t *)((0x05) + 0x20)), 2}, // B2 10
  {&(*(volatile uint8_t *)((0x04) + 0x20)), &(*(volatile uint8_t *)((0x03) + 0x20)), &(*(volatile uint8_t *)((0x05) + 0x20)), 3}, // B3 11
  {&(*(volatile uint8_t *)((0x04) + 0x20)), &(*(volatile uint8_t *)((0x03) + 0x20)), &(*(volatile uint8_t *)((0x05) + 0x20)), 4}, // B4 12
  {&(*(volatile uint8_t *)((0x04) + 0x20)), &(*(volatile uint8_t *)((0x03) + 0x20)), &(*(volatile uint8_t *)((0x05) + 0x20)), 5}, // B5 13
  {&(*(volatile uint8_t *)((0x07) + 0x20)), &(*(volatile uint8_t *)((0x06) + 0x20)), &(*(volatile uint8_t *)((0x08) + 0x20)), 0}, // C0 14
  {&(*(volatile uint8_t *)((0x07) + 0x20)), &(*(volatile uint8_t *)((0x06) + 0x20)), &(*(volatile uint8_t *)((0x08) + 0x20)), 1}, // C1 15
  {&(*(volatile uint8_t *)((0x07) + 0x20)), &(*(volatile uint8_t *)((0x06) + 0x20)), &(*(volatile uint8_t *)((0x08) + 0x20)), 2}, // C2 16
  {&(*(volatile uint8_t *)((0x07) + 0x20)), &(*(volatile uint8_t *)((0x06) + 0x20)), &(*(volatile uint8_t *)((0x08) + 0x20)), 3}, // C3 17
  {&(*(volatile uint8_t *)((0x07) + 0x20)), &(*(volatile uint8_t *)((0x06) + 0x20)), &(*(volatile uint8_t *)((0x08) + 0x20)), 4}, // C4 18
  {&(*(volatile uint8_t *)((0x07) + 0x20)), &(*(volatile uint8_t *)((0x06) + 0x20)), &(*(volatile uint8_t *)((0x08) + 0x20)), 5} // C5 19
};

//------------------------------------------------------------------------------
static const uint8_t digitalPinCount = sizeof(digitalPinMap)/sizeof(pin_map_t);

uint8_t badPinNumber(void)
  __attribute__((error("Pin number is too large or not a constant")));

static inline __attribute__((always_inline))
  uint8_t getPinMode(uint8_t pin) {
  if (__builtin_constant_p(pin) && pin < digitalPinCount) {
    return (*digitalPinMap[pin].ddr >> digitalPinMap[pin].bit) & 1;
  } else {
    return badPinNumber();
  }
}
static inline __attribute__((always_inline))
  void setPinMode(uint8_t pin, uint8_t mode) {
  if (__builtin_constant_p(pin) && pin < digitalPinCount) {
    if (mode) {
      *digitalPinMap[pin].ddr |= 1 << digitalPinMap[pin].bit;
    } else {
      *digitalPinMap[pin].ddr &= ~(1 << digitalPinMap[pin].bit);
    }
  } else {
    badPinNumber();
  }
}
static inline __attribute__((always_inline))
  uint8_t fastDigitalRead(uint8_t pin) {
  if (__builtin_constant_p(pin) && pin < digitalPinCount) {
    return (*digitalPinMap[pin].pin >> digitalPinMap[pin].bit) & 1;
  } else {
    return badPinNumber();
  }
}
static inline __attribute__((always_inline))
  void fastDigitalWrite(uint8_t pin, uint8_t value) {
  if (__builtin_constant_p(pin) && pin < digitalPinCount) {
    if (value) {
      *digitalPinMap[pin].port |= 1 << digitalPinMap[pin].bit;
    } else {
      *digitalPinMap[pin].port &= ~(1 << digitalPinMap[pin].bit);
    }
  } else {
    badPinNumber();
  }
}
# 27 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2Card.h" 2
# 1 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdInfo.h" 1
/* Arduino Sd2Card Library

 * Copyright (C) 2009 by William Greiman

 *

 * This file is part of the Arduino Sd2Card Library

 *

 * This Library is free software: you can redistribute it and/or modify

 * it under the terms of the GNU General Public License as published by

 * the Free Software Foundation, either version 3 of the License, or

 * (at your option) any later version.

 *

 * This Library is distributed in the hope that it will be useful,

 * but WITHOUT ANY WARRANTY; without even the implied warranty of

 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the

 * GNU General Public License for more details.

 *

 * You should have received a copy of the GNU General Public License

 * along with the Arduino Sd2Card Library.  If not, see

 * <http://www.gnu.org/licenses/>.

 */
# 23 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdInfo.h"
// Based on the document:
//
// SD Specifications
// Part 1
// Physical Layer
// Simplified Specification
// Version 2.00
// September 25, 2006
//
// www.sdcard.org/developers/tech/sdcard/pls/Simplified_Physical_Layer_Spec.pdf
//------------------------------------------------------------------------------
// SD card commands
/** GO_IDLE_STATE - init card in spi mode if CS low */
uint8_t const CMD0 = 0X00;
/** SEND_IF_COND - verify SD Memory Card interface operating condition.*/
uint8_t const CMD8 = 0X08;
/** SEND_CSD - read the Card Specific Data (CSD register) */
uint8_t const CMD9 = 0X09;
/** SEND_CID - read the card identification information (CID register) */
uint8_t const CMD10 = 0X0A;
/** SEND_STATUS - read the card status register */
uint8_t const CMD13 = 0X0D;
/** READ_BLOCK - read a single data block from the card */
uint8_t const CMD17 = 0X11;
/** WRITE_BLOCK - write a single data block to the card */
uint8_t const CMD24 = 0X18;
/** WRITE_MULTIPLE_BLOCK - write blocks of data until a STOP_TRANSMISSION */
uint8_t const CMD25 = 0X19;
/** ERASE_WR_BLK_START - sets the address of the first block to be erased */
uint8_t const CMD32 = 0X20;
/** ERASE_WR_BLK_END - sets the address of the last block of the continuous

    range to be erased*/
# 55 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdInfo.h"
uint8_t const CMD33 = 0X21;
/** ERASE - erase all previously selected blocks */
uint8_t const CMD38 = 0X26;
/** APP_CMD - escape for application specific command */
uint8_t const CMD55 = 0X37;
/** READ_OCR - read the OCR register of a card */
uint8_t const CMD58 = 0X3A;
/** SET_WR_BLK_ERASE_COUNT - Set the number of write blocks to be

     pre-erased before writing */
# 64 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdInfo.h"
uint8_t const ACMD23 = 0X17;
/** SD_SEND_OP_COMD - Sends host capacity support information and

    activates the card's initialization process */
# 67 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdInfo.h"
uint8_t const ACMD41 = 0X29;
//------------------------------------------------------------------------------
/** status for card in the ready state */
uint8_t const R1_READY_STATE = 0X00;
/** status for card in the idle state */
uint8_t const R1_IDLE_STATE = 0X01;
/** status bit for illegal command */
uint8_t const R1_ILLEGAL_COMMAND = 0X04;
/** start data token for read or write single block*/
uint8_t const DATA_START_BLOCK = 0XFE;
/** stop token for write multiple blocks*/
uint8_t const STOP_TRAN_TOKEN = 0XFD;
/** start data token for write multiple blocks*/
uint8_t const WRITE_MULTIPLE_TOKEN = 0XFC;
/** mask for data response tokens after a write block operation */
uint8_t const DATA_RES_MASK = 0X1F;
/** write data accepted token */
uint8_t const DATA_RES_ACCEPTED = 0X05;
//------------------------------------------------------------------------------
typedef struct CID {
  // byte 0
  uint8_t mid; // Manufacturer ID
  // byte 1-2
  char oid[2]; // OEM/Application ID
  // byte 3-7
  char pnm[5]; // Product name
  // byte 8
  unsigned prv_m : 4; // Product revision n.m
  unsigned prv_n : 4;
  // byte 9-12
  uint32_t psn; // Product serial number
  // byte 13
  unsigned mdt_year_high : 4; // Manufacturing date
  unsigned reserved : 4;
  // byte 14
  unsigned mdt_month : 4;
  unsigned mdt_year_low :4;
  // byte 15
  unsigned always1 : 1;
  unsigned crc : 7;
}cid_t;
//------------------------------------------------------------------------------
// CSD for version 1.00 cards
typedef struct CSDV1 {
  // byte 0
  unsigned reserved1 : 6;
  unsigned csd_ver : 2;
  // byte 1
  uint8_t taac;
  // byte 2
  uint8_t nsac;
  // byte 3
  uint8_t tran_speed;
  // byte 4
  uint8_t ccc_high;
  // byte 5
  unsigned read_bl_len : 4;
  unsigned ccc_low : 4;
  // byte 6
  unsigned c_size_high : 2;
  unsigned reserved2 : 2;
  unsigned dsr_imp : 1;
  unsigned read_blk_misalign :1;
  unsigned write_blk_misalign : 1;
  unsigned read_bl_partial : 1;
  // byte 7
  uint8_t c_size_mid;
  // byte 8
  unsigned vdd_r_curr_max : 3;
  unsigned vdd_r_curr_min : 3;
  unsigned c_size_low :2;
  // byte 9
  unsigned c_size_mult_high : 2;
  unsigned vdd_w_cur_max : 3;
  unsigned vdd_w_curr_min : 3;
  // byte 10
  unsigned sector_size_high : 6;
  unsigned erase_blk_en : 1;
  unsigned c_size_mult_low : 1;
  // byte 11
  unsigned wp_grp_size : 7;
  unsigned sector_size_low : 1;
  // byte 12
  unsigned write_bl_len_high : 2;
  unsigned r2w_factor : 3;
  unsigned reserved3 : 2;
  unsigned wp_grp_enable : 1;
  // byte 13
  unsigned reserved4 : 5;
  unsigned write_partial : 1;
  unsigned write_bl_len_low : 2;
  // byte 14
  unsigned reserved5: 2;
  unsigned file_format : 2;
  unsigned tmp_write_protect : 1;
  unsigned perm_write_protect : 1;
  unsigned copy : 1;
  unsigned file_format_grp : 1;
  // byte 15
  unsigned always1 : 1;
  unsigned crc : 7;
}csd1_t;
//------------------------------------------------------------------------------
// CSD for version 2.00 cards
typedef struct CSDV2 {
  // byte 0
  unsigned reserved1 : 6;
  unsigned csd_ver : 2;
  // byte 1
  uint8_t taac;
  // byte 2
  uint8_t nsac;
  // byte 3
  uint8_t tran_speed;
  // byte 4
  uint8_t ccc_high;
  // byte 5
  unsigned read_bl_len : 4;
  unsigned ccc_low : 4;
  // byte 6
  unsigned reserved2 : 4;
  unsigned dsr_imp : 1;
  unsigned read_blk_misalign :1;
  unsigned write_blk_misalign : 1;
  unsigned read_bl_partial : 1;
  // byte 7
  unsigned reserved3 : 2;
  unsigned c_size_high : 6;
  // byte 8
  uint8_t c_size_mid;
  // byte 9
  uint8_t c_size_low;
  // byte 10
  unsigned sector_size_high : 6;
  unsigned erase_blk_en : 1;
  unsigned reserved4 : 1;
  // byte 11
  unsigned wp_grp_size : 7;
  unsigned sector_size_low : 1;
  // byte 12
  unsigned write_bl_len_high : 2;
  unsigned r2w_factor : 3;
  unsigned reserved5 : 2;
  unsigned wp_grp_enable : 1;
  // byte 13
  unsigned reserved6 : 5;
  unsigned write_partial : 1;
  unsigned write_bl_len_low : 2;
  // byte 14
  unsigned reserved7: 2;
  unsigned file_format : 2;
  unsigned tmp_write_protect : 1;
  unsigned perm_write_protect : 1;
  unsigned copy : 1;
  unsigned file_format_grp : 1;
  // byte 15
  unsigned always1 : 1;
  unsigned crc : 7;
}csd2_t;
//------------------------------------------------------------------------------
// union of old and new style CSD register
union csd_t {
  csd1_t v1;
  csd2_t v2;
};
# 28 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2Card.h" 2
/** Set SCK to max rate of F_CPU/2. See Sd2Card::setSckRate(). */
uint8_t const SPI_FULL_SPEED = 0;
/** Set SCK rate to F_CPU/4. See Sd2Card::setSckRate(). */
uint8_t const SPI_HALF_SPEED = 1;
/** Set SCK rate to F_CPU/8. Sd2Card::setSckRate(). */
uint8_t const SPI_QUARTER_SPEED = 2;
/**

 * USE_SPI_LIB: if set, use the SPI library bundled with Arduino IDE, otherwise

 * run with a standalone driver for AVR.

 */
# 39 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2Card.h"
/**

 * Define MEGA_SOFT_SPI non-zero to use software SPI on Mega Arduinos.

 * Pins used are SS 10, MOSI 11, MISO 12, and SCK 13.

 *

 * MEGA_SOFT_SPI allows an unmodified Adafruit GPS Shield to be used

 * on Mega Arduinos.  Software SPI works well with GPS Shield V1.1

 * but many SD cards will fail with GPS Shield V1.0.

 */
# 48 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2Card.h"
//------------------------------------------------------------------------------



//------------------------------------------------------------------------------
// SPI pin definitions
//

// hardware pin defs

// include pins_arduino.h or variant.h depending on architecture, via Arduino.h
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 60 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2Card.h" 2

/**

 * SD Chip Select pin

 *

 * Warning if this pin is redefined the hardware SS will pin will be enabled

 * as an output by init().  An avr processor will not function as an SPI

 * master unless SS is set to output mode.

 */
# 68 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2Card.h"
/** The default chip select pin for the SD card is SS. */
uint8_t const SD_CHIP_SELECT_PIN = SS;

// The following three pins must not be redefined for hardware SPI,
// so ensure that they are taken from pins_arduino.h or variant.h, depending on architecture.
/** SPI Master Out Slave In pin */
uint8_t const SPI_MOSI_PIN = MOSI;
/** SPI Master In Slave Out pin */
uint8_t const SPI_MISO_PIN = MISO;
/** SPI Clock pin */
uint8_t const SPI_SCK_PIN = SCK;

/** optimize loops for hardware SPI */
# 96 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2Card.h"
//------------------------------------------------------------------------------
/** Protect block zero from write if nonzero */

/** init timeout ms */
uint16_t const SD_INIT_TIMEOUT = 2000;
/** erase timeout ms */
uint16_t const SD_ERASE_TIMEOUT = 10000;
/** read timeout ms */
uint16_t const SD_READ_TIMEOUT = 300;
/** write time out ms */
uint16_t const SD_WRITE_TIMEOUT = 600;
//------------------------------------------------------------------------------
// SD card errors
/** timeout error for command CMD0 */
uint8_t const SD_CARD_ERROR_CMD0 = 0X1;
/** CMD8 was not accepted - not a valid SD card*/
uint8_t const SD_CARD_ERROR_CMD8 = 0X2;
/** card returned an error response for CMD17 (read block) */
uint8_t const SD_CARD_ERROR_CMD17 = 0X3;
/** card returned an error response for CMD24 (write block) */
uint8_t const SD_CARD_ERROR_CMD24 = 0X4;
/**  WRITE_MULTIPLE_BLOCKS command failed */
uint8_t const SD_CARD_ERROR_CMD25 = 0X05;
/** card returned an error response for CMD58 (read OCR) */
uint8_t const SD_CARD_ERROR_CMD58 = 0X06;
/** SET_WR_BLK_ERASE_COUNT failed */
uint8_t const SD_CARD_ERROR_ACMD23 = 0X07;
/** card's ACMD41 initialization process timeout */
uint8_t const SD_CARD_ERROR_ACMD41 = 0X08;
/** card returned a bad CSR version field */
uint8_t const SD_CARD_ERROR_BAD_CSD = 0X09;
/** erase block group command failed */
uint8_t const SD_CARD_ERROR_ERASE = 0X0A;
/** card not capable of single block erase */
uint8_t const SD_CARD_ERROR_ERASE_SINGLE_BLOCK = 0X0B;
/** Erase sequence timed out */
uint8_t const SD_CARD_ERROR_ERASE_TIMEOUT = 0X0C;
/** card returned an error token instead of read data */
uint8_t const SD_CARD_ERROR_READ = 0X0D;
/** read CID or CSD failed */
uint8_t const SD_CARD_ERROR_READ_REG = 0X0E;
/** timeout while waiting for start of read data */
uint8_t const SD_CARD_ERROR_READ_TIMEOUT = 0X0F;
/** card did not accept STOP_TRAN_TOKEN */
uint8_t const SD_CARD_ERROR_STOP_TRAN = 0X10;
/** card returned an error token as a response to a write operation */
uint8_t const SD_CARD_ERROR_WRITE = 0X11;
/** attempt to write protected block zero */
uint8_t const SD_CARD_ERROR_WRITE_BLOCK_ZERO = 0X12;
/** card did not go ready for a multiple block write */
uint8_t const SD_CARD_ERROR_WRITE_MULTIPLE = 0X13;
/** card returned an error to a CMD13 status check after a write */
uint8_t const SD_CARD_ERROR_WRITE_PROGRAMMING = 0X14;
/** timeout occurred during write programming */
uint8_t const SD_CARD_ERROR_WRITE_TIMEOUT = 0X15;
/** incorrect rate selected */
uint8_t const SD_CARD_ERROR_SCK_RATE = 0X16;
//------------------------------------------------------------------------------
// card types
/** Standard capacity V1 SD card */
uint8_t const SD_CARD_TYPE_SD1 = 1;
/** Standard capacity V2 SD card */
uint8_t const SD_CARD_TYPE_SD2 = 2;
/** High Capacity SD card */
uint8_t const SD_CARD_TYPE_SDHC = 3;
//------------------------------------------------------------------------------
/**

 * \class Sd2Card

 * \brief Raw access to SD and SDHC flash memory cards.

 */
# 166 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2Card.h"
class Sd2Card {
 public:
  /** Construct an instance of Sd2Card. */
  Sd2Card(void) : errorCode_(0), inBlock_(0), partialBlockRead_(0), type_(0) {}
  uint32_t cardSize(void);
  uint8_t erase(uint32_t firstBlock, uint32_t lastBlock);
  uint8_t eraseSingleBlockEnable(void);
  /**

   * \return error code for last error. See Sd2Card.h for a list of error codes.

   */
# 176 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2Card.h"
  uint8_t errorCode(void) const {return errorCode_;}
  /** \return error data for last error. */
  uint8_t errorData(void) const {return status_;}
  /**

   * Initialize an SD flash memory card with default clock rate and chip

   * select pin.  See sd2Card::init(uint8_t sckRateID, uint8_t chipSelectPin).

   */
# 183 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2Card.h"
  uint8_t init(void) {
    return init(SPI_FULL_SPEED, SD_CHIP_SELECT_PIN);
  }
  /**

   * Initialize an SD flash memory card with the selected SPI clock rate

   * and the default SD chip select pin.

   * See sd2Card::init(uint8_t sckRateID, uint8_t chipSelectPin).

   */
# 191 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2Card.h"
  uint8_t init(uint8_t sckRateID) {
    return init(sckRateID, SD_CHIP_SELECT_PIN);
  }
  uint8_t init(uint8_t sckRateID, uint8_t chipSelectPin);
  void partialBlockRead(uint8_t value);
  /** Returns the current value, true or false, for partial block read. */
  uint8_t partialBlockRead(void) const {return partialBlockRead_;}
  uint8_t readBlock(uint32_t block, uint8_t* dst);
  uint8_t readData(uint32_t block,
          uint16_t offset, uint16_t count, uint8_t* dst);
  /**

   * Read a cards CID register. The CID contains card identification

   * information such as Manufacturer ID, Product name, Product serial

   * number and Manufacturing date. */
# 205 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2Card.h"
  uint8_t readCID(cid_t* cid) {
    return readRegister(CMD10, cid);
  }
  /**

   * Read a cards CSD register. The CSD contains Card-Specific Data that

   * provides information regarding access to the card's contents. */
# 211 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/Sd2Card.h"
  uint8_t readCSD(csd_t* csd) {
    return readRegister(CMD9, csd);
  }
  void readEnd(void);
  uint8_t setSckRate(uint8_t sckRateID);
  /** Return the card type: SD V1, SD V2 or SDHC */
  uint8_t type(void) const {return type_;}
  uint8_t writeBlock(uint32_t blockNumber, const uint8_t* src);
  uint8_t writeData(const uint8_t* src);
  uint8_t writeStart(uint32_t blockNumber, uint32_t eraseCount);
  uint8_t writeStop(void);
 private:
  uint32_t block_;
  uint8_t chipSelectPin_;
  uint8_t errorCode_;
  uint8_t inBlock_;
  uint16_t offset_;
  uint8_t partialBlockRead_;
  uint8_t status_;
  uint8_t type_;
  // private functions
  uint8_t cardAcmd(uint8_t cmd, uint32_t arg) {
    cardCommand(CMD55, 0);
    return cardCommand(cmd, arg);
  }
  uint8_t cardCommand(uint8_t cmd, uint32_t arg);
  void error(uint8_t code) {errorCode_ = code;}
  uint8_t readRegister(uint8_t cmd, void* buf);
  uint8_t sendWriteCommand(uint32_t blockNumber, uint32_t eraseCount);
  void chipSelectHigh(void);
  void chipSelectLow(void);
  void type(uint8_t value) {type_ = value;}
  uint8_t waitNotBusy(uint16_t timeoutMillis);
  uint8_t writeData(uint8_t token, const uint8_t* src);
  uint8_t waitStartBlock(void);
};
# 30 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h" 2
# 1 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h" 1
/* Arduino SdFat Library

 * Copyright (C) 2009 by William Greiman

 *

 * This file is part of the Arduino SdFat Library

 *

 * This Library is free software: you can redistribute it and/or modify

 * it under the terms of the GNU General Public License as published by

 * the Free Software Foundation, either version 3 of the License, or

 * (at your option) any later version.

 *

 * This Library is distributed in the hope that it will be useful,

 * but WITHOUT ANY WARRANTY; without even the implied warranty of

 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the

 * GNU General Public License for more details.

 *

 * You should have received a copy of the GNU General Public License

 * along with the Arduino SdFat Library.  If not, see

 * <http://www.gnu.org/licenses/>.

 */
# 22 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
/**

 * \file

 * FAT file structures

 */
# 26 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
/*

 * mostly from Microsoft document fatgen103.doc

 * http://www.microsoft.com/whdc/system/platform/firmware/fatgen.mspx

 */
# 30 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
//------------------------------------------------------------------------------
/** Value for byte 510 of boot block or MBR */
uint8_t const BOOTSIG0 = 0X55;
/** Value for byte 511 of boot block or MBR */
uint8_t const BOOTSIG1 = 0XAA;
//------------------------------------------------------------------------------
/**

 * \struct partitionTable

 * \brief MBR partition table entry

 *

 * A partition table entry for a MBR formatted storage device.

 * The MBR partition table has four entries.

 */
# 43 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
struct partitionTable {
          /**

           * Boot Indicator . Indicates whether the volume is the active

           * partition.  Legal values include: 0X00. Do not use for booting.

           * 0X80 Active partition.

           */
# 49 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint8_t boot;
          /**

            * Head part of Cylinder-head-sector address of the first block in

            * the partition. Legal values are 0-255. Only used in old PC BIOS.

            */
# 54 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint8_t beginHead;
          /**

           * Sector part of Cylinder-head-sector address of the first block in

           * the partition. Legal values are 1-63. Only used in old PC BIOS.

           */
# 59 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  unsigned beginSector : 6;
           /** High bits cylinder for first block in partition. */
  unsigned beginCylinderHigh : 2;
          /**

           * Combine beginCylinderLow with beginCylinderHigh. Legal values

           * are 0-1023.  Only used in old PC BIOS.

           */
# 66 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint8_t beginCylinderLow;
          /**

           * Partition type. See defines that begin with PART_TYPE_ for

           * some Microsoft partition types.

           */
# 71 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint8_t type;
          /**

           * head part of cylinder-head-sector address of the last sector in the

           * partition.  Legal values are 0-255. Only used in old PC BIOS.

           */
# 76 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint8_t endHead;
          /**

           * Sector part of cylinder-head-sector address of the last sector in

           * the partition.  Legal values are 1-63. Only used in old PC BIOS.

           */
# 81 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  unsigned endSector : 6;
           /** High bits of end cylinder */
  unsigned endCylinderHigh : 2;
          /**

           * Combine endCylinderLow with endCylinderHigh. Legal values

           * are 0-1023.  Only used in old PC BIOS.

           */
# 88 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint8_t endCylinderLow;
           /** Logical block address of the first block in the partition. */
  uint32_t firstSector;
           /** Length of the partition, in blocks. */
  uint32_t totalSectors;
} __attribute__((packed));
/** Type name for partitionTable */
typedef struct partitionTable part_t;
//------------------------------------------------------------------------------
/**

 * \struct masterBootRecord

 *

 * \brief Master Boot Record

 *

 * The first block of a storage device that is formatted with a MBR.

 */
# 104 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
struct masterBootRecord {
           /** Code Area for master boot program. */
  uint8_t codeArea[440];
           /** Optional WindowsNT disk signature. May contain more boot code. */
  uint32_t diskSignature;
           /** Usually zero but may be more boot code. */
  uint16_t usuallyZero;
           /** Partition tables. */
  part_t part[4];
           /** First MBR signature byte. Must be 0X55 */
  uint8_t mbrSig0;
           /** Second MBR signature byte. Must be 0XAA */
  uint8_t mbrSig1;
} __attribute__((packed));
/** Type name for masterBootRecord */
typedef struct masterBootRecord mbr_t;
//------------------------------------------------------------------------------
/** 

 * \struct biosParmBlock

 *

 * \brief BIOS parameter block

 * 

 *  The BIOS parameter block describes the physical layout of a FAT volume.

 */
# 128 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
struct biosParmBlock {
          /**

           * Count of bytes per sector. This value may take on only the

           * following values: 512, 1024, 2048 or 4096

           */
# 133 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint16_t bytesPerSector;
          /**

           * Number of sectors per allocation unit. This value must be a

           * power of 2 that is greater than 0. The legal values are

           * 1, 2, 4, 8, 16, 32, 64, and 128.

           */
# 139 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint8_t sectorsPerCluster;
          /**

           * Number of sectors before the first FAT.

           * This value must not be zero.

           */
# 144 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint16_t reservedSectorCount;
          /** The count of FAT data structures on the volume. This field should

           *  always contain the value 2 for any FAT volume of any type.

           */
# 148 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint8_t fatCount;
          /**

          * For FAT12 and FAT16 volumes, this field contains the count of

          * 32-byte directory entries in the root directory. For FAT32 volumes,

          * this field must be set to 0. For FAT12 and FAT16 volumes, this

          * value should always specify a count that when multiplied by 32

          * results in a multiple of bytesPerSector.  FAT16 volumes should

          * use the value 512.

          */
# 157 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint16_t rootDirEntryCount;
          /**

           * This field is the old 16-bit total count of sectors on the volume.

           * This count includes the count of all sectors in all four regions

           * of the volume. This field can be 0; if it is 0, then totalSectors32

           * must be non-zero.  For FAT32 volumes, this field must be 0. For

           * FAT12 and FAT16 volumes, this field contains the sector count, and

           * totalSectors32 is 0 if the total sector count fits

           * (is less than 0x10000).

           */
# 167 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint16_t totalSectors16;
          /**

           * This dates back to the old MS-DOS 1.x media determination and is

           * no longer usually used for anything.  0xF8 is the standard value

           * for fixed (non-removable) media. For removable media, 0xF0 is

           * frequently used. Legal values are 0xF0 or 0xF8-0xFF.

           */
# 174 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint8_t mediaType;
          /**

           * Count of sectors occupied by one FAT on FAT12/FAT16 volumes.

           * On FAT32 volumes this field must be 0, and sectorsPerFat32

           * contains the FAT size count.

           */
# 180 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint16_t sectorsPerFat16;
           /** Sectors per track for interrupt 0x13. Not used otherwise. */
  uint16_t sectorsPerTrtack;
           /** Number of heads for interrupt 0x13.  Not used otherwise. */
  uint16_t headCount;
          /**

           * Count of hidden sectors preceding the partition that contains this

           * FAT volume. This field is generally only relevant for media

           *  visible on interrupt 0x13.

           */
# 190 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint32_t hidddenSectors;
          /**

           * This field is the new 32-bit total count of sectors on the volume.

           * This count includes the count of all sectors in all four regions

           * of the volume.  This field can be 0; if it is 0, then

           * totalSectors16 must be non-zero.

           */
# 197 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint32_t totalSectors32;
          /**

           * Count of sectors occupied by one FAT on FAT32 volumes.

           */
# 201 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint32_t sectorsPerFat32;
          /**

           * This field is only defined for FAT32 media and does not exist on

           * FAT12 and FAT16 media.

           * Bits 0-3 -- Zero-based number of active FAT.

           *             Only valid if mirroring is disabled.

           * Bits 4-6 -- Reserved.

           * Bit 7	-- 0 means the FAT is mirrored at runtime into all FATs.

	         *        -- 1 means only one FAT is active; it is the one referenced in bits 0-3.

           * Bits 8-15 	-- Reserved.

           */
# 212 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint16_t fat32Flags;
          /**

           * FAT32 version. High byte is major revision number.

           * Low byte is minor revision number. Only 0.0 define.

           */
# 217 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint16_t fat32Version;
          /**

           * Cluster number of the first cluster of the root directory for FAT32.

           * This usually 2 but not required to be 2.

           */
# 222 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint32_t fat32RootCluster;
          /**

           * Sector number of FSINFO structure in the reserved area of the

           * FAT32 volume. Usually 1.

           */
# 227 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint16_t fat32FSInfo;
          /**

           * If non-zero, indicates the sector number in the reserved area

           * of the volume of a copy of the boot record. Usually 6.

           * No value other than 6 is recommended.

           */
# 233 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint16_t fat32BackBootBlock;
          /**

           * Reserved for future expansion. Code that formats FAT32 volumes

           * should always set all of the bytes of this field to 0.

           */
# 238 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint8_t fat32Reserved[12];
} __attribute__((packed));
/** Type name for biosParmBlock */
typedef struct biosParmBlock bpb_t;
//------------------------------------------------------------------------------
/**

 * \struct fat32BootSector

 *

 * \brief Boot sector for a FAT16 or FAT32 volume.

 * 

 */
# 249 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
struct fat32BootSector {
           /** X86 jmp to boot program */
  uint8_t jmpToBootCode[3];
           /** informational only - don't depend on it */
  char oemName[8];
           /** BIOS Parameter Block */
  bpb_t bpb;
           /** for int0x13 use value 0X80 for hard drive */
  uint8_t driveNumber;
           /** used by Windows NT - should be zero for FAT */
  uint8_t reserved1;
           /** 0X29 if next three fields are valid */
  uint8_t bootSignature;
           /** usually generated by combining date and time */
  uint32_t volumeSerialNumber;
           /** should match volume label in root dir */
  char volumeLabel[11];
           /** informational only - don't depend on it */
  char fileSystemType[8];
           /** X86 boot code */
  uint8_t bootCode[420];
           /** must be 0X55 */
  uint8_t bootSectorSig0;
           /** must be 0XAA */
  uint8_t bootSectorSig1;
} __attribute__((packed));
//------------------------------------------------------------------------------
// End Of Chain values for FAT entries
/** FAT16 end of chain value used by Microsoft. */
uint16_t const FAT16EOC = 0XFFFF;
/** Minimum value for FAT16 EOC.  Use to test for EOC. */
uint16_t const FAT16EOC_MIN = 0XFFF8;
/** FAT32 end of chain value used by Microsoft. */
uint32_t const FAT32EOC = 0X0FFFFFFF;
/** Minimum value for FAT32 EOC.  Use to test for EOC. */
uint32_t const FAT32EOC_MIN = 0X0FFFFFF8;
/** Mask a for FAT32 entry. Entries are 28 bits. */
uint32_t const FAT32MASK = 0X0FFFFFFF;

/** Type name for fat32BootSector */
typedef struct fat32BootSector fbs_t;
//------------------------------------------------------------------------------
/**

 * \struct directoryEntry

 * \brief FAT short directory entry

 *

 * Short means short 8.3 name, not the entry size.

 *  

 * Date Format. A FAT directory entry date stamp is a 16-bit field that is 

 * basically a date relative to the MS-DOS epoch of 01/01/1980. Here is the

 * format (bit 0 is the LSB of the 16-bit word, bit 15 is the MSB of the 

 * 16-bit word):

 *   

 * Bits 9-15: Count of years from 1980, valid value range 0-127 

 * inclusive (1980-2107).

 *   

 * Bits 5-8: Month of year, 1 = January, valid value range 1-12 inclusive.

 *

 * Bits 0-4: Day of month, valid value range 1-31 inclusive.

 *

 * Time Format. A FAT directory entry time stamp is a 16-bit field that has

 * a granularity of 2 seconds. Here is the format (bit 0 is the LSB of the 

 * 16-bit word, bit 15 is the MSB of the 16-bit word).

 *   

 * Bits 11-15: Hours, valid value range 0-23 inclusive.

 * 

 * Bits 5-10: Minutes, valid value range 0-59 inclusive.

 *      

 * Bits 0-4: 2-second count, valid value range 0-29 inclusive (0 - 58 seconds).

 *   

 * The valid time range is from Midnight 00:00:00 to 23:59:58.

 */
# 321 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
struct directoryEntry {
           /**

            * Short 8.3 name.

            * The first eight bytes contain the file name with blank fill.

            * The last three bytes contain the file extension with blank fill.

            */
# 327 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint8_t name[11];
          /** Entry attributes.

           *

           * The upper two bits of the attribute byte are reserved and should

           * always be set to 0 when a file is created and never modified or

           * looked at after that.  See defines that begin with DIR_ATT_.

           */
# 334 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint8_t attributes;
          /**

           * Reserved for use by Windows NT. Set value to 0 when a file is

           * created and never modify or look at it after that.

           */
# 339 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint8_t reservedNT;
          /**

           * The granularity of the seconds part of creationTime is 2 seconds

           * so this field is a count of tenths of a second and its valid

           * value range is 0-199 inclusive. (WHG note - seems to be hundredths)

           */
# 345 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint8_t creationTimeTenths;
           /** Time file was created. */
  uint16_t creationTime;
           /** Date file was created. */
  uint16_t creationDate;
          /**

           * Last access date. Note that there is no last access time, only

           * a date.  This is the date of last read or write. In the case of

           * a write, this should be set to the same date as lastWriteDate.

           */
# 355 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint16_t lastAccessDate;
          /**

           * High word of this entry's first cluster number (always 0 for a

           * FAT12 or FAT16 volume).

           */
# 360 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
  uint16_t firstClusterHigh;
           /** Time of last write. File creation is considered a write. */
  uint16_t lastWriteTime;
           /** Date of last write. File creation is considered a write. */
  uint16_t lastWriteDate;
           /** Low word of this entry's first cluster number. */
  uint16_t firstClusterLow;
           /** 32-bit unsigned holding this file's size in bytes. */
  uint32_t fileSize;
} __attribute__((packed));
//------------------------------------------------------------------------------
// Definitions for directory entries
//
/** Type name for directoryEntry */
typedef struct directoryEntry dir_t;
/** escape for name[0] = 0XE5 */
uint8_t const DIR_NAME_0XE5 = 0X05;
/** name[0] value for entry that is free after being "deleted" */
uint8_t const DIR_NAME_DELETED = 0XE5;
/** name[0] value for entry that is free and no allocated entries follow */
uint8_t const DIR_NAME_FREE = 0X00;
/** file is read-only */
uint8_t const DIR_ATT_READ_ONLY = 0X01;
/** File should hidden in directory listings */
uint8_t const DIR_ATT_HIDDEN = 0X02;
/** Entry is for a system file */
uint8_t const DIR_ATT_SYSTEM = 0X04;
/** Directory entry contains the volume label */
uint8_t const DIR_ATT_VOLUME_ID = 0X08;
/** Entry is for a directory */
uint8_t const DIR_ATT_DIRECTORY = 0X10;
/** Old DOS archive bit for backup support */
uint8_t const DIR_ATT_ARCHIVE = 0X20;
/** Test value for long name entry.  Test is

  (d->attributes & DIR_ATT_LONG_NAME_MASK) == DIR_ATT_LONG_NAME. */
# 395 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/FatStructs.h"
uint8_t const DIR_ATT_LONG_NAME = 0X0F;
/** Test mask for long name entry */
uint8_t const DIR_ATT_LONG_NAME_MASK = 0X3F;
/** defined attribute bits */
uint8_t const DIR_ATT_DEFINED_BITS = 0X3F;
/** Directory entry is part of a long name */
static inline uint8_t DIR_IS_LONG_NAME(const dir_t* dir) {
  return (dir->attributes & DIR_ATT_LONG_NAME_MASK) == DIR_ATT_LONG_NAME;
}
/** Mask for file/subdirectory tests */
uint8_t const DIR_ATT_FILE_TYPE_MASK = (DIR_ATT_VOLUME_ID | DIR_ATT_DIRECTORY);
/** Directory entry is for a file */
static inline uint8_t DIR_IS_FILE(const dir_t* dir) {
  return (dir->attributes & DIR_ATT_FILE_TYPE_MASK) == 0;
}
/** Directory entry is for a subdirectory */
static inline uint8_t DIR_IS_SUBDIR(const dir_t* dir) {
  return (dir->attributes & DIR_ATT_FILE_TYPE_MASK) == DIR_ATT_DIRECTORY;
}
/** Directory entry is for a file or subdirectory */
static inline uint8_t DIR_IS_FILE_OR_SUBDIR(const dir_t* dir) {
  return (dir->attributes & DIR_ATT_VOLUME_ID) == 0;
}
# 31 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Print.h" 1
/*
  Print.h - Base class that provides print() and println()
  Copyright (c) 2008 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 32 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h" 2
//------------------------------------------------------------------------------
/**

 * Allow use of deprecated functions if non-zero

 */
# 37 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
//------------------------------------------------------------------------------
// forward declaration since SdVolume is used in SdFile
class SdVolume;
//==============================================================================
// SdFile class

// flags for ls()
/** ls() flag to print modify date */
uint8_t const LS_DATE = 1;
/** ls() flag to print file size */
uint8_t const LS_SIZE = 2;
/** ls() flag for recursive list of subdirectories */
uint8_t const LS_R = 4;

// use the gnu style oflag in open()
/** open() oflag for reading */
uint8_t const O_READ = 0X01;
/** open() oflag - same as O_READ */
uint8_t const O_RDONLY = O_READ;
/** open() oflag for write */
uint8_t const O_WRITE = 0X02;
/** open() oflag - same as O_WRITE */
uint8_t const O_WRONLY = O_WRITE;
/** open() oflag for reading and writing */
uint8_t const O_RDWR = (O_READ | O_WRITE);
/** open() oflag mask for access modes */
uint8_t const O_ACCMODE = (O_READ | O_WRITE);
/** The file offset shall be set to the end of the file prior to each write. */
uint8_t const O_APPEND = 0X04;
/** synchronous writes - call sync() after each write */
uint8_t const O_SYNC = 0X08;
/** create the file if nonexistent */
uint8_t const O_CREAT = 0X10;
/** If O_CREAT and O_EXCL are set, open() shall fail if the file exists */
uint8_t const O_EXCL = 0X20;
/** truncate the file to zero length */
uint8_t const O_TRUNC = 0X40;

// flags for timestamp
/** set the file's last access date */
uint8_t const T_ACCESS = 1;
/** set the file's creation date and time */
uint8_t const T_CREATE = 2;
/** Set the file's write date and time */
uint8_t const T_WRITE = 4;
// values for type_
/** This SdFile has not been opened. */
uint8_t const FAT_FILE_TYPE_CLOSED = 0;
/** SdFile for a file */
uint8_t const FAT_FILE_TYPE_NORMAL = 1;
/** SdFile for a FAT16 root directory */
uint8_t const FAT_FILE_TYPE_ROOT16 = 2;
/** SdFile for a FAT32 root directory */
uint8_t const FAT_FILE_TYPE_ROOT32 = 3;
/** SdFile for a subdirectory */
uint8_t const FAT_FILE_TYPE_SUBDIR = 4;
/** Test value for directory type */
uint8_t const FAT_FILE_TYPE_MIN_DIR = FAT_FILE_TYPE_ROOT16;

/** date field for FAT directory entry */
static inline uint16_t FAT_DATE(uint16_t year, uint8_t month, uint8_t day) {
  return (year - 1980) << 9 | month << 5 | day;
}
/** year part of FAT directory date field */
static inline uint16_t FAT_YEAR(uint16_t fatDate) {
  return 1980 + (fatDate >> 9);
}
/** month part of FAT directory date field */
static inline uint8_t FAT_MONTH(uint16_t fatDate) {
  return (fatDate >> 5) & 0XF;
}
/** day part of FAT directory date field */
static inline uint8_t FAT_DAY(uint16_t fatDate) {
  return fatDate & 0X1F;
}
/** time field for FAT directory entry */
static inline uint16_t FAT_TIME(uint8_t hour, uint8_t minute, uint8_t second) {
  return hour << 11 | minute << 5 | second >> 1;
}
/** hour part of FAT directory time field */
static inline uint8_t FAT_HOUR(uint16_t fatTime) {
  return fatTime >> 11;
}
/** minute part of FAT directory time field */
static inline uint8_t FAT_MINUTE(uint16_t fatTime) {
  return(fatTime >> 5) & 0X3F;
}
/** second part of FAT directory time field */
static inline uint8_t FAT_SECOND(uint16_t fatTime) {
  return 2*(fatTime & 0X1F);
}
/** Default date for file timestamps is 1 Jan 2000 */
uint16_t const FAT_DEFAULT_DATE = ((2000 - 1980) << 9) | (1 << 5) | 1;
/** Default time for file timestamp is 1 am */
uint16_t const FAT_DEFAULT_TIME = (1 << 11);
//------------------------------------------------------------------------------
/**

 * \class SdFile

 * \brief Access FAT16 and FAT32 files on SD and SDHC cards.

 */
# 137 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
class SdFile : public Print {
 public:
  /** Create an instance of SdFile. */
  SdFile(void) : type_(FAT_FILE_TYPE_CLOSED) {}
  /**

   * writeError is set to true if an error occurs during a write().

   * Set writeError to false before calling print() and/or write() and check

   * for true after calls to print() and/or write().

   */
# 146 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  //bool writeError;
  /**

   * Cancel unbuffered reads for this file.

   * See setUnbufferedRead()

   */
# 151 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  void clearUnbufferedRead(void) {
    flags_ &= ~F_FILE_UNBUFFERED_READ;
  }
  uint8_t close(void);
  uint8_t contiguousRange(uint32_t* bgnBlock, uint32_t* endBlock);
  uint8_t createContiguous(SdFile* dirFile,
          const char* fileName, uint32_t size);
  /** \return The current cluster number for a file or directory. */
  uint32_t curCluster(void) const {return curCluster_;}
  /** \return The current position for a file or directory. */
  uint32_t curPosition(void) const {return curPosition_;}
  /**

   * Set the date/time callback function

   *

   * \param[in] dateTime The user's call back function.  The callback

   * function is of the form:

   *

   * \code

   * void dateTime(uint16_t* date, uint16_t* time) {

   *   uint16_t year;

   *   uint8_t month, day, hour, minute, second;

   *

   *   // User gets date and time from GPS or real-time clock here

   *

   *   // return date using FAT_DATE macro to format fields

   *   *date = FAT_DATE(year, month, day);

   *

   *   // return time using FAT_TIME macro to format fields

   *   *time = FAT_TIME(hour, minute, second);

   * }

   * \endcode

   *

   * Sets the function that is called when a file is created or when

   * a file's directory entry is modified by sync(). All timestamps,

   * access, creation, and modify, are set when a file is created.

   * sync() maintains the last access date and last modify date/time.

   *

   * See the timestamp() function.

   */
# 190 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  static void dateTimeCallback(
    void (*dateTime)(uint16_t* date, uint16_t* time)) {
    dateTime_ = dateTime;
  }
  /**

   * Cancel the date/time callback function.

   */
# 197 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  static void dateTimeCallbackCancel(void) {
    // use explicit zero since NULL is not defined for Sanguino
    dateTime_ = 0;
  }
  /** \return Address of the block that contains this file's directory. */
  uint32_t dirBlock(void) const {return dirBlock_;}
  uint8_t dirEntry(dir_t* dir);
  /** \return Index of this file's directory in the block dirBlock. */
  uint8_t dirIndex(void) const {return dirIndex_;}
  static void dirName(const dir_t& dir, char* name);
  /** \return The total number of bytes in a file or directory. */
  uint32_t fileSize(void) const {return fileSize_;}
  /** \return The first cluster number for a file or directory. */
  uint32_t firstCluster(void) const {return firstCluster_;}
  /** \return True if this is a SdFile for a directory else false. */
  uint8_t isDir(void) const {return type_ >= FAT_FILE_TYPE_MIN_DIR;}
  /** \return True if this is a SdFile for a file else false. */
  uint8_t isFile(void) const {return type_ == FAT_FILE_TYPE_NORMAL;}
  /** \return True if this is a SdFile for an open file/directory else false. */
  uint8_t isOpen(void) const {return type_ != FAT_FILE_TYPE_CLOSED;}
  /** \return True if this is a SdFile for a subdirectory else false. */
  uint8_t isSubDir(void) const {return type_ == FAT_FILE_TYPE_SUBDIR;}
  /** \return True if this is a SdFile for the root directory. */
  uint8_t isRoot(void) const {
    return type_ == FAT_FILE_TYPE_ROOT16 || type_ == FAT_FILE_TYPE_ROOT32;
  }
  void ls(uint8_t flags = 0, uint8_t indent = 0);
  uint8_t makeDir(SdFile* dir, const char* dirName);
  uint8_t open(SdFile* dirFile, uint16_t index, uint8_t oflag);
  uint8_t open(SdFile* dirFile, const char* fileName, uint8_t oflag);

  uint8_t openRoot(SdVolume* vol);
  static void printDirName(const dir_t& dir, uint8_t width);
  static void printFatDate(uint16_t fatDate);
  static void printFatTime(uint16_t fatTime);
  static void printTwoDigits(uint8_t v);
  /**

   * Read the next byte from a file.

   *

   * \return For success read returns the next byte in the file as an int.

   * If an error occurs or end of file is reached -1 is returned.

   */
# 239 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  int16_t read(void) {
    uint8_t b;
    return read(&b, 1) == 1 ? b : -1;
  }
  int16_t read(void* buf, uint16_t nbyte);
  int8_t readDir(dir_t* dir);
  static uint8_t remove(SdFile* dirFile, const char* fileName);
  uint8_t remove(void);
  /** Set the file's current position to zero. */
  void rewind(void) {
    curPosition_ = curCluster_ = 0;
  }
  uint8_t rmDir(void);
  uint8_t rmRfStar(void);
  /** Set the files position to current position + \a pos. See seekSet(). */
  uint8_t seekCur(uint32_t pos) {
    return seekSet(curPosition_ + pos);
  }
  /**

   *  Set the files current position to end of file.  Useful to position

   *  a file for append. See seekSet().

   */
# 261 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  uint8_t seekEnd(void) {return seekSet(fileSize_);}
  uint8_t seekSet(uint32_t pos);
  /**

   * Use unbuffered reads to access this file.  Used with Wave

   * Shield ISR.  Used with Sd2Card::partialBlockRead() in WaveRP.

   *

   * Not recommended for normal applications.

   */
# 269 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  void setUnbufferedRead(void) {
    if (isFile()) flags_ |= F_FILE_UNBUFFERED_READ;
  }
  uint8_t timestamp(uint8_t flag, uint16_t year, uint8_t month, uint8_t day,
          uint8_t hour, uint8_t minute, uint8_t second);
  uint8_t sync(void);
  /** Type of this SdFile.  You should use isFile() or isDir() instead of type()

   * if possible.

   *

   * \return The file or directory type.

   */
# 280 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  uint8_t type(void) const {return type_;}
  uint8_t truncate(uint32_t size);
  /** \return Unbuffered read flag. */
  uint8_t unbufferedRead(void) const {
    return flags_ & F_FILE_UNBUFFERED_READ;
  }
  /** \return SdVolume that contains this file. */
  SdVolume* volume(void) const {return vol_;}
  size_t write(uint8_t b);
  size_t write(const void* buf, uint16_t nbyte);
  size_t write(const char* str);

  void write_P(const char * str);
  void writeln_P(const char * str);

//------------------------------------------------------------------------------

// Deprecated functions  - suppress cpplint warnings with NOLINT comment
  /** \deprecated Use:

   * uint8_t SdFile::contiguousRange(uint32_t* bgnBlock, uint32_t* endBlock);

   */
# 301 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  uint8_t contiguousRange(uint32_t& bgnBlock, uint32_t& endBlock) { // NOLINT
    return contiguousRange(&bgnBlock, &endBlock);
  }
 /** \deprecated Use:

   * uint8_t SdFile::createContiguous(SdFile* dirFile,

   *   const char* fileName, uint32_t size)

   */
# 308 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  uint8_t createContiguous(SdFile& dirFile, // NOLINT
    const char* fileName, uint32_t size) {
    return createContiguous(&dirFile, fileName, size);
  }

  /**

   * \deprecated Use:

   * static void SdFile::dateTimeCallback(

   *   void (*dateTime)(uint16_t* date, uint16_t* time));

   */
# 318 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  static void dateTimeCallback(
    void (*dateTime)(uint16_t& date, uint16_t& time)) { // NOLINT
    oldDateTime_ = dateTime;
    dateTime_ = dateTime ? oldToNew : 0;
  }
  /** \deprecated Use: uint8_t SdFile::dirEntry(dir_t* dir); */
  uint8_t dirEntry(dir_t& dir) {return dirEntry(&dir);} // NOLINT
  /** \deprecated Use:

   * uint8_t SdFile::makeDir(SdFile* dir, const char* dirName);

   */
# 328 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  uint8_t makeDir(SdFile& dir, const char* dirName) { // NOLINT
    return makeDir(&dir, dirName);
  }
  /** \deprecated Use:

   * uint8_t SdFile::open(SdFile* dirFile, const char* fileName, uint8_t oflag);

   */
# 334 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  uint8_t open(SdFile& dirFile, // NOLINT
    const char* fileName, uint8_t oflag) {
    return open(&dirFile, fileName, oflag);
  }
  /** \deprecated  Do not use in new apps */
  uint8_t open(SdFile& dirFile, const char* fileName) { // NOLINT
    return open(dirFile, fileName, O_RDWR);
  }
  /** \deprecated Use:

   * uint8_t SdFile::open(SdFile* dirFile, uint16_t index, uint8_t oflag);

   */
# 345 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  uint8_t open(SdFile& dirFile, uint16_t index, uint8_t oflag) { // NOLINT
    return open(&dirFile, index, oflag);
  }
  /** \deprecated Use: uint8_t SdFile::openRoot(SdVolume* vol); */
  uint8_t openRoot(SdVolume& vol) {return openRoot(&vol);} // NOLINT

  /** \deprecated Use: int8_t SdFile::readDir(dir_t* dir); */
  int8_t readDir(dir_t& dir) {return readDir(&dir);} // NOLINT
  /** \deprecated Use:

   * static uint8_t SdFile::remove(SdFile* dirFile, const char* fileName);

   */
# 356 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  static uint8_t remove(SdFile& dirFile, const char* fileName) { // NOLINT
    return remove(&dirFile, fileName);
  }
//------------------------------------------------------------------------------
// rest are private
 private:
  static void (*oldDateTime_)(uint16_t& date, uint16_t& time); // NOLINT
  static void oldToNew(uint16_t* date, uint16_t* time) {
    uint16_t d;
    uint16_t t;
    oldDateTime_(d, t);
    *date = d;
    *time = t;
  }

 private:
  // bits defined in flags_
  // should be 0XF
  static uint8_t const F_OFLAG = (O_ACCMODE | O_APPEND | O_SYNC);
  // available bits
  static uint8_t const F_UNUSED = 0X30;
  // use unbuffered SD read
  static uint8_t const F_FILE_UNBUFFERED_READ = 0X40;
  // sync of directory entry required
  static uint8_t const F_FILE_DIR_DIRTY = 0X80;

// make sure F_OFLAG is ok




  // private data
  uint8_t flags_; // See above for definition of flags_ bits
  uint8_t type_; // type of file see above for values
  uint32_t curCluster_; // cluster for current file position
  uint32_t curPosition_; // current file position in bytes from beginning
  uint32_t dirBlock_; // SD block that contains directory entry for file
  uint8_t dirIndex_; // index of entry in dirBlock 0 <= dirIndex_ <= 0XF
  uint32_t fileSize_; // file size in bytes
  uint32_t firstCluster_; // first cluster of file
  SdVolume* vol_; // volume where file is located

  // private functions
  uint8_t addCluster(void);
  uint8_t addDirCluster(void);
  dir_t* cacheDirEntry(uint8_t action);
  static void (*dateTime_)(uint16_t* date, uint16_t* time);
  static uint8_t make83Name(const char* str, uint8_t* name);
  uint8_t openCachedEntry(uint8_t cacheIndex, uint8_t oflags);
  dir_t* readDirCache(void);
};
//==============================================================================
// SdVolume class
/**

 * \brief Cache for an SD data block

 */
# 412 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
union cache_t {
           /** Used to access cached file data blocks. */
  uint8_t data[512];
           /** Used to access cached FAT16 entries. */
  uint16_t fat16[256];
           /** Used to access cached FAT32 entries. */
  uint32_t fat32[128];
           /** Used to access cached directory entries. */
  dir_t dir[16];
           /** Used to access a cached MasterBoot Record. */
  mbr_t mbr;
           /** Used to access to a cached FAT boot sector. */
  fbs_t fbs;
};
//------------------------------------------------------------------------------
/**

 * \class SdVolume

 * \brief Access FAT16 and FAT32 volumes on SD and SDHC cards.

 */
# 431 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
class SdVolume {
 public:
  /** Create an instance of SdVolume */
  SdVolume(void) :allocSearchStart_(2), fatType_(0) {}
  /** Clear the cache and returns a pointer to the cache.  Used by the WaveRP

   *  recorder to do raw write to the SD card.  Not for normal apps.

   */
# 438 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  static uint8_t* cacheClear(void) {
    cacheFlush();
    cacheBlockNumber_ = 0XFFFFFFFF;
    return cacheBuffer_.data;
  }
  /**

   * Initialize a FAT volume.  Try partition one first then try super

   * floppy format.

   *

   * \param[in] dev The Sd2Card where the volume is located.

   *

   * \return The value one, true, is returned for success and

   * the value zero, false, is returned for failure.  Reasons for

   * failure include not finding a valid partition, not finding a valid

   * FAT file system or an I/O error.

   */
# 454 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  uint8_t init(Sd2Card* dev) { return init(dev, 1) ? true : init(dev, 0);}
  uint8_t init(Sd2Card* dev, uint8_t part);

  // inline functions that return volume info
  /** \return The volume's cluster size in blocks. */
  uint8_t blocksPerCluster(void) const {return blocksPerCluster_;}
  /** \return The number of blocks in one FAT. */
  uint32_t blocksPerFat(void) const {return blocksPerFat_;}
  /** \return The total number of clusters in the volume. */
  uint32_t clusterCount(void) const {return clusterCount_;}
  /** \return The shift count required to multiply by blocksPerCluster. */
  uint8_t clusterSizeShift(void) const {return clusterSizeShift_;}
  /** \return The logical block number for the start of file data. */
  uint32_t dataStartBlock(void) const {return dataStartBlock_;}
  /** \return The number of FAT structures on the volume. */
  uint8_t fatCount(void) const {return fatCount_;}
  /** \return The logical block number for the start of the first FAT. */
  uint32_t fatStartBlock(void) const {return fatStartBlock_;}
  /** \return The FAT type of the volume. Values are 12, 16 or 32. */
  uint8_t fatType(void) const {return fatType_;}
  /** \return The number of entries in the root directory for FAT16 volumes. */
  uint32_t rootDirEntryCount(void) const {return rootDirEntryCount_;}
  /** \return The logical block number for the start of the root directory

       on FAT16 volumes or the first cluster number on FAT32 volumes. */
# 478 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFat.h"
  uint32_t rootDirStart(void) const {return rootDirStart_;}
  /** return a pointer to the Sd2Card object for this volume */
  static Sd2Card* sdCard(void) {return sdCard_;}
//------------------------------------------------------------------------------

  // Deprecated functions  - suppress cpplint warnings with NOLINT comment
  /** \deprecated Use: uint8_t SdVolume::init(Sd2Card* dev); */
  uint8_t init(Sd2Card& dev) {return init(&dev);} // NOLINT

  /** \deprecated Use: uint8_t SdVolume::init(Sd2Card* dev, uint8_t vol); */
  uint8_t init(Sd2Card& dev, uint8_t part) { // NOLINT
    return init(&dev, part);
  }

//------------------------------------------------------------------------------
  private:
  // Allow SdFile access to SdVolume private data.
  friend class SdFile;

  // value for action argument in cacheRawBlock to indicate read from cache
  static uint8_t const CACHE_FOR_READ = 0;
  // value for action argument in cacheRawBlock to indicate cache dirty
  static uint8_t const CACHE_FOR_WRITE = 1;

  static cache_t cacheBuffer_; // 512 byte cache for device blocks
  static uint32_t cacheBlockNumber_; // Logical number of block in the cache
  static Sd2Card* sdCard_; // Sd2Card object for cache
  static uint8_t cacheDirty_; // cacheFlush() will write block if true
  static uint32_t cacheMirrorBlock_; // block number for mirror FAT
//
  uint32_t allocSearchStart_; // start cluster for alloc search
  uint8_t blocksPerCluster_; // cluster size in blocks
  uint32_t blocksPerFat_; // FAT size in blocks
  uint32_t clusterCount_; // clusters in one FAT
  uint8_t clusterSizeShift_; // shift to convert cluster count to block count
  uint32_t dataStartBlock_; // first data block number
  uint8_t fatCount_; // number of FATs on volume
  uint32_t fatStartBlock_; // start block for first FAT
  uint8_t fatType_; // volume type (12, 16, OR 32)
  uint16_t rootDirEntryCount_; // number of entries in FAT16 root dir
  uint32_t rootDirStart_; // root start block for FAT16, cluster for FAT32
  //----------------------------------------------------------------------------
  uint8_t allocContiguous(uint32_t count, uint32_t* curCluster);
  uint8_t blockOfCluster(uint32_t position) const {
          return (position >> 9) & (blocksPerCluster_ - 1);}
  uint32_t clusterStartBlock(uint32_t cluster) const {
           return dataStartBlock_ + ((cluster - 2) << clusterSizeShift_);}
  uint32_t blockNumber(uint32_t cluster, uint32_t position) const {
           return clusterStartBlock(cluster) + blockOfCluster(position);}
  static uint8_t cacheFlush(void);
  static uint8_t cacheRawBlock(uint32_t blockNumber, uint8_t action);
  static void cacheSetDirty(void) {cacheDirty_ |= CACHE_FOR_WRITE;}
  static uint8_t cacheZeroBlock(uint32_t blockNumber);
  uint8_t chainSize(uint32_t beginCluster, uint32_t* size) const;
  uint8_t fatGet(uint32_t cluster, uint32_t* value) const;
  uint8_t fatPut(uint32_t cluster, uint32_t value);
  uint8_t fatPutEOC(uint32_t cluster) {
    return fatPut(cluster, 0x0FFFFFFF);
  }
  uint8_t freeChain(uint32_t cluster);
  uint8_t isEOC(uint32_t cluster) const {
    return cluster >= (fatType_ == 16 ? FAT16EOC_MIN : FAT32EOC_MIN);
  }
  uint8_t readBlock(uint32_t block, uint8_t* dst) {
    return sdCard_->readBlock(block, dst);}
  uint8_t readData(uint32_t block, uint16_t offset,
    uint16_t count, uint8_t* dst) {
      return sdCard_->readData(block, offset, count, dst);
  }
  uint8_t writeBlock(uint32_t block, const uint8_t* dst) {
    return sdCard_->writeBlock(block, dst);
  }
};
# 21 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/SD.h" 2
# 1 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFatUtil.h" 1
/* Arduino SdFat Library

 * Copyright (C) 2008 by William Greiman

 *

 * This file is part of the Arduino SdFat Library

 *

 * This Library is free software: you can redistribute it and/or modify

 * it under the terms of the GNU General Public License as published by

 * the Free Software Foundation, either version 3 of the License, or

 * (at your option) any later version.

 *

 * This Library is distributed in the hope that it will be useful,

 * but WITHOUT ANY WARRANTY; without even the implied warranty of

 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the

 * GNU General Public License for more details.



 * You should have received a copy of the GNU General Public License

 * along with the Arduino SdFat Library.  If not, see

 * <http://www.gnu.org/licenses/>.

 */
# 22 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFatUtil.h"
/**

 * \file

 * Useful utility functions.

 */
# 26 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFatUtil.h"
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 27 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFatUtil.h" 2

# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 1 3
/* Copyright (c) 2002-2007  Marek Michalkiewicz
   Copyright (c) 2006, Carlos Lamas
   Copyright (c) 2009-2010, Jan Waclawek
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   pgmspace.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
     Eric B. Weddington <eric@ecentral.com>
     Wolfgang Haidinger <wh@vmars.tuwien.ac.at> (pgm_read_dword())
     Ivanov Anton <anton@arc.com.ru> (pgm_read_float())
 */

/** \file */
/** \defgroup avr_pgmspace <avr/pgmspace.h>: Program Space Utilities
    \code
    #include <avr/io.h>
    #include <avr/pgmspace.h>
    \endcode

    The functions in this module provide interfaces for a program to access
    data stored in program space (flash memory) of the device.  In order to
    use these functions, the target device must support either the \c LPM or
    \c ELPM instructions.

    \note These functions are an attempt to provide some compatibility with
    header files that come with IAR C, to make porting applications between
    different compilers easier.  This is not 100% compatibility though (GCC
    does not have full support for multiple address spaces yet).

    \note If you are working with strings which are completely based in ram,
    use the standard string functions described in \ref avr_string.

    \note If possible, put your constant tables in the lower 64 KB and use
    pgm_read_byte_near() or pgm_read_word_near() instead of
    pgm_read_byte_far() or pgm_read_word_far() since it is more efficient that
    way, and you can still use the upper 64K for executable code.
    All functions that are suffixed with a \c _P \e require their
    arguments to be in the lower 64 KB of the flash ROM, as they do
    not use ELPM instructions.  This is normally not a big concern as
    the linker setup arranges any program space constants declared
    using the macros from this header file so they are placed right after
    the interrupt vectors, and in front of any executable code.  However,
    it can become a problem if there are too many of these constants, or
    for bootloaders on devices with more than 64 KB of ROM.
    <em>All these functions will not work in that situation.</em>

    \note For <b>Xmega</b> devices, make sure the NVM controller
    command register (\c NVM.CMD or \c NVM_CMD) is set to 0x00 (NOP)
    before using any of these functions.
*/
# 29 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFatUtil.h" 2
/** Store and print a string in flash memory.*/

/** Store and print a string in flash memory followed by a CR/LF.*/

/** Defined so doxygen works for function definitions. */



//------------------------------------------------------------------------------
/** Return the number of bytes currently free in RAM. */
static __attribute__((unused)) int FreeRam(void) {
  extern int __bss_end;
  extern int* __brkval;
  int free_memory;
  if (reinterpret_cast<int>(__brkval) == 0) {
    // if no heap use from end of bss section
    free_memory = reinterpret_cast<int>(&free_memory)
                  - reinterpret_cast<int>(&__bss_end);
  } else {
    // use from top of stack to heap
    free_memory = reinterpret_cast<int>(&free_memory)
                  - reinterpret_cast<int>(__brkval);
  }
  return free_memory;
}

//------------------------------------------------------------------------------
/**

 * %Print a string in flash memory to the serial port.

 *

 * \param[in] str Pointer to string stored in flash memory.

 */
# 61 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFatUtil.h"
static __attribute__((noinline,unused)) void SerialPrint_P(const char * str) {
  for (uint8_t c; (c = (__extension__({ uint16_t __addr16 = (uint16_t)((uint16_t)(str)); uint8_t __result; __asm__ __volatile__ ( "lpm %0, Z" "\n\t" : "=r" (__result) : "z" (__addr16) ); __result; }))); str++) Serial.write(c);
}
//------------------------------------------------------------------------------
/**

 * %Print a string in flash memory followed by a CR/LF.

 *

 * \param[in] str Pointer to string stored in flash memory.

 */
# 70 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/utility/SdFatUtil.h"
static __attribute__((noinline,unused)) void SerialPrintln_P(const char * str) {
  SerialPrint_P(str);
  Serial.println();
}
# 22 "C:\\Program Files (x86)\\Arduino\\libraries\\SD\\src/SD.h" 2




namespace SDLib {

class File : public Stream {
 private:
  char _name[13]; // our name
  SdFile *_file; // underlying file pointer

public:
  File(SdFile f, const char *name); // wraps an underlying SdFile
  File(void); // 'empty' constructor
  virtual size_t write(uint8_t);
  virtual size_t write(const uint8_t *buf, size_t size);
  virtual int read();
  virtual int peek();
  virtual int available();
  virtual void flush();
  int read(void *buf, uint16_t nbyte);
  boolean seek(uint32_t pos);
  uint32_t position();
  uint32_t size();
  void close();
  operator bool();
  char * name();

  boolean isDirectory(void);
  File openNextFile(uint8_t mode = O_RDONLY);
  void rewindDirectory(void);

  using Print::write;
};

class SDClass {

private:
  // These are required for initialisation and use of sdfatlib
  Sd2Card card;
  SdVolume volume;
  SdFile root;

  // my quick&dirty iterator, should be replaced
  SdFile getParentDir(const char *filepath, int *indx);
public:
  // This needs to be called to set up the connection to the SD card
  // before other methods are used.
  boolean begin(uint8_t csPin = SD_CHIP_SELECT_PIN);

  // Open the specified file/directory with the supplied mode (e.g. read or
  // write, etc). Returns a File object for interacting with the file.
  // Note that currently only one file can be open at a time.
  File open(const char *filename, uint8_t mode = O_READ);
  File open(const String &filename, uint8_t mode = O_READ) { return open( filename.c_str(), mode ); }

  // Methods to determine if the requested file path exists.
  boolean exists(const char *filepath);
  boolean exists(const String &filepath) { return exists(filepath.c_str()); }

  // Create the requested directory heirarchy--if intermediate directories
  // do not exist they will be created.
  boolean mkdir(const char *filepath);
  boolean mkdir(const String &filepath) { return mkdir(filepath.c_str()); }

  // Delete the file.
  boolean remove(const char *filepath);
  boolean remove(const String &filepath) { return remove(filepath.c_str()); }

  boolean rmdir(const char *filepath);
  boolean rmdir(const String &filepath) { return rmdir(filepath.c_str()); }

private:

  // This is used to determine the mode used to open a file
  // it's here because it's the easiest place to pass the 
  // information through the directory walking function. But
  // it's probably not the best place for it.
  // It shouldn't be set directly--it is set via the parameters to `open`.
  int fileOpenMode;

  friend class File;
  friend boolean callback_openPath(SdFile&, const char *, boolean, void *);
};

extern SDClass SD;

};

// We enclose File and SD classes in namespace SDLib to avoid conflicts
// with others legacy libraries that redefines File class.

// This ensure compatibility with sketches that uses only SD library
using namespace SDLib;

// This allows sketches to use SDLib::File with other libraries (in the
// sketch you must use SDFile instead of File to disambiguate)
typedef SDLib::File SDFile;
typedef SDLib::SDClass SDFileSystemClass;
# 9 "D:\\arduino_prg\\TFT\\Arduino_Demo_UNO-Mega2560\\Example05-ShowBMP\\ShowBMP\\ShowBMP.ino" 2
# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\libraries\\SPI\\src/SPI.h" 1
/*
 * Copyright (c) 2010 by Cristian Maglie <c.maglie@arduino.cc>
 * Copyright (c) 2014 by Paul Stoffregen <paul@pjrc.com> (Transaction API)
 * Copyright (c) 2014 by Matthijs Kooijman <matthijs@stdin.nl> (SPISettings AVR)
 * Copyright (c) 2014 by Andrew J. Kroll <xxxajk@gmail.com> (atomicity fixes)
 * SPI Master library for arduino.
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of either the GNU General Public License version 2
 * or the GNU Lesser General Public License version 2.1, both as
 * published by the Free Software Foundation.
 */




# 1 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\cores\\arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 18 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\libraries\\SPI\\src/SPI.h" 2

// SPI_HAS_TRANSACTION means SPI has beginTransaction(), endTransaction(),
// usingInterrupt(), and SPISetting(clock, bitOrder, dataMode)


// SPI_HAS_NOTUSINGINTERRUPT means that SPI has notUsingInterrupt() method


// SPI_ATOMIC_VERSION means that SPI has atomicity fixes and what version.
// This way when there is a bug fix you can check this define to alert users
// of your code if it uses better version of this library.
// This also implies everything that SPI_HAS_TRANSACTION as documented above is
// available too.


// Uncomment this line to add detection of mismatched begin/end transactions.
// A mismatch occurs if other libraries fail to use SPI.endTransaction() for
// each SPI.beginTransaction().  Connect an LED to this pin.  The LED will turn
// on if any mismatch is ever detected.
//#define SPI_TRANSACTION_MISMATCH_LED 5
# 63 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\libraries\\SPI\\src/SPI.h"
// define SPI_AVR_EIMSK for AVR boards with external interrupt pins
# 72 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\libraries\\SPI\\src/SPI.h"
class SPISettings {
public:
  SPISettings(uint32_t clock, uint8_t bitOrder, uint8_t dataMode) {
    if (__builtin_constant_p(clock)) {
      init_AlwaysInline(clock, bitOrder, dataMode);
    } else {
      init_MightInline(clock, bitOrder, dataMode);
    }
  }
  SPISettings() {
    init_AlwaysInline(4000000, 1, 0x00);
  }
private:
  void init_MightInline(uint32_t clock, uint8_t bitOrder, uint8_t dataMode) {
    init_AlwaysInline(clock, bitOrder, dataMode);
  }
  void init_AlwaysInline(uint32_t clock, uint8_t bitOrder, uint8_t dataMode)
    __attribute__((__always_inline__)) {
    // Clock settings are defined as follows. Note that this shows SPI2X
    // inverted, so the bits form increasing numbers. Also note that
    // fosc/64 appears twice
    // SPR1 SPR0 ~SPI2X Freq
    //   0    0     0   fosc/2
    //   0    0     1   fosc/4
    //   0    1     0   fosc/8
    //   0    1     1   fosc/16
    //   1    0     0   fosc/32
    //   1    0     1   fosc/64
    //   1    1     0   fosc/64
    //   1    1     1   fosc/128

    // We find the fastest clock that is less than or equal to the
    // given clock rate. The clock divider that results in clock_setting
    // is 2 ^^ (clock_div + 1). If nothing is slow enough, we'll use the
    // slowest (128 == 2 ^^ 7, so clock_div = 6).
    uint8_t clockDiv;

    // When the clock is known at compiletime, use this if-then-else
    // cascade, which the compiler knows how to completely optimize
    // away. When clock is not known, use a loop instead, which generates
    // shorter code.
    if (__builtin_constant_p(clock)) {
      if (clock >= 16000000L / 2) {
        clockDiv = 0;
      } else if (clock >= 16000000L / 4) {
        clockDiv = 1;
      } else if (clock >= 16000000L / 8) {
        clockDiv = 2;
      } else if (clock >= 16000000L / 16) {
        clockDiv = 3;
      } else if (clock >= 16000000L / 32) {
        clockDiv = 4;
      } else if (clock >= 16000000L / 64) {
        clockDiv = 5;
      } else {
        clockDiv = 6;
      }
    } else {
      uint32_t clockSetting = 16000000L / 2;
      clockDiv = 0;
      while (clockDiv < 6 && clock < clockSetting) {
        clockSetting /= 2;
        clockDiv++;
      }
    }

    // Compensate for the duplicate fosc/64
    if (clockDiv == 6)
    clockDiv = 7;

    // Invert the SPI2X bit
    clockDiv ^= 0x1;

    // Pack into the SPISettings class
    spcr = (1 << (6)) | (1 << (4)) | ((bitOrder == 0) ? (1 << (5)) : 0) |
      (dataMode & 0x0C /* CPOL = bit 3, CPHA = bit 2 on SPCR*/) | ((clockDiv >> 1) & 0x03 /* SPR1 = bit 1, SPR0 = bit 0 on SPCR*/);
    spsr = clockDiv & 0x01 /* SPI2X = bit 0 on SPSR*/;
  }
  uint8_t spcr;
  uint8_t spsr;
  friend class SPIClass;
};


class SPIClass {
public:
  // Initialize the SPI library
  static void begin();

  // If SPI is used from within an interrupt, this function registers
  // that interrupt with the SPI library, so beginTransaction() can
  // prevent conflicts.  The input interruptNumber is the number used
  // with attachInterrupt.  If SPI is used from a different interrupt
  // (eg, a timer), interruptNumber should be 255.
  static void usingInterrupt(uint8_t interruptNumber);
  // And this does the opposite.
  static void notUsingInterrupt(uint8_t interruptNumber);
  // Note: the usingInterrupt and notUsingInterrupt functions should
  // not to be called from ISR context or inside a transaction.
  // For details see:
  // https://github.com/arduino/Arduino/pull/2381
  // https://github.com/arduino/Arduino/pull/2449

  // Before using SPI.transfer() or asserting chip select pins,
  // this function is used to gain exclusive access to the SPI bus
  // and configure the correct settings.
  inline static void beginTransaction(SPISettings settings) {
    if (interruptMode > 0) {
      uint8_t sreg = (*(volatile uint8_t *)((0x3F) + 0x20));
      __asm__ __volatile__ ("cli" ::: "memory");


      if (interruptMode == 1) {
        interruptSave = (*(volatile uint8_t *)((0x1D) + 0x20));
        (*(volatile uint8_t *)((0x1D) + 0x20)) &= ~interruptMask;
        (*(volatile uint8_t *)((0x3F) + 0x20)) = sreg;
      } else

      {
        interruptSave = sreg;
      }
    }
# 203 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\libraries\\SPI\\src/SPI.h"
    (*(volatile uint8_t *)((0x2C) + 0x20)) = settings.spcr;
    (*(volatile uint8_t *)((0x2D) + 0x20)) = settings.spsr;
  }

  // Write to the SPI bus (MOSI pin) and also receive (MISO pin)
  inline static uint8_t transfer(uint8_t data) {
    (*(volatile uint8_t *)((0x2E) + 0x20)) = data;
    /*
     * The following NOP introduces a small delay that can prevent the wait
     * loop form iterating when running at the maximum speed. This gives
     * about 10% more speed, even if it seems counter-intuitive. At lower
     * speeds it is unnoticed.
     */
    asm volatile("nop");
    while (!((*(volatile uint8_t *)((0x2D) + 0x20)) & (1 << (7)))) ; // wait
    return (*(volatile uint8_t *)((0x2E) + 0x20));
  }
  inline static uint16_t transfer16(uint16_t data) {
    union { uint16_t val; struct { uint8_t lsb; uint8_t msb; }; } in, out;
    in.val = data;
    if (!((*(volatile uint8_t *)((0x2C) + 0x20)) & (1 << (5)))) {
      (*(volatile uint8_t *)((0x2E) + 0x20)) = in.msb;
      asm volatile("nop"); // See transfer(uint8_t) function
      while (!((*(volatile uint8_t *)((0x2D) + 0x20)) & (1 << (7)))) ;
      out.msb = (*(volatile uint8_t *)((0x2E) + 0x20));
      (*(volatile uint8_t *)((0x2E) + 0x20)) = in.lsb;
      asm volatile("nop");
      while (!((*(volatile uint8_t *)((0x2D) + 0x20)) & (1 << (7)))) ;
      out.lsb = (*(volatile uint8_t *)((0x2E) + 0x20));
    } else {
      (*(volatile uint8_t *)((0x2E) + 0x20)) = in.lsb;
      asm volatile("nop");
      while (!((*(volatile uint8_t *)((0x2D) + 0x20)) & (1 << (7)))) ;
      out.lsb = (*(volatile uint8_t *)((0x2E) + 0x20));
      (*(volatile uint8_t *)((0x2E) + 0x20)) = in.msb;
      asm volatile("nop");
      while (!((*(volatile uint8_t *)((0x2D) + 0x20)) & (1 << (7)))) ;
      out.msb = (*(volatile uint8_t *)((0x2E) + 0x20));
    }
    return out.val;
  }
  inline static void transfer(void *buf, size_t count) {
    if (count == 0) return;
    uint8_t *p = (uint8_t *)buf;
    (*(volatile uint8_t *)((0x2E) + 0x20)) = *p;
    while (--count > 0) {
      uint8_t out = *(p + 1);
      while (!((*(volatile uint8_t *)((0x2D) + 0x20)) & (1 << (7)))) ;
      uint8_t in = (*(volatile uint8_t *)((0x2E) + 0x20));
      (*(volatile uint8_t *)((0x2E) + 0x20)) = out;
      *p++ = in;
    }
    while (!((*(volatile uint8_t *)((0x2D) + 0x20)) & (1 << (7)))) ;
    *p = (*(volatile uint8_t *)((0x2E) + 0x20));
  }
  // After performing a group of transfers and releasing the chip select
  // signal, this function allows others to access the SPI bus
  inline static void endTransaction(void) {
# 269 "C:\\Users\\user\\AppData\\Local\\Arduino15\\packages\\arduino\\hardware\\avr\\1.6.10\\libraries\\SPI\\src/SPI.h"
    if (interruptMode > 0) {

      uint8_t sreg = (*(volatile uint8_t *)((0x3F) + 0x20));

      __asm__ __volatile__ ("cli" ::: "memory");

      if (interruptMode == 1) {
        (*(volatile uint8_t *)((0x1D) + 0x20)) = interruptSave;
        (*(volatile uint8_t *)((0x3F) + 0x20)) = sreg;
      } else

      {
        (*(volatile uint8_t *)((0x3F) + 0x20)) = interruptSave;
      }
    }
  }

  // Disable the SPI bus
  static void end();

  // This function is deprecated.  New applications should use
  // beginTransaction() to configure SPI settings.
  inline static void setBitOrder(uint8_t bitOrder) {
    if (bitOrder == 0) (*(volatile uint8_t *)((0x2C) + 0x20)) |= (1 << (5));
    else (*(volatile uint8_t *)((0x2C) + 0x20)) &= ~((1 << (5)));
  }
  // This function is deprecated.  New applications should use
  // beginTransaction() to configure SPI settings.
  inline static void setDataMode(uint8_t dataMode) {
    (*(volatile uint8_t *)((0x2C) + 0x20)) = ((*(volatile uint8_t *)((0x2C) + 0x20)) & ~0x0C /* CPOL = bit 3, CPHA = bit 2 on SPCR*/) | dataMode;
  }
  // This function is deprecated.  New applications should use
  // beginTransaction() to configure SPI settings.
  inline static void setClockDivider(uint8_t clockDiv) {
    (*(volatile uint8_t *)((0x2C) + 0x20)) = ((*(volatile uint8_t *)((0x2C) + 0x20)) & ~0x03 /* SPR1 = bit 1, SPR0 = bit 0 on SPCR*/) | (clockDiv & 0x03 /* SPR1 = bit 1, SPR0 = bit 0 on SPCR*/);
    (*(volatile uint8_t *)((0x2D) + 0x20)) = ((*(volatile uint8_t *)((0x2D) + 0x20)) & ~0x01 /* SPI2X = bit 0 on SPSR*/) | ((clockDiv >> 2) & 0x01 /* SPI2X = bit 0 on SPSR*/);
  }
  // These undocumented functions should not be used.  SPI.transfer()
  // polls the hardware flag which is automatically cleared as the
  // AVR responds to SPI's interrupt
  inline static void attachInterrupt() { (*(volatile uint8_t *)((0x2C) + 0x20)) |= (1 << (7)); }
  inline static void detachInterrupt() { (*(volatile uint8_t *)((0x2C) + 0x20)) &= ~(1 << (7)); }

private:
  static uint8_t initialized;
  static uint8_t interruptMode; // 0=none, 1=mask, 2=global
  static uint8_t interruptMask; // which interrupts to mask
  static uint8_t interruptSave; // temp storage, to restore state



};

extern SPIClass SPI;
# 10 "D:\\arduino_prg\\TFT\\Arduino_Demo_UNO-Mega2560\\Example05-ShowBMP\\ShowBMP\\ShowBMP.ino" 2


// The control pins for the LCD can be assigned to any digital or
// analog pins...but we'll use the analog pins as this allows us to
// double up the pins with the touch screen (see the TFT paint example).
# 23 "D:\\arduino_prg\\TFT\\Arduino_Demo_UNO-Mega2560\\Example05-ShowBMP\\ShowBMP\\ShowBMP.ino"
// When using the BREAKOUT BOARD only, use these 8 data lines to the LCD:
// For the Arduino Uno, Duemilanove, Diecimila, etc.:
//   D0 connects to digital pin 8  (Notice these are
//   D1 connects to digital pin 9   NOT in order!)
//   D2 connects to digital pin 2
//   D3 connects to digital pin 3
//   D4 connects to digital pin 4
//   D5 connects to digital pin 5
//   D6 connects to digital pin 6
//   D7 connects to digital pin 7
// For the Arduino Mega, use digital pins 22 through 29
// (on the 2-row header at the end of the board).

// Assign human-readable names to some common 16-bit color values:
# 46 "D:\\arduino_prg\\TFT\\Arduino_Demo_UNO-Mega2560\\Example05-ShowBMP\\ShowBMP\\ShowBMP.ino"
Adafruit_TFTLCD tft(A3 /* Chip Select goes to Analog 3*/, A2 /* Command/Data goes to Analog 2*/, A1 /* LCD Write goes to Analog 1*/, A0 /* LCD Read goes to Analog 0*/, A4 /* Can alternately just connect to Arduino's reset pin*/);
// If using the shield, all control and data lines are fixed, and
// a simpler declaration can optionally be used:
// Adafruit_TFTLCD tft;





const int __Gnbmp_height = 320; // bmp hight
const int __Gnbmp_width = 240; // bmp width

unsigned char __Gnbmp_image_offset = 0; // offset

int __Gnfile_num = 4; // num of file

char __Gsbmp_files[4][20 /* max file name length*/] = // add file name here
{
"flower.bmp",
"tiger.bmp",
"tree.bmp",
"RedRose.bmp",
};
File bmpFile;

/*********************************************/
// This procedure reads a bitmap and draws it to the screen
// its sped up by reading many pixels worth of data at a time
// instead of just one pixel at a time. increading the buffer takes
// more RAM but makes the drawing a little faster. 20 pixels' worth
// is probably a good place




void bmpdraw(File f, int x, int y)
{
    bmpFile.seek(__Gnbmp_image_offset);

    uint32_t time = millis();

    uint8_t sdbuffer[180 /* BUFFPIXELx3*/]; // 3 * pixels to buffer

    for (int i=0; i< __Gnbmp_height; i++) {
        for(int j=0; j<(240/60 /* must be a divisor of 240 */); j++) {
            bmpFile.read(sdbuffer, 180 /* BUFFPIXELx3*/);

            uint8_t buffidx = 0;
            int offset_x = j*60 /* must be a divisor of 240 */;
            unsigned int __color[60 /* must be a divisor of 240 */];

            for(int k=0; k<60 /* must be a divisor of 240 */; k++) {
                __color[k] = sdbuffer[buffidx+2]>>3; // read
                __color[k] = __color[k]<<6 | (sdbuffer[buffidx+1]>>2); // green
                __color[k] = __color[k]<<5 | (sdbuffer[buffidx+0]>>3); // blue

                buffidx += 3;
            }

     for (int m = 0; m < 60 /* must be a divisor of 240 */; m ++) {
              tft.drawPixel(m+offset_x, i,__color[m]);
     }
        }
    }

    Serial.print(millis() - time, 10);
    Serial.println(" ms");
}

boolean bmpReadHeader(File f)
{
    // read header
    uint32_t tmp;
    uint8_t bmpDepth;

    if (read16(f) != 0x4D42) {
        // magic bytes missing
        return false;
    }

    // read file size
    tmp = read32(f);
    Serial.print("size 0x");
    Serial.println(tmp, 16);

    // read and ignore creator bytes
    read32(f);

    __Gnbmp_image_offset = read32(f);
    Serial.print("offset ");
    Serial.println(__Gnbmp_image_offset, 10);

    // read DIB header
    tmp = read32(f);
    Serial.print("header size ");
    Serial.println(tmp, 10);

    int bmp_width = read32(f);
    int bmp_height = read32(f);

    if(bmp_width != __Gnbmp_width || bmp_height != __Gnbmp_height) { // if image is not 320x240, return false
        return false;
    }

    if (read16(f) != 1)
    return false;

    bmpDepth = read16(f);
    Serial.print("bitdepth ");
    Serial.println(bmpDepth, 10);

    if (read32(f) != 0) {
        // compression not supported!
        return false;
    }

    Serial.print("compression ");
    Serial.println(tmp, 10);

    return true;
}

/*********************************************/
// These read data from the SD card file and convert them to big endian
// (the data is stored in little endian format!)

// LITTLE ENDIAN!
uint16_t read16(File f)
{
    uint16_t d;
    uint8_t b;
    b = f.read();
    d = f.read();
    d <<= 8;
    d |= b;
    return d;
}

// LITTLE ENDIAN!
uint32_t read32(File f)
{
    uint32_t d;
    uint16_t b;

    b = read16(f);
    d = read16(f);
    d <<= 16;
    d |= b;
    return d;
}

void setup(void) {
  Serial.begin(9600);
  Serial.println((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((__progmem__)) = ("TFT LCD test"); &__c[0];})))));




  Serial.println((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((__progmem__)) = ("Using Adafruit 2.4\" TFT Breakout Board Pinout"); &__c[0];})))));


  Serial.print("TFT size is "); Serial.print(tft.width()); Serial.print("x"); Serial.println(tft.height());

  tft.reset();

  uint16_t identifier = tft.readID();
  if(identifier==0x0101)
      identifier=0x9341;

  if(identifier == 0x9325) {
    Serial.println((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((__progmem__)) = ("Found ILI9325 LCD driver"); &__c[0];})))));
  } else if(identifier == 0x4535) {
    Serial.println((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((__progmem__)) = ("Found LGDP4535 LCD driver"); &__c[0];})))));
  }else if(identifier == 0x9328) {
    Serial.println((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((__progmem__)) = ("Found ILI9328 LCD driver"); &__c[0];})))));
  } else if(identifier == 0x7575) {
    Serial.println((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((__progmem__)) = ("Found HX8347G LCD driver"); &__c[0];})))));
  } else if(identifier == 0x9341) {
    Serial.println((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((__progmem__)) = ("Found ILI9341 LCD driver"); &__c[0];})))));
  } else if(identifier == 0x8357) {
    Serial.println((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((__progmem__)) = ("Found HX8357D LCD driver"); &__c[0];})))));
  } else {
    Serial.print((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((__progmem__)) = ("Unknown LCD driver chip: "); &__c[0];})))));
    Serial.println(identifier, 16);
    Serial.println((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((__progmem__)) = ("If using the Adafruit 2.4\" TFT Arduino shield, the line:"); &__c[0];})))));
    Serial.println((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((__progmem__)) = ("  #define USE_ADAFRUIT_SHIELD_PINOUT"); &__c[0];})))));
    Serial.println((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((__progmem__)) = ("should appear in the library header (Adafruit_TFT.h)."); &__c[0];})))));
    Serial.println((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((__progmem__)) = ("If using the breakout board, it should NOT be #defined!"); &__c[0];})))));
    Serial.println((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((__progmem__)) = ("Also if using the breakout, double-check that all wiring"); &__c[0];})))));
    Serial.println((reinterpret_cast<const __FlashStringHelper *>((__extension__({static const char __c[] __attribute__((__progmem__)) = ("matches the tutorial."); &__c[0];})))));
    return;
  }

  tft.begin(identifier);
  tft.fillScreen(0x001F);



  //Init SD_Card
  pinMode(10, 0x1);

  if (!SD.begin(10)) {
    Serial.println("initialization failed!");
    tft.setCursor(0, 0);
    tft.setTextColor(0xFFFF);
    tft.setTextSize(1);
    tft.println("SD Card Init fail.");
  }else
  Serial.println("initialization done.");
}

void loop(void) {
     for(unsigned char i=0; i<__Gnfile_num; i++) {
        bmpFile = SD.open(__Gsbmp_files[i]);
        if (! bmpFile) {
            Serial.println("didnt find image");
            tft.setTextColor(0xFFFF); tft.setTextSize(1);
            tft.println("didnt find BMPimage");
            while (1);
        }

        if(! bmpReadHeader(bmpFile)) {
            Serial.println("bad bmp");
            tft.setTextColor(0xFFFF); tft.setTextSize(1);
            tft.println("bad bmp");
            return;
        }

        bmpdraw(bmpFile, 0, 0);
        bmpFile.close();
        delay(1000);
        delay(1000);
    }

}
