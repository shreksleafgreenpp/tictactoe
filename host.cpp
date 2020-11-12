#include <iostream>
#include "host.h"
#include "logic.h"
#include "grid.h"
#include "variables.h"

//VARIABLES
std::string pl1Name;
std::string pl2Name;

//FUNC DEFINITIONS
void nameAsk()
{
    std::cout << "What is your name, child? --> ";
    std::cin >> pl1Name;
    std::cout << "You are now player 1." << std::endl;
    std::cout << "" << std::endl;

    std::cout << "And what is YOUR name, child? --> ";
    std::cin >> pl2Name;
    std::cout << "You are now player 2." << std::endl;
    std::cout << "" << std::endl;
}

void partyAssgn()
{
    if (pl1Party == 'x')
    {
        pl2Party = 'o';
    }
    else if (pl1Party == 'o')
    {
        pl2Party = 'x';
    }
    else
    {
        std::cout << "Invalid input, man. *dissapointed look* I'm out." << std::endl;
        gameRunning = false;
        exit(0); //exit function takes argument "return code" of your choice to display after termination. 
                 //be convention, 0 = program successfully executed.
    }
}

void partyAsk()
{
    std::cout << pl1Name << ", x/o? --> ";
    std::cin >> pl1Party;
    std::cout << "Aight." << std::endl;
    std::cout << "" << std::endl;

    partyAssgn();

    std::cout << "Since " << pl1Name << " is " << pl1Party << ", " << pl2Name << " will be " <<
        pl2Party << ", ok?" << std::endl;
    std::cout << "" << std::endl;
}

void gameHost()
{
    if (chanceInt == 0)
    {
        winLogic();
        winChecker();

        drawLogic();
        drawChecker();

        if (pl1hasWon == false && gameDrawn == false)
        {
            std::cout << "It is " << pl1Name << "'s turn." << std::endl;
            std::cout << "Where do you want to place your '" << pl1Party << "'? --> ";
            std::cin >> pl1Input;
            std::cout << "All-righty.." << std::endl;
            std::cout << "" << std::endl;

            gridPrinter();

            chanceInt = 1;
            totalChances++;
        }
        else
        {
            chanceInt = 0;
        }
    }

    if (chanceInt == 1)
    {
        winLogic();
        winChecker();

        drawLogic();
        drawChecker();

        if (pl2hasWon == false && gameDrawn == false)
        {
            std::cout << "It is " << pl2Name << "'s turn." << std::endl;
            std::cout << "Where do you want to place your '" << pl2Party << "'? --> ";
            std::cin >> pl2Input;
            std::cout << "All-righty.." << std::endl;
            std::cout << "" << std::endl;

            gridPrinter();

            chanceInt = 0;
            totalChances++;
        }
        else
        {
            chanceInt = 1;
        }
    }
}