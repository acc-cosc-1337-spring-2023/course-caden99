//cpp
#include "tic_tac_toe_data.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <memory>


void TicTacToeManager::save_game(unique_ptr<TicTacToe> &b)
{   
    update_winner_count(b->get_winner());
    games.push_back(move(b));
    

}
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for (auto &game : manager.games)
    {
        out << game.get();
        std::string w = game->get_winner();
        out << "\nThe winner is: " << w << "\n";
    }

    out << "X wins: " << manager.x_win << "\n";
    out << "O wins: " << manager.o_win << "\n";
    out << "Ties: " << manager.ties << "\n";

    return out;
}


void TicTacToeManager::get_winner_totals(int& o, int& x, int& t)
{
    o = o_win;
    x = x_win;
    t = ties;
}

void TicTacToeManager::update_winner_count(string winner)
{
    if(winner == "X")
    {
        x_win++;
    }
    else if(winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}