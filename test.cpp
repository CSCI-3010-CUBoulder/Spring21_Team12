#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("checking positive values for Sum"){
	std::vector<double> test{1,2};
	REQUIRE(Sum(test)==3);
	REQUIRE(Product(test)==2);
}

TEST_CASE("checking nagative values for Sum"){
	std::vector<double> test{-1,2};
	REQUIRE(Sum(test)==1);
	REQUIRE(Product(test)==-2);
}
