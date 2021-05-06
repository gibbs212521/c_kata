#ifndef __BOOK_CLS_H__
#define __BOOK_CLS_H__
#include <string.h>
#include "Statistics.h"

struct MyBookClass
{
    /// Class Variables Without Assigned Values
    char name[20];

    /// Class Objects Without Modifications
    struct Statistics stats;
    struct Statistics * pstats;

    /// Class Method Vectors Without Assigned Locations
    double (*AddGrade)(struct MyBookClass * this, double grade);
    double (*AddLetterGrade)(struct MyBookClass * this, char letter);
    void (*ShowStats)(struct MyBookClass this);
    double (*GetGradeFromLetter)(char letter);
};

void buildBook(struct MyBookClass * this, char name[]);

double __AddGrade__(struct MyBookClass * this, double grade);
double __AddLetterGrade__(struct MyBookClass * this, char letter);
void __ShowBookStats__(struct MyBookClass this);


#endif
