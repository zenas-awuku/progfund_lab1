#include <iostream>

int main()
{
	int prompt;
	std::cout << "Enter the number: ";
	std::cin >> prompt;

	if (prompt % 2 == 0)
	{
		for (int i = 1; i <= 20; i++)
		{
			std::cout << i << " x " << prompt << " = " << prompt * i << std::endl;
		}
	}
	else if (prompt == 1)
	{
		std::cout << "Every number is divisible by '1'" << std::endl;
	}
	else
	{
		int count;
		int index = 1;
		while (count != 30)
		{

			if (index % prompt != 0)
			{
				std::cout << index << std::endl;
				count++;
			}
			index++;
		}
	}
}
