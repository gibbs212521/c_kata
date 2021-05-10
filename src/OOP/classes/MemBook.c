#include "MemBook.h"

void buildMemBook(struct MemBook * this, char name[])
{
    /// call base object
    struct MyBookClass book;
    /// construct base object
    this->base = book;
    buildBook(&this->base, name);
    strcpy(this->name, this->base.name);
    /// inherit base object variables
    this->pstats = this->base.pstats;
    this->stats = this->base.stats;
    /// inherit base object methods
    this->ShowStats = this->base.ShowStats;
    this->GetGradeFromLetter = this->base.GetGradeFromLetter;

    //// New Object Variables
    this->grades = (double *)malloc(this->stats.item_count*sizeof(double));
    //// New Object Methods
    this->AddGrade = __AddGradeToMem__;
    this->AddLetterGrade = __AddLetterGradeToMem__;
}

double __AddGradeToMem__(struct MemBook * this, double grade)
{
    double is_valid = this->base.AddGrade(&this->base, grade);
    this->stats = this->base.stats; // Pointer Error Occurred Here

    /// The code below is handled automatically in many high-level languages
    if(is_valid==-1)
        return -1;
    double * _grades = (double *)malloc(this->stats.item_count*sizeof(double));
    int previous_number_of_grades = this->stats.item_count - 1;
    _grades[previous_number_of_grades] = grade;
    for(int i=0; i<previous_number_of_grades; i++)
        {
            _grades[i] = this->grades[i];
        }
    free(this->grades);
    this->grades = _grades;
    _grades = NULL;
    return grade;
}

double __AddLetterGradeToMem__(struct MemBook * this, char letter)
{
    double grade = this->GetGradeFromLetter(letter);
    this->AddGrade(this, grade);
}
