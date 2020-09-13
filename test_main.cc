#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
int main(int argc, char* argv[])
{
   return Catch::Session{}.run(argc, argv);
}

// Kompilera test_main.cc till en förkompilerad programmodul (.o-fil) med kompilatorflaggan -c:
// g++ -std=c++17 -c test\_main.cc
// Detta gör att vi inte behöver kompilera catch-biblioteket igen, och det är okej eftersom vi inte
// ändrar något i det givna biblioteket.

// 4. Ta bort raden #define CATCH_CONFIG_MAIN från test_program.cc.

// 5. Länka in .o-filen vid kompilering av de andra filerna:
// g++ -std=c++17 test_main.o test_program.cc <eventuellt andra .cc-filen>
