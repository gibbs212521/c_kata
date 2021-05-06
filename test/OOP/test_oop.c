#include "test_oop.h"

void oop_test_suite()
{
    test_1_test_statistics();
    test_2_test_book_statistics();
    test_3_test_membook_inheritance();
    test_4_test_membook_list_check();
}

void test_1_test_statistics(){
    /// VARIABLE ASSIGNMENT
    bool test_passed = true;
    char test_name[] = "Base Statistics Test";
    struct Statistics stats;
    buildStatistics(&stats);
    stats.Add(&stats, 90);
    
    /// CASE 1
    stats.AddLetter(&stats,'e');
    char class_method[30] = "Statistics.AddLetter";
    char test_case[30] = "Bad Input Case";
    bool condition = stats.average == 90;
    runTest(condition, class_method, test_case, &test_passed);

    /// CASE 2
    stats.AddLetter(&stats, 'A');
    strcpy(class_method,"Statistics.AddLetter");
    strcpy(test_case, "Good Input Case");
    condition = stats.average == 90;
    runTest(condition, class_method, test_case, &test_passed);

    /// CASE 3
    stats.Add(&stats, 60.0);
    strcpy(class_method,"Statistics.Add");
    strcpy(test_case, "Good Input Case");
    condition = stats.average == 80;
    runTest(condition, class_method, test_case, &test_passed);

    
    /// CLOSING STATEMENTS
    stats.ShowStats(stats);
    testResult(test_name, test_passed);
}


void test_2_test_book_statistics()
{
    /// VARIABLE ASSIGNMENT
    bool test_passed = true;
    char test_name[40] = "Book Statistics Test       ";
    char book_name[] = "Gibb's Gradebook";
    struct MyBookClass book;
    buildBook(&book, book_name);


    book.AddGrade(&book, 90);
    
    /// CASE 1
    book.AddLetterGrade(&book,'e');
    char class_method[30] = "book.AddLetterGrade";
    char test_case[30] = "Bad Input Case      ";
    bool condition = book.stats.average == 90;
    runTest(condition, class_method, test_case, &test_passed);

    /// CASE 2
    book.AddLetterGrade(&book, 'A');
    strcpy(class_method,"book.AddLetterGrade");
    strcpy(test_case, "Good Input Case    ");
    condition = book.stats.average == 90;
    runTest(condition, class_method, test_case, &test_passed);

    /// CASE 3
    book.AddGrade(&book, 60.0);
    strcpy(class_method,"book.AddGrade    ");
    strcpy(test_case, "Good Input Case    ");
    condition = book.stats.average == 80;
    runTest(condition, class_method, test_case, &test_passed);

    /// CASE 4
    book.AddGrade(&book, 101.0);
    strcpy(class_method,"book.AddGrade    ");
    strcpy(test_case, "High Input Case    ");
    condition = book.stats.average == 80;
    runTest(condition, class_method, test_case, &test_passed);

    /// CASE 5
    book.AddGrade(&book, -1.0);
    strcpy(class_method,"book.AddGrade    ");
    strcpy(test_case, "Low Input Case     ");
    condition = book.stats.average == 80;
    runTest(condition, class_method, test_case, &test_passed);

    /// CASE 5
    book.AddLetterGrade(&book, 'c');
    book.AddLetterGrade(&book, 'a');
    strcpy(class_method,"book.AddLetterGrade");
    strcpy(test_case, "Lower Case Letter  ");
    condition = book.stats.average == 80;
    runTest(condition, class_method, test_case, &test_passed);
    
    /// CLOSING STATEMENTS
    book.ShowStats(book);
    testResult(test_name, test_passed);
}

void test_3_test_membook_inheritance()
{
    /// VARIABLE ASSIGNMENT
    bool test_passed = true;
    char test_name[40] = "MemBook Inheritance Test";
    char book_name[] = "Gibb's Gradebook In Memory";
    struct MemBook book;
    buildMemBook(&book, book_name);


    book.AddGrade(&book, 90);
    
    /// CASE 1
    book.AddLetterGrade(&book,'e');
    char class_method[30] = "MemBook.AddLetter";
    char test_case[30] = "Bad Input Case      ";
    bool condition = book.stats.average == 90;
    runTest(condition, class_method, test_case, &test_passed);

    /// CASE 2
    book.AddLetterGrade(&book, 'A');
    strcpy(class_method,"MemBook.AddLetter");
    strcpy(test_case, "Good Input Case    ");
    condition = book.stats.average == 90;
    runTest(condition, class_method, test_case, &test_passed);

    /// CASE 3
    book.AddGrade(&book, 60.0);
    strcpy(class_method,"MemBook.AddGrade    ");
    strcpy(test_case, "Good Input Case    ");
    condition = book.stats.average == 80;
    runTest(condition, class_method, test_case, &test_passed);

    /// CASE 4
    book.AddGrade(&book, 101.0);
    strcpy(class_method,"MemBook.AddGrade    ");
    strcpy(test_case, "High Input Case    ");
    condition = book.stats.average == 80;
    runTest(condition, class_method, test_case, &test_passed);

    /// CASE 5
    book.AddGrade(&book, -1.0);
    strcpy(class_method,"MemBook.AddGrade    ");
    strcpy(test_case, "Low Input Case     ");
    condition = book.stats.average == 80;
    runTest(condition, class_method, test_case, &test_passed);

    
    /// CLOSING STATEMENTS
    book.ShowStats(book);
    testResult(test_name, test_passed);
    
}

void test_4_test_membook_list_check()
{
    /// VARIABLE ASSIGNMENT
    bool test_passed = true;
    char test_name[40] = "MemBook Grade Collection Test";
    char book_name[] = "Gibb's Gradebook In Memory";
    double grades[7] = {95.0, 70.0, 90.0, 80.0, 90.0, 80.0, 90.0};
    struct MemBook book;
    buildMemBook(&book, book_name);

    
    /// CASE 1
    book.AddGrade(&book, 95);
    book.AddGrade(&book, 70);
    book.AddGrade(&book, 90);
    book.AddGrade(&book, 80);
    char class_method[30] = "MemBook.AddGrade   ";
    char test_case[30] = "Multiple Input Case  ";
    bool condition = book.stats.average == 83.75;
    runTest(condition, class_method, test_case, &test_passed);

    /// CASE 2
    book.AddLetterGrade(&book, 'a');
    book.AddLetterGrade(&book, 'B');
    book.AddLetterGrade(&book, 'A');
    strcpy(class_method,"MemBook.AddLetter   ");
    strcpy(test_case, "Multiple Input Case  ");
    condition = book.stats.average == 85;
    runTest(condition, class_method, test_case, &test_passed);

    /// CASE 3
    strcpy(class_method,"MemBook.Grades    ");
    strcpy(test_case, "Grades List Check    ");
    for(int i=0; i<7; i++)
    {
        condition = book.grades[i] == grades[i];
        // printf("book.grades: %.2f \t grades %.2f\n",book.grades[i], grades[i]);
        if(condition == false)
            break;
    }
    
    runTest(condition, class_method, test_case, &test_passed);

    
    /// CLOSING STATEMENTS
    book.ShowStats(book);
    testResult(test_name, test_passed);
    
}


void runTest(bool condition, char class_method[], char test_case[], bool * ptest_passed)
{
    if(condition == true)
        printf("\t %s \t %s \t PASSED\n",class_method, test_case);
    else
    {
        printf("\t %s \t %s \t FAILED\n",class_method, test_case);
        *ptest_passed = false;
    }
}

void testResult(char test_name[], bool test_passed)
{
    if(test_passed==true)
        printf("\t\t\t\t\t\t\t\t\t PASSED    %s\n", test_name);
    else
        printf("\t\t\t\t\t\t\t\t\t FAILED    %s\n", test_name);
}
