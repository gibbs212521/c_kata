#ifndef __TST_OOP_H__
#define __TST_OOP_H__
#ifdef _WIN32
#include ".\..\test.h"
#include ".\..\..\src\OOP\oop.h"
#include ".\..\..\src\OOP\classes\Book.h"
#include ".\..\..\src\OOP\classes\MemBook.h"
#include ".\..\..\src\OOP\classes\Statistics.h"
#elif __linux__
#include "./../test.h"
#include "./../../src/OOP/oop.h"
#include "./../../src/OOP/classes/Book.h"
#include "./../../src/OOP/classes/MemBook.h"
#include "./../../src/OOP/classes/Statistics.h"
#endif


void oop_test_suite();
void test_1_test_statistics();
void test_2_test_book_statistics();
void test_3_test_membook_inheritance();
void test_4_test_membook_list_check();
#endif
