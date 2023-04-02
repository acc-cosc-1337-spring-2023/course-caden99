#include <iostream>
#include "tic_tac_toe.h"
using std::cout; using std::cin;

int main() 
{
    TicTacToe game;
    game.start_game("X");

    string response = "Y";


while (response == "Y" || response == "y") 
	{
        TicTacToe game;
        string player = "";
        int position = 0;

        cout << "Enter the starting player (X or O): ";
        cin >> player;
        game.start_game(player);
    

    while (!game.game_over())
    {
        cout << "Player " << game.get_player() << ", enter a position (1-9) or 0 to quit: ";
        cin >> position;

        if (position < 0 || position > 9)
        {
            cout << "Invalid position, try again.\n";
        }
        
        else if (position == 0)
        {
            cout << "Exiting...";
            abort();
        }
        else
        {
            game.mark_board(position);
            game.display_board();
        }
    }

    cout << "Game over!\n";
   
        if (game.get_winner() == "C") 
		{
            cout << "It's a tie!\n";
        } else {
            cout << "Player " << game.get_winner() << " wins!\n";
        }

        cout << "Play again? (Y/N): ";
        cin >> response;
    }
    return 0;
}
   
    