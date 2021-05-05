#ifndef __BOOK_CLS_H__
#define __BOOK_CLS_H__
#include "Statistics.h"

struct MyBookClass
{
    /// Class Variables Without Assigned Values
    char name[20];

    /// Class Objects Without Modifications
    struct Statistics stats;

    /// Class Method Vectors Without Assigned Locations
    double (*AddGrade)(struct * this, double grade);
    double (*AddGrade)(struct * this, char letter);
    double (*AddGrade)(struct * this, char * letter);
    

};

void buildBook(struct * this);

#endif
