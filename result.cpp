#include <iostream>
#include "oper.h"

float x;
float y;
char oper;
float result;

void Result()
{
	

Boot:

	std::cout << "Enter your operation : " << std::endl;
	std::cin >> x >> oper >> y;
	Space();
	switch (oper)
	{
	case '+':
		result = Addition(x, y);
		ShowResult(result);
		Space();
		break;
	case '*':
		result = Multiplication(x, y);
		ShowResult(result);
		Space();
		break;
	case '-':
		result = Substraction(x, y);
		ShowResult(result);
		Space();
		break;
	case '/':
		if (y == 0)
		{
			std::cout << "Dividing by 0 will suck the Universe into a blackhole =o";
			Space();
		}
		else
		{
			result = Division(x, y);
			ShowResult(result);
		}
		Space();
		break;
	default:
		std::cout << "Please enter a valid operation!";
		Space();
		goto Boot;
		break;
	}
	Space(); 
	goto Boot;
}