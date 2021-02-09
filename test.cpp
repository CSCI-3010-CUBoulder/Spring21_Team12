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
