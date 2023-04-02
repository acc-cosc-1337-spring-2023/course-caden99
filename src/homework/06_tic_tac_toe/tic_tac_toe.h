//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H


#include <iostream>
#include <vector>
#include <string>

using std::string; using std::cout;
using std::vector;






bool game_over();

void start_game(string first_player);

void mark_board(int position);

const string get_player();

const void display_board();

void set_next_player();

bool check_board_full();

void clear_board();

string player();


#include <vector>
#include <string>

class TicTacToe
{
public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const;
    void display_board() const;
    string get_winner() const;

private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
    //bool game_over_check();

    
    std::string player;
    std::vector<std::string> pegs {9, " "};
    string winner;
};

#endif