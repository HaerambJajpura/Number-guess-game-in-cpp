#include <iostream>
#include <stdlib.h>
#include <time.h>
long int CurrentLevel = 1, Number1, Number2, NumberSum, NumberProduct, Guess1, Guess2, GuessSum, GuessProduct;
bool LevelPassed = false;
bool PlayGame()
{
    system("cls");
    system("color 3");
    std::cout << "----- Number Guessing Game -----" << std::endl
              << std::endl;
    std::cout << "You are on Level " << CurrentLevel << std::endl;
    Number1 = (rand() % CurrentLevel) + CurrentLevel;
    Number2 = (rand() % CurrentLevel) + CurrentLevel;
    NumberSum = Number1 + Number2;
    NumberProduct = Number1 * Number2;
    std::cout << "\n+ There are two numbers in the game.\n";
    std::cout << "+ Their sum is " << NumberSum << std::endl;
    std::cout << "+ Their product is " << NumberProduct << std::endl
              << std::endl;
    std::cout << "Guess what can be these number?\n";
    std::cout << "Enter your Guess seperated by a space: ";
    std::cin >> Guess1 >> Guess2;
    GuessSum = Guess1 + Guess2;
    GuessProduct = Guess1 * Guess2;
    if ((GuessSum == NumberSum) && (GuessProduct == NumberProduct))
    {
        return true;
    }
    return false;
}
int main()
{
    srand(time(0));
    while (1)
    {
        LevelPassed = PlayGame();
        if (LevelPassed)
        {
            system("color 2");
            std::cout << "\n\nWell Done you are passed to next level.\n\n";
            CurrentLevel++;
            system("pause");
        }
        else
        {
            system("color C");
            std::cout << "Wrong Guess!\n";
            system("pause");
            exit(0);
        }
    }
    return 0;
}
