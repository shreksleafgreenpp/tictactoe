#include <iostream>
#include "grid.h"
#include "host.h"   //for now ive just included everything, but be sure to remove the includes that are not
#include "logic.h"  //needed, aight?
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