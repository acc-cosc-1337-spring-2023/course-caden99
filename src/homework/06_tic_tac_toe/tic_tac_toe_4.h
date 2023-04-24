//h
#include <iostream>
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"

#ifndef TicTT4
#define TicTT4

class TicTacToe4: public TicTacToe{
    public:
        TicTacToe4() : TicTacToe(4){};


    private:
        

        bool check_column_win();

        bool check_row_win();

        bool check_diagonal_win();

};

#endif