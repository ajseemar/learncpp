#include "question_4.h"
#include <iostream>

namespace Q4
{
	void question4()
	{
		float height{};

		std::cout << "Enter the height of the tower in meters: ";
		std::cin >> height;

		int i = 0;
		while (float current_height = height - (constants::gravity * i * i) / 2)
		{
			if (current_height < 0) break;
			std::cout << "At " << i << " seconds, the ball is at height: " << current_height << " meters\n";
			i++;
		}

		std::cout << "At " << i << " seconds, the ball is on the ground.\n";
	}
}