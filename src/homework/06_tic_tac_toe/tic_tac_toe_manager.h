//h

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"
#include <vector>
#include <iostream>
#include <memory>
#include <string>

using std::vector;
using std::ostream;
using std::cout;
using std::cin;
using std::string;


class TicTacToeManager
{
public:
    void save_game(unique_ptr<TicTacToe>& b);
    friend ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
    void get_winner_totals(int& o, int& x, int& t);

private:
    vector<unique_ptr<TicTacToe>> games{};
    int o_win = 0;
    int x_win = 0;
    int ties = 0;
    void update_winner_count(string winner);
};

#endif
