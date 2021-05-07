#ifdef _WIN32
#include "OOP\test_oop.h"
#include "FunctionalProgramming\test_func_prog.h"
#elif __linux__
#include "OOP/test_oop.h"
#include "FunctionalProgramming/test_func_prog.h"
#endif

void main()
{
    oop_test_suite();
    func_prog_test_suite();
}
