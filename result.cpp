#include <iostream>

void Space();
float Addition(float a, float b);
float Multiplication(float a, float b);
float Substraction(float a, float b);
float Division(float a, float b);

void Result()
{
	float x;
	float y;
	char oper;
	float result;

Boot:

	std::cout << "Enter your operation : " << std::endl;
	std::cin >> x >> oper >> y;
	Space();
	switch (oper)
	{
	case '+':
		result = Addition(x, y);
		std::cout << result << std::endl;
		Space();
		break;
	case '*':
		result = Multiplication(x, y);
		std::cout << result << std::endl;
		Space();
		break;
	case '-':
		result = Substraction(x, y);
		std::cout << result << std::endl;
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
			std::cout << result << std::endl;
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