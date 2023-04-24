#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"
#include "casting.h"
#include "constants.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify operator precedence 1", "Verify order of operations")
{
	REQUIRE(operator_precedence_1(3, 6, 3) == 5);
}

TEST_CASE("Verify operator precedence 1", "Verify order of operations")
{
	REQUIRE(operator_precedence_2(3, 6, 3) == 3);
}

TEST_CASE("Verify int to double", "Verify w multiplication")
{
	REQUIRE(convert_to_double(10, .59) == 5.90);
}

TEST_CASE("Verify area of a circle")
{
	REQUIRE(get_area_of_circle(10) == 314.1592654);
}