
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// <concepts> feature macros

/*  Constant                                    Value
    __cpp_lib_concepts                          201806L

*/

// XFAIL
// #include <concepts>
#include <cassert>
#include "test_macros.h"

int main()
{
//  ensure that the macros that are supposed to be defined in <concepts> are defined.

/*
#if !defined(__cpp_lib_fooby)
# error "__cpp_lib_fooby is not defined"
#elif __cpp_lib_fooby < 201606L
# error "__cpp_lib_fooby has an invalid value"
#endif
*/
}
