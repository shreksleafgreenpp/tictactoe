#include <iostream>
#include "grid.h"
#include "host.h"   
#include "logic.h"  
#include "variables.h"

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
