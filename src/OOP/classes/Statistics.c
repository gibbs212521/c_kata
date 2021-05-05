#include "Statistics.h"


void buildStatistics(struct Statistics * this)
{
    this->sum = 0;
    this->item_count = 0;
    this->precision = 2;
    this->high = -100000;
    this->low = 100000;
    this->Add = __Add__;
    this->AddLetter = __AddLetter__;
    this->ShowStats = __ShowStats__;
    this->SetPrecision = __SetPrecision__;
}

struct Statistics constructStatistics()
{
    struct Statistics stats;
    buildStatistics(&stats);
    return stats;
}

void __Add__(struct Statistics * this, double grade)
{
    this->sum += grade;
    this->item_count += 1;
    this->average = this->sum / this->item_count;
    
}

void __AddLetter__(struct Statistics * this, char letter)
{
    if((letter == 'a') || (letter == 'A'))
        __Add__(this, 90.0);
    else if((letter == 'b') || (letter == 'B'))
        __Add__(this, 80.0);
    else if((letter == 'c') || (letter == 'C'))
        __Add__(this, 70.0);
    else if((letter == 'd') || (letter == 'D'))
        __Add__(this, 65.0);
    else if((letter == 'f') || (letter == 'F'))
        __Add__(this, 55.0);
    else
        printf("Could not add letter to statistics, %c is an invalid input",letter);
}

void __ShowStats__(struct Statistics * this)
{
    double average = this->average;
    printf("Your average is : %.2f", average);
}

void __SetPrecision__(struct Statistics * this, int precision)
{
    this->precision=precision;
}
