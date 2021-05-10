#include "Statistics.h"


void buildStatistics(struct Statistics * this)
{
    /// Data Class Object
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

void __Add__(struct Statistics * this, double item)
{
    this->sum += item;
    this->item_count += 1;
    this->average = this->sum / this->item_count;

    if(item<this->low)
        this->low = item;
    else if(item>this->high)
        this->high = item;

    
}

void __AddLetter__(struct Statistics * this, char letter)
{
    double grade = __GetItemFromLetter__(letter);
    if(grade == -1234567)
        return;
    __Add__(this, grade);
}

void __ShowStats__(struct Statistics this)
{
    if(this.low > this.high)
    {
        double average = 0;
        printf("Your average is : %.2f\n", &average);
    } else{
        printf("Your average is : %.2f\n", this.average);
    }
    
}

void __SetPrecision__(struct Statistics * this, int precision)
{
    this->precision=precision;
}

double __GetItemFromLetter__(char letter)
{
    if((letter == 'a') || (letter == 'A'))
        return 90.0;
    else if((letter == 'b') || (letter == 'B'))
        return 80.0;
    else if((letter == 'c') || (letter == 'C'))
        return 70.0;
    else if((letter == 'd') || (letter == 'D'))
        return 65.0;
    else if((letter == 'f') || (letter == 'F'))
        return 55.0;
    else
        return -1234567;
}
