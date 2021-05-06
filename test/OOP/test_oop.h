#ifndef __TEST_FUNCTIONAL_PROGRAMMING_H__
#define __TEST_FUNCTIONAL_PROGRAMMING_H__
#include ".\..\..\src\OOP\oop.h"
#include ".\..\..\src\OOP\classes\Book.h"
#include ".\..\..\src\OOP\classes\MemBook.h"
#include ".\..\..\src\OOP\classes\Statistics.h"
#include <stdio.h>
#include <stdbool.h>

void oop_test_suite();
void test_1_test_statistics();
void test_2_test_book_statistics();
void test_3_test_membook_inheritance();
void test_4_test_membook_list_check();
void runTest(bool condition, char class_method[], char test_case[], bool * test_passed);
void testResult(char test_name[], bool test_passed);
#endif
