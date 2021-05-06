#ifndef __TEST_KATA_BASE_H__
#define __TEST_KATA_BASE_H__
#include <stdio.h>
#include <stdbool.h>

void runTest(bool condition, char class_method[], char test_case[], bool * test_passed);
void testResult(char test_name[], bool test_passed);

#endif
