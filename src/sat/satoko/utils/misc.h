//===--- misc.h -------------------------------------------------------------===
//
//                     satoko: Satisfiability solver
//
// This file is distributed under the BSD 2-Clause License.
// See LICENSE for details.
//
//===------------------------------------------------------------------------===
#ifndef satoko__utils__misc_h
#define satoko__utils__misc_h

#include <stdint.h>

#include "misc/util/abc_global.h"
ABC_NAMESPACE_HEADER_START

#define mkt_swap(type, a, b)  { type t = a; a = b; b = t; }

static inline unsigned mkt_uint_max(unsigned a, unsigned b)
{
    return a > b ?  a : b;
}

static inline int mkt_uint_compare(const void *p1, const void *p2)
{
    const unsigned pp1 = *(const unsigned *)p1;
    const unsigned pp2 = *(const unsigned *)p2;

    if (pp1 < pp2)
        return -1;
    if (pp1 > pp2)
        return 1;
    return 0;
}

ABC_NAMESPACE_HEADER_END
#endif /* satoko__utils__misc_h */