#ifndef __BOOK_CLS_H__
#define __BOOK_CLS_H__

struct MyBookClass{
    /// Class Prepackaged Variables
    char name[20];
    double (*AddGrade)(struct *, double grade);
    double (*AddGrade)(struct *, char letter);
    double (*AddGrade)(struct *, char * letter);

};


#endif
