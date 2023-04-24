#include <iostream>
#include <vector>
#include <string>
using namespace std;

#ifndef TicTacToe_h
#define TicTacToe_h


class TicTacToe{

    public:
        TicTacToe() = default;
        TicTacToe(int grid) : string_pegs(grid * grid, " "){};
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        string get_player() const {return player;}
        string get_winner() {return winner;};        
        friend std::ostream& operator<<(ostream& out, const TicTacToe *game); 
        friend std::istream& operator>>(istream& in, TicTacToe *game);

        

    private:
    
        bool check_board_full();
        void set_next_player();
        void clear_board();      
        string player;
        void set_winner();
        string winner;

    protected:

        vector<string> string_pegs;
        virtual bool check_column_win() = 0;
        virtual bool check_row_win() = 0;
        virtual bool check_diagonal_win()= 0;        


};
#endif