#include <iostream>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
using std::cout; using std::cin;

int main() 
{   TicTacToeManager manager;
    
    
    

    string response = "Y";


while (response == "Y" || response == "y") 
	{
        TicTacToe game;
        cout << game;
        
        while (!game.game_over())
        {
            cin >> game;
            cout << game;
        }

        cout << "Game over!\n";
        
        manager.save_game(game);

        cout << "Play again? (Y/N): ";
        
    }
    cin >> response;
    int x_win, o_win, ties;
    manager.get_winner_totals(x_win, o_win, ties);
                
                
            
    return 0;
}
    

   
    