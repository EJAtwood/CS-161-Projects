#include <iostream>

int hailstone ( int starInt);

int main() 
{


	int postInt = 0;
	int steps = 0;

	std::cout << "Please entera positive Integer." std::endl;
	std::cin >> postInt;

	steps = hailstone(postInt);

	return 0;
}
