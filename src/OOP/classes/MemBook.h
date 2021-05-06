#ifndef __MEM_BOOK_CLS_H__
#define __MEM_BOOK_CLS_H__
#include <malloc.h>
#include <stdlib.h>
#include "Statistics.h"
#include "Book.h"

struct MemBook
{
    /// Class Variables Without Assigned Values
    struct MyBookClass base;
    char name[20];

    /// Class Objects Without Modifications
    struct Statistics stats;
    struct Statistics * pstats;

    double * grades;

    /// Class Method Vectors Without Assigned Locations
    double (*AddGrade)(struct MemBook * this, double grade);
    double (*AddLetterGrade)(struct MemBook * this, char letter);
    void (*ShowStats)(struct MemBook this);
    double (*GetGradeFromLetter)(char letter);
};

void buildMemBook(struct MemBook * this, char name[]);
double __AddGradeToMem__(struct MemBook * this, double grade);
double __AddLetterGradeToMem__(struct MemBook * this, char letter);
// void __ShowMemBookStats__(struct MemBook this);


#endif
