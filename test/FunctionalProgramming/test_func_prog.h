#ifndef __TST_FUNCTIONAL_PROGRAMMING_H__
#define __TST_FUNCTIONAL_PROGRAMMING_H__

#ifdef _WIN32
#include ".\..\..\src\FunctionalProgramming\func_prog.h"
#elif __linux__
#include "./../../src/FunctionalProgramming/func_prog.h"
#endif

void func_prog_test_suite();
void test_0_pass_method();

#endif
