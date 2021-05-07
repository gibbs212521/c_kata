#ifdef _WIN32
#include ".\OOP\oop.h"
#include ".\FunctionalProgramming\func_prog.h"
#elif __linux__
#include "./OOP/oop.h"
#include "./FunctionalProgramming/func_prog.h"
#endif

int main()
{
    runMethodOOP();
    runMethodFunctional();

    return 0;
}
