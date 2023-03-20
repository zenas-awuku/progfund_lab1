#include <iostream>

int main() {
	int i;
	std::cout << "Enter a number: ";
	while (std::cin >> i, !std::cin)
	{
		std::cout << "Value is not an integer.\nEnter a number: ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
	}

	std::cout << i;
	
}
