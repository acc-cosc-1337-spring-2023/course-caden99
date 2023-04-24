#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
// #include "if.h"
// #include "if_else_if.h"
#include "switch.h"

// TEST_CASE("Verify Test Configuration", "verification") {
// 	REQUIRE(true == true);
// }

// TEST_CASE("Test get anded result")
// {
// 	REQUIRE(get_anded_result(true, true) == true);
// 	REQUIRE(get_anded_result(true, false) == false);
// 	REQUIRE(get_anded_result(false, true) == false);
// 	REQUIRE(get_anded_result(false, false) == true);
// }

// TEST_CASE("Test get ored result") 
// {
// 	REQUIRE(get_ored_result(true, true) == true);
// 	REQUIRE(get_ored_result(true, false) == false);
// 	REQUIRE(get_ored_result(false, true) == false);
// 	REQUIRE(get_ored_result(false, false) == true);
// }

// TEST_CASE("Test notted result") 
// {
// 	REQUIRE(get_notted(true) == false);
// 	REQUIRE(get_notted(false) == true);
	
// }

// TEST_CASE("Test get order of ops", "! && ||") 
// {
// 	REQUIRE(get_bool_order_of_ops(true, false, true) == true );
// 	REQUIRE(get_bool_order_of_ops(false, true, false) == true );
// 	REQUIRE(get_bool_order_of_ops(false, false, false) == false );
	
// }

// TEST_CASE("Verify get is over time function"){
// 	REQUIRE(get_is_over_time(39) == false);
// 	REQUIRE(get_is_over_time(40) == false);
// 	REQUIRE(get_is_over_time(41) == true);
// }

// TEST_CASE("Verify is even ")
// {
// 	REQUIRE(is_even(2) == true);
// 	REQUIRE(is_even(3) == false);
// 	REQUIRE(is_even(4) == true);
// }

// TEST_CASE("Get get generation function", "Working if else if if branch")
// {
// 	REQUIRE(get_generation(2000) == "Centenial");
// 	REQUIRE(get_generation(1990) == "Millenial");
// 	REQUIRE(get_generation(1970) == "Generation X");
// 	REQUIRE(get_generation(1950) == "Baby Boomer");
// 	REQUIRE(get_generation(1930) == "Silent Generation");
// 	//REQUIRE(get_generation(1900) == "Invalid Year");
// }

TEST_CASE("Test get menu option", "Test switch statement")
{
	REQUIRE(menu(0) == "Invalid Option");
	REQUIRE(menu(1) == "Option 1");
	REQUIRE(menu(2) == "Option 2");
	REQUIRE(menu(3) == "Option 3");
	REQUIRE(menu(4) == "Option 4");
	REQUIRE(menu(5) == "Invalid Option");
	
}
