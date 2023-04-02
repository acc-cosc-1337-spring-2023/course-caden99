#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if game is over") {
	REQUIRE(TicTacToe.game_over(" ") == false);
	REQUIRE(TicTacToe.game_over() == true);

}

