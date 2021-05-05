#include "test_oop.h"

void oop_test_suite()
{
    test_0_test_statistics();
}

void test_0_test_statistics(){
    struct Statistics stats;
    stats.Add(&stats, 90);
    stats.ShowStats(&stats);
    stats.AddLetter(&stats,'e');
    char class_method[] = "Statistics.AddLetter";
    char test_case[] = "Bad Input Case"
    #define _test_ stats.average == 90;
    if(_test_)
        printf("%s %s \t PASSED",class_method,test_case);
    else
        printf("Statistics.AddLetter \t FAILED");
    stats.Add(&stats, 70.0);
    

}