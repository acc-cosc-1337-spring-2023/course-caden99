#include <iostream>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
using std::cout; using std::cin;

int main() 
{   
    unique_ptr<TicTacToe> game;
    unique_ptr<TicTacToeManager> manager = make_unique<TicTacToeManager>();
    
    
    string response;
    int playing_grid;
    string first_player;
    int x, o, t;
    int countPlayerLoop = 2;

    cout<<"Ready to play? (Y/N)\n";
    cin>>response;
    while(response != "Y" && response != "N")
    {				
            cout<<"Invalid Input Please Try Again!"<<endl;						
            cout<<"Selection: ";
            cin>>response;
    }

    while (response == "Y" || response == "y") 
        {
            cout<<"First player choose X or O"<<endl;
            cout<<"Choice: ";
            cin>>first_player;
            
            cout<<"What grid would you like to play on? 3 - 3x3 || 4- 4x4\n";
            cout<<"Choice: ";
            cin>>playing_grid;

            if(playing_grid == 3){
                game = make_unique<TicTacToe3>();
            }
            else if(playing_grid == 4){
                game = make_unique<TicTacToe4>();
            }
            game->start_game(first_player);    
            cout<<"Player one select where you'd like to go\n";
            cout<<game.get();
            cout<<"Spot: ";
            cin>>game.get();
            cout<<game.get();

            while (!game->game_over())
            {
                if(countPlayerLoop % 2 == 0)
                {
                    cout<<"Player two select where you'd like to go\n";
                    cout<<"Spot: ";
                    cin>>game.get();
                    cout<<game.get();
                }
                else
                {
                    cout<<"Player One Please Choose a Spot"<<endl;
                    cout<<"Spot:";
                    cin>>game.get();
                    cout<<game.get();
                }
                countPlayerLoop += 1;
            }

            cout << "Game over!\n";
            
            manager->save_game(game);
            cout<<*manager;
            cout << "Play again? (Y/N): ";
            cin >> response;
            
        }

                            
                
        return 0;
}
 

    
        