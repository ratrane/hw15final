// HW_15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

	std::cout << "Enter Variable:";
	int N;
	std::cin >> N;
	std::cout << "Even or not(use 0 or 1):";
	int B;
	std::cin >> B;


	for (int i = 0; i < (N+2)/2; i++)
	{
		if (B==0)
		{	
			std::cout << i*2 <<"\n";
		}
		else
		{
			std::cout << (i*2)+1 << "\n";
		}
	}
}
