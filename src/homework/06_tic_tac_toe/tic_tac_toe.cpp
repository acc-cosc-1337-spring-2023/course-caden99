//cpp

#include "tic_tac_toe.h"
#include"stdlib.h"
#include <iostream>


std::istream& operator>>(std::istream& in, TicTacToe *game)
{
    Position_Loop:int pos_mark;

    std::cin >> pos_mark;

    if(game->string_pegs.size() == 9)
    {
        if (pos_mark!=1 && pos_mark!=2 && pos_mark!=3 && pos_mark!=4 && pos_mark!=5 && pos_mark!=6 && pos_mark!=7 && pos_mark!=8 && pos_mark!=9)
        {
            std::cout<<"\nEnter a number 1-9 to play";
            goto Position_Loop;
        }
        if ((game->string_pegs[(pos_mark-1)])=="X"||(game->string_pegs[(pos_mark-1)]=="O"))
        {
            std::cout<<"That spot is already selected.";
            goto Position_Loop;
        }
        game->mark_board(pos_mark);
}

else if(game->string_pegs.size() == 16)
{
    if (pos_mark!=1 && pos_mark!=2 && pos_mark!=3 && pos_mark!=4 && pos_mark!=5 && pos_mark!=6 && pos_mark!=7 && pos_mark!=8 && pos_mark!=9 && pos_mark!=10 && pos_mark!=11 && pos_mark!=12 && pos_mark!=13 && pos_mark!=14 && pos_mark!=15 && pos_mark!=16)
    {
        std::cout<<"\nEnter a number 1-9 to play";
        goto Position_Loop;
    }

     if ((game->string_pegs[(pos_mark-1)])=="X"||(game->string_pegs[(pos_mark-1)]=="O"))
     {
        std::cout<<"That spot is already selected.";
        goto Position_Loop;
     }
     game->mark_board(pos_mark);
} 

return in;

}

std::ostream& operator<<(ostream& out, const TicTacToe *game)
{
    if(game->string_pegs.size() == 9)
    {
        for(int i = 0; i < 3; i++)
        {
            out<<"|"<<game->string_pegs[i]<<"|";    
        }
         out<<endl;
        out<<"--|---|--";
        out<<endl;

        for(int i = 3; i < 6; i++)
        {
        out<<"|"<<game->string_pegs[i]<<"|";
        }
        out<<endl;
        out<<"--|---|--";
        out<<endl;

        for(int i = 6; i < 9; i++)
        {
        out<<"|"<<game->string_pegs[i]<<"|";
        }
        out<<endl;


    }
    else if(game->string_pegs.size() == 16)
    {
        for(int i = 0; i < 4; i++)
        {
            out<<"|"<<game->string_pegs[i]<<"|";
        }
        out<<endl;
        out<<"---|--|--|--";
        out<<endl;

          for(int i = 4; i < 8; i++)
        {
        out<<"|"<<game->string_pegs[i]<<"|";
        }
        out<<endl;
        out<<"---|--|--|--";
        out<<endl;


        for(int i = 8; i < 12; i++)
        {
        out<<"|"<<game->string_pegs[i]<<"|";
        }
        out<<endl;
        out<<"---|--|--|--";
        out<<endl;


        for(int i = 12; i < 16; i++)
        {
        out<<"|"<<game->string_pegs[i]<<"|";
        }
        out<<endl;
        out<<"---|--|--|--";
        out<<endl;
               
    }
    return out;
}

bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < string_pegs.size(); ++i) 
	{

		if (string_pegs[i] == " ")
		{
			return  false;
		}
		
	}

	return true;

}

void TicTacToe::clear_board()
{
    for(auto i=0; i<string_pegs.size(); i++)
    {
        string_pegs[i] = " ";
    }
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}
void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else if(player == "O")
    {
        player = "X";
    }
}
void TicTacToe::mark_board(int pos_mark)
{
    string_pegs[pos_mark-1] = player;
    set_next_player();
}
bool TicTacToe::check_column_win()
{
    return false;
}
bool TicTacToe::check_row_win()
{
    return false;
}
bool TicTacToe::check_diagonal_win()
{
    return false;
}
void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else if(player == "O")
    {
        winner = "X";
    }
}
bool TicTacToe::game_over()
{
    if(check_row_win() == true||check_column_win() == true || check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
    
}
