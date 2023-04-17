
#include <iostream>
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"

#ifndef TicTT3
#define TicTT3


class TicTacToe3: public TicTacToe{
    public:
        TicTacToe3() : TicTacToe(3){};

    private:

        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();

};


#endif