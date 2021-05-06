#include "Book.h"

void buildBook(struct MyBookClass * this, char name[])
{
    strcpy(this->name,name);
    struct Statistics stats;
    this->pstats = &stats;
    buildStatistics(this->pstats);
    this->stats = *this->pstats;

    this->AddGrade = __AddGrade__;
    this->AddLetterGrade = __AddLetterGrade__;
    this->ShowStats = __ShowBookStats__;
    this->GetGradeFromLetter = __GetItemFromLetter__;
}

double __AddGrade__(struct MyBookClass * this, double grade)
{
    if((grade>100) || (grade<0))
        return -1;
    this->stats.Add(&this->stats, grade);
    return grade;
}

double __AddLetterGrade__(struct MyBookClass * this, char letter)
{
    double grade = this->GetGradeFromLetter(letter);
    this->AddGrade(this, grade);
}

void __ShowBookStats__(struct MyBookClass this)
{
    this.stats.ShowStats(this.stats);
}
