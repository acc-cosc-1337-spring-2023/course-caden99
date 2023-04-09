//cpp

#include "tic_tac_toe.h"
#include"stdlib.h"


bool TicTacToe::game_over()
{
    if (check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if (check_board_full())
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
}

string TicTacToe::get_winner() const
{
    return winner;
}

bool TicTacToe::check_column_win()
{
    for (int i = 0; i < 3; i++)
    {
        if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] && pegs[i] != " ")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_row_win()
{
    for (int i = 0; i < 9; i += 3)
    {
        if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] && pegs[i] != " ")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if ((pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " ") ||
        (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " "))
    {
        return true;
    }
    return false;
}

void TicTacToe::start_game(string first_player) {
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position) {
    pegs[position - 1] = player;
    set_next_player();
}

string TicTacToe::get_player() const {
    string player = "";
    cout << "Enter the starting player1 (X or O): ";
    std::cin >> player;
    return player;
}

std::vector<std::string> TicTacToe::get_board() const
{
    return pegs;
}


void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}
void TicTacToe::set_next_player() {
    player = (player == "X") ? "O" : "X";
}

bool TicTacToe::check_board_full() {
    for (auto peg : pegs) {
        if (peg == " ") {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board() {
    for (auto& peg : pegs) {
        peg = " ";
    }


}
std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    out << "-------------\n";
    for (int i = 0; i < 9; i += 3) 
    {
        out << "| " << game.pegs[i] << " | " << game.pegs[i+1] << " | " << game.pegs[i+2] << " |\n";
        out << "-------------\n";
    }
    return out;
}
std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    int position;

    cout << "Enter position for " << game.get_player() << " (1-9): ";
    in >> position;

    while (position < 1 || position > 9 || game.pegs[position - 1] != " ")
    {
        cout << "Invalid position. Please try again.\n";
        cout << "Enter position for " << game.get_player() << " (1-9): ";
        in >> position;
    }
    game.mark_board(position);

    return in;
}




/*void TicTacToe::display_board() const {
    cout << "-------------\n";
    for (int i = 0; i < 9; i += 3) {
        cout << "| " << pegs[i] << " | " << pegs[i + 1] << " | " << pegs[i + 2] << " |\n";
        cout << "-------------\n";
    }
}
*/
