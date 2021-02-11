<<<<<<< HEAD
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
=======
#define CATCH_CONFIG_MAIN
>>>>>>> main
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

<<<<<<< HEAD

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
=======
TEST_CASE ("Divide by 2", "[removeTwos]") {
	REQUIRE( RemoveTwos(16) == 1);
	REQUIRE( RemoveTwos(7) == 7);
	REQUIRE( RemoveTwos(26) == 13);
	REQUIRE( RemoveTwos(52) == 13);
}

>>>>>>> main
