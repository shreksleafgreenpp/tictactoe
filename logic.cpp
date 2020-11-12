#include <iostream>
#include "logic.h"
#include "variables.h"

//VARIABLES
int chanceInt = 0;
int totalChances = 0;

bool gameRunning = true;
bool gameDrawn = false;
bool pl1hasWon = false;
bool pl2hasWon = false;

char pl1Party;
char pl2Party;
char pl1Input;
char pl2Input;

char a_input = '@';
char b_input = '@';
char c_input = '@';
char d_input = '@';
char e_input = '@';
char f_input = '@';
char g_input = '@';
char h_input = '@';
char i_input = '@';

bool a_locked = false;
bool b_locked = false;
bool c_locked = false;
bool d_locked = false;
bool e_locked = false;
bool f_locked = false;
bool g_locked = false;
bool h_locked = false;
bool i_locked = false;

bool a_occupied = false;
bool b_occupied = false;
bool c_occupied = false;
bool d_occupied = false;
bool e_occupied = false;
bool f_occupied = false;
bool g_occupied = false;
bool h_occupied = false;
bool i_occupied = false;

//FUNC DEFINITIONS
void inputPlacer()
{
	if (chanceInt == 0)
	{
		if (pl1Input == 'a')
		{
			if (a_locked == false)
			{
				a_input = pl1Party;
				a_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else if (pl1Input == 'b')
		{
			if (b_locked == false)
			{
				b_input = pl1Party;
				b_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else if (pl1Input == 'c')
		{
			if (c_locked == false)
			{
				c_input = pl1Party;
				c_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else if (pl1Input == 'd')
		{
			if (d_locked == false)
			{
				d_input = pl1Party;
				d_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else if (pl1Input == 'e')
		{
			if (e_locked == false)
			{
				e_input = pl1Party;
				e_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else if (pl1Input == 'f')
		{
			if (f_locked == false)
			{
				f_input = pl1Party;
				f_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else if (pl1Input == 'g')
		{
			if (g_locked == false)
			{
				g_input = pl1Party;
				g_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else if (pl1Input == 'h')
		{
			if (h_locked == false)
			{
				h_input = pl1Party;
				h_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else if (pl1Input == 'i')
		{
			if (i_locked == false)
			{
				i_input = pl1Party;
				i_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else
		{
			std::cout << "Are you dumb, stupid, or dumb, huh? I'm out, lol." << std::endl;
			gameRunning = false;
			exit(0);
		}
	}

	if (chanceInt == 1)
	{
		if (pl2Input == 'a')
		{
			if (a_locked == false)
			{
				a_input = pl2Party;
				a_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else if (pl2Input == 'b')
		{
			if (b_locked == false)
			{
				b_input = pl2Party;
				b_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else if (pl2Input == 'c')
		{
			if (c_locked == false)
			{
				c_input = pl2Party;
				c_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else if (pl2Input == 'd')
		{
			if (d_locked == false)
			{
				d_input = pl2Party;
				d_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else if (pl2Input == 'e')
		{
			if (e_locked == false)
			{
				e_input = pl2Party;
				e_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else if (pl2Input == 'f')
		{
			if (f_locked == false)
			{
				f_input = pl2Party;
				f_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else if (pl2Input == 'g')
		{
			if (g_locked == false)
			{
				g_input = pl2Party;
				g_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else if (pl2Input == 'h')
		{
			if (h_locked == false)
			{
				h_input = pl2Party;
				h_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else if (pl2Input == 'i')
		{
			if (i_locked == false)
			{
				i_input = pl2Party;
				i_locked = true;
			}
			else
			{
				std::cout << "Sorry bub, cell occupied. As punishment, your chance will be skipped." << std::endl;
			}
		}
		else
		{
			std::cout << "Are you dumb, stupid, or dumb, huh? I'm out, lol." << std::endl;
			gameRunning = false;
			exit(0);
		}
	}
}

void winLogic()
{
	//for pl1

	//cross
	if (a_input == pl1Party && e_input == pl1Party && i_input == pl1Party)
	{
		pl1hasWon = true;
	}
	else if (c_input == pl1Party && e_input == pl1Party && g_input == pl1Party)
	{
		pl1hasWon = true;
	}

	//across
	if (a_input == pl1Party && b_input == pl1Party && c_input == pl1Party)
	{
		pl1hasWon = true;
	}
	if (d_input == pl1Party && e_input == pl1Party && f_input == pl1Party)
	{
		pl1hasWon = true;
	}
	if (g_input == pl1Party && h_input == pl1Party && i_input == pl1Party)
	{
		pl1hasWon = true;
	}

	//topbottom
	if (a_input == pl1Party && d_input == pl1Party && g_input == pl1Party)
	{
		pl1hasWon = true;
	}
	if (b_input == pl1Party && e_input == pl1Party && h_input == pl1Party)
	{
		pl1hasWon = true;
	}
	if (c_input == pl1Party && f_input == pl1Party && i_input == pl1Party)
	{
		pl1hasWon = true;
	}

	//for pl2

	//cross
	if (a_input == pl2Party && e_input == pl2Party && i_input == pl2Party)
	{
		pl2hasWon = true;
	}
	else if (c_input == pl2Party && e_input == pl2Party && g_input == pl2Party)
	{
		pl2hasWon = true;
	}

	//across
	if (a_input == pl2Party && b_input == pl2Party && c_input == pl2Party)
	{
		pl2hasWon = true;
	}
	if (d_input == pl2Party && e_input == pl2Party && f_input == pl2Party)
	{
		pl2hasWon = true;
	}
	if (g_input == pl2Party && h_input == pl2Party && i_input == pl2Party)
	{
		pl2hasWon = true;
	}

	//topbottom
	if (a_input == pl2Party && d_input == pl2Party && g_input == pl2Party)
	{
		pl2hasWon = true;
	}
	if (b_input == pl2Party && e_input == pl2Party && h_input == pl2Party)
	{
		pl2hasWon = true;
	}
	if (c_input == pl2Party && f_input == pl2Party && i_input == pl2Party)
	{
		pl2hasWon = true;
	}
}

void winChecker()
{
	winLogic();
	
	if (pl1hasWon)
	{
		std::cout << pl1Name << " has won!!" << std::endl;
		std::cout << "Congratulations, soldier. You will do well in life." << std::endl;
		gameRunning = false;
		exit(0);
	}

	else if (pl2hasWon)
	{
		std::cout << pl2Name << " has won!!" << std::endl;
		std::cout << "Congratulations, soldier. You will do well in life." << std::endl;
		gameRunning = false;
		exit(0);
	}
}

void drawLogic()
{
	if (pl1hasWon == false && pl2hasWon == false && totalChances >= 9)
	{
		gameDrawn = true;
	}
}

void drawChecker()
{
	drawLogic();
	
	if (gameDrawn)
	{
		std::cout << "It's a draw, kids. Better luck next time!!" << std::endl;
		gameRunning = false;
		exit(0);
	}
}