#include <iostream>
#include "grid.h"
#include "host.h"   
#include "logic.h"  
#include "variables.h"

//MAIN
int main()
{
    nameAsk();
    partyAsk();
    partyAssgn();
    coordSys();
    
    while (gameRunning)
    {
        gameHost();
    }
}
