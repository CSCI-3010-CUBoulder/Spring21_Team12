#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>


TEST_CASE("sum up values taken from the vector","[Sum]"){
	std::vector<double> test{1,2};
	std::vector<double> test2{-1,2};
	REQUIRE(Sum(test)==3);
	REQUIRE(Sum(test2)==1);
	
}

TEST_CASE("multiply all values together from the vector","[Product]"){
	std::vector<double> test{1,2};
	std::vector<double> test2{-1,2};
	REQUIRE(Product(test)==2);
	REQUIRE(Product(test2)==-2);
}

TEST_CASE ("Divide by 2", "[removeTwos]") {
	REQUIRE( RemoveTwos(16) == 1);
	REQUIRE( RemoveTwos(7) == 7);
	REQUIRE( RemoveTwos(26) == 13);
	REQUIRE( RemoveTwos(52) == 13);
}


