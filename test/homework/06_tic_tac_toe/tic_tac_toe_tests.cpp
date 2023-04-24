#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify player value is as expected X"){
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->get_player()=="X");
}
TEST_CASE("Verify player value is as expected O")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("O");
	REQUIRE(game->get_player()=="O");
}
TEST_CASE("Verify game_over and validate winner in a tie")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);

	game->game_over();
	REQUIRE(game->get_winner()=="C");
}
TEST_CASE("Verify win by column")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verify win by second column")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verify win by third column")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verify win by first row")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verify win by second row")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verify win by third row")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verify win by diagonal from top left")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verify win by diagonal win from bottom left")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	
	REQUIRE(game->game_over()==true);
}

TEST_CASE("Verify winner, get_winner_totals is right"){
	unique_ptr<TicTacToeManager> manager= make_unique<TicTacToeManager>();
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
	manager->save_game(game);
	game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");
	manager->save_game(game);
	game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="C");
	manager->save_game(game);
	
	int o;
	int x;
	int t;
	manager->get_winner_totals(o,x,t);
	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);
}







TEST_CASE("Verify game_over and winner in a tie for 16 board")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(13);
	REQUIRE(game->game_over()==false);
	game->mark_board(14);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);
	REQUIRE(game->game_over()==false);
	game->mark_board(16);
	

	game->game_over();
	REQUIRE(game->get_winner()=="C");
}
TEST_CASE("Verify win by column 16 board")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(13);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verify win by second column 16 board")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(13);
	REQUIRE(game->game_over()==false);
	game->mark_board(14);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verify win by third column 16 board")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verify win by fourth coloumn 16 board"){
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(16);
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verify win by first row 16 board")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	
	
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verify win by second row 16 board")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verify win by third row 16 board")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);


	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verify win by fourth row 16 board")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(13);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(14);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(16);


	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verify win by diagonal win from bottom left 16 board")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(13);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	
	REQUIRE(game->game_over()==true);
}
TEST_CASE("Verify win by diagonal win from bottom right 16 board")
{
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(16);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	
	REQUIRE(game->game_over()==true);
}

TEST_CASE("Verify winner and get_winner_totals is right 16 board"){
	unique_ptr<TicTacToeManager> manager= make_unique<TicTacToeManager>();
	unique_ptr<TicTacToe> game;
	game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
	manager->save_game(game);



	game = make_unique<TicTacToe4>();
	game->start_game("O");
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");
	manager->save_game(game);
	
	
	game = make_unique<TicTacToe4>();
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(13);
	REQUIRE(game->game_over()==false);
	game->mark_board(14);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);
	REQUIRE(game->game_over()==false);
	game->mark_board(16);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="C");
	manager->save_game(game);
	
	int o;
	int x;
	int t;
	manager->get_winner_totals(o,x,t);
	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1);
}