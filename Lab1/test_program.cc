//Detta säger åt Catch att skapa en main() - gör bara detta i en .cc-fil.
//Behöver inte vara med om test_main.cc använts
#define CATCH_CONFIG_MAIN

//Här inkluderar vi alla de verktyg vi använder i Catch.
//Detta biblioteket är stort och tar tid att kompilera.
#include "catch.hpp"

//Här kan vi också inkludera .h-filerna för de funktioner,
//klasser, m.m., som vi vill testa.
//Vanligtvis brukar vi inte definiera de program som vi vill testa
//i samma fil som testprogrammet. Detta är bara för att ge ett
//fungerande exempel av en funktion som vi kan testa.
int sum(int a, int b)
{
    return a + b;
}

//Ett TEST_CASE kan innehålla flera tester som hänger ihop,
//exempelvis flera tester för en funktion.
TEST_CASE( "Sum of ints") {

//Här kan vi deklarera variabler som vi vill använda i tester.
int x{3};

//Följande är olika test.
//Blir villkoret i CHECK(villkor) sant kommer testet indikeras som godkänt.
//Oavsett utgång fortsätter testprogrammet.
CHECK(sum(2, x) == 5);

//Blir villkoret i CHECK_FALSE(villkor) falskt kommer testet indikeras som
//godkänt. Oavsett utgång fortsätter testprogrammet.
CHECK_FALSE(sum(2, x) == 6);

//Blir villkoret i REQUIRE(villkor) sant kommer testet indikeras som godkänt.
//Om testet blir ej godkänt avbryts testprogrammet.
//Tänk på att två villkor inte alltid önskvärt
REQUIRE((sum(2, x) == 5 && x == 3));

//Blir villkoret i REQUIRE_FALSE(villkor) falskt kommer testet indikeras som
//godkänt. Om testet blir ej godkänt avbryts testprogrammet.
REQUIRE_FALSE((sum(2, x) == 5 || x == 3));

}