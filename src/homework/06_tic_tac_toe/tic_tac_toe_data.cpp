#include "tic_tac_toe_data.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <fstream>

#include "tic_tac_toe_data.h"

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
    std::ofstream file_out(file_name);
    if (file_out.is_open())
    {
        for (auto& game : games)
        {
            for (auto& peg : game->get_pegs())
            {
                file_out << peg;
            }
            file_out << game->get_winner() << "\n";
        }
        file_out.close();
    }
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    std::vector<std::unique_ptr<TicTacToe>> games;
    std::ifstream file_in(file_name);
    if (file_in.is_open())
    {
        std::string line;
        while (std::getline(file_in, line))
        {
            std::vector<std::string> pegs;
            for (auto& ch : line.substr(0, line.size() - 1))
            {
                pegs.push_back(std::string(1, ch));
            }
            std::string winner{line.substr(line.size() - 1, 1)};
            std::unique_ptr<TicTacToe> game;
            if (pegs.size() == 9)
            {
                game = std::make_unique<TicTacToe3>(pegs, winner);
            }
            else if (pegs.size() == 16)
            {
                game = std::make_unique<TicTacToe4>(pegs, winner);
            }
            games.push_back(std::move(game));
        }
        file_in.close();
    }
    return games;
}
