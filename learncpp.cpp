// learncpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>

bool play_hilo(const int max_num_tries = 7);

int main()
{
    std::cout << "Would you like to play a game of hi-lo (y/n): ";

    char play_game{};
    while (1)
    {
        std::cin >> play_game;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(37626, '\n');
        }
        else
        {
            std::cin.ignore(37626, '\n');
            break;
        }
    }

    bool is_playing{ play_game == 'y' };
    while (play_hilo()) {}

    return 0;
}

bool play_hilo(const int max_num_tries)
{
    std::random_device rnd;
    std::mt19937 rng(rnd());
    std::uniform_int_distribution<int> rand(1, 100);

    int num_to_guess = rand(rng);
    int guess = -1;
    int num_tries = 0;

    std::cout << "Let's play a game.  I'm thinking of a number between 1 and 100.  You have 7 tries to guess what it is.\n";
    std::cout << "(hint..secret num is [" << num_to_guess << "] ;) good luck!)\n";

    while (num_tries < max_num_tries)
    {
        std::cout << "Guess #" << num_tries++ + 1 << ": ";

        while (1)
        {
            std::cin >> guess;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(37626, '\n');
            }
            else 
            {
                std::cin.ignore(37626, '\n');
                break;
            }
        }

        if (guess == num_to_guess)
        {
            std::cout << "Congratulations! You Win!\n";
            goto end_game;
        }
        else if (guess < num_to_guess)
        {
            std::cout << "Your guess is too low.\n";
        }
        else
        {
            std::cout << "Your guess is too high\n";
        }
    }

    std::cout << "Sorry, you lose :( The correct number was " << num_to_guess << ".\n";
    goto end_game;


end_game:

    while (1)
    {
        std::cout << "Would you like to play again (y/n): ";

        char play_game{};
        std::cin >> play_game;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(37626, '\n');
        }
        else
        {
            std::cin.ignore(37626, '\n');
            
            if (play_game == 'y') return true;
            if (play_game == 'n') return false;
        }
    }

}