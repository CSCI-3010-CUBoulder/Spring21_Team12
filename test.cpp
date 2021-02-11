#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>


TEST_CASE( "Vector is Subtracted", "[SubtractN]" ) {
    std::vector<int> test1 {1,2};
    std::vector<int> test2 {2,2};

    REQUIRE( SubtractN(test1,1) == {0,1});
    REQUIRE( Factorial(test2,3) == {-1,-1});

}


TEST_CASE( "Vector is Subtracted Doubles", "[SubtractN]" ) {
    std::vector<int> test1 {1.0,2.1};
    std::vector<int> test2 {2.5,2.0};

    REQUIRE( SubtractN(test1,1.0) == {0.0,0.1});
    REQUIRE( Factorial(test2,3.5) == {-1.0,-1.5});

}
