#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

std::vector<int> vect = {1, 3, 6, 8};
std::vector<int> vect1 = {-1, 7, 21};
std::vector<int> vect4 = {1, 0, 7, 21};
std::vector<int> vect2 = {1, 8};
std::vector<int> vect3 = {1};

TEST_CASE ( "Vector values are totalled", "[Sum]") {
    REQUIRE( Sum(vect) == 18 );
    REQUIRE( Sum(vect1) == 27 );
}

TEST_CASE ( "Removes vectors that are evenly divisable by passed vector", "[MultiplesFilter]") {
    REQUIRE( MultiplesFilter(vect, 3) == vect2);
    REQUIRE( MultiplesFilter(vect4, 7) == vect3);
}