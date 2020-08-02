#include "io.h"
#include <iostream>

int readNumber()
{
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

void writeAnswer(int ans)
{
	std::cout << ans << '\n';
}
