#ifndef __BOOK_Statistics_H__
#define __BOOK_Statistics_H__
#include <stdio.h>
#include <math.h>

struct Statistics
{
    /// Class Variables Without Assigned Values
    int item_count;
    int precision;
    double sum;
    double high;
    double low;
    double average;
    char letter_rating;

    /// Class Method Vectors Without Assigned Locations
    void (*Add)(struct Statistics * this, double grade);
    void (*AddLetter)(struct Statistics * this, char letter);
    void (*ShowStats)(struct Statistics this);
    void (*SetPrecision)(struct Statistics * this, int precision);
    void (*Build)(struct Statistics * this);
    double (*GetItemFromLetter)(char letter);
};

void buildStatistics(struct Statistics * this);
struct Statistics constructStatistics();

void __Add__(struct Statistics * this, double grade);
void __AddLetter__(struct Statistics * this, char letter);
void __ShowStats__(struct Statistics this);
void __SetPrecision__(struct Statistics * this, int precision);
double __GetItemFromLetter__(char letter);
#endif
