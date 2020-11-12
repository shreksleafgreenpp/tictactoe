#include <iostream>
#include "grid.h"
#include "logic.h"
#include "variables.h"

//FUNC DEFINITIONS
void coordSys()
{
    std::cout << "Now listen up, here below me is the coordinate system. Specify where you want to put your x/o whenever asked according to this system only."
        << std::endl;

    std::cout << "-------------" << std::endl;
    std::cout << "|[" << 'a' << "]|[" << 'b' << "]|[" << 'c' << "]|" << std::endl;
    std::cout << "-------------" << std::endl;
    std::cout << "|[" << 'd' << "]|[" << 'e' << "]|[" << 'f' << "]|" << std::endl;
    std::cout << "-------------" << std::endl;
    std::cout << "|[" << 'g' << "]|[" << 'h' << "]|[" << 'i' << "]|" << std::endl;
    std::cout << "-------------" << std::endl;

    std::cout << "Let's begin now." << std::endl;
    std::cout << "" << std::endl;
}

void gridPrinter()
{
    inputPlacer();

    //STRUCTURE

    std::cout << "-------------" << std::endl;
    std::cout << "|[" << a_input << "]|[" << b_input << "]|[" << c_input << "]|" << std::endl;
    std::cout << "-------------" << std::endl;
    std::cout << "|[" << d_input << "]|[" << e_input << "]|[" << f_input << "]|" << std::endl;
    std::cout << "-------------" << std::endl;
    std::cout << "|[" << g_input << "]|[" << h_input << "]|[" << i_input << "]|" << std::endl;
    std::cout << "-------------" << std::endl;
}