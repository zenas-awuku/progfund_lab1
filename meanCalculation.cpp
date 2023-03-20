#include <iostream>
#include <algorithm>
#include <map>

double mean(int array[], double size)
{
	int sum = 0;
	for (int i; i < size; i++)
		sum += array[i];

	return sum / size;
}

double median(int array[], int size)
{
	if (size % 2 != 0)
		return array[size / 2];
	return (array[(size-1)/2]  + array[size/2])/2.0;
}

int mode(int array[], int size) {
	std::map<int, int> frequencyMap;

	for (int i = 0; i < size; i++)
	{
		if (frequencyMap[array[i]])
		{
			frequencyMap[array[i]]++;
		} else {
			frequencyMap.insert({array[i], 1});
		}
		
	}
	
}

int main()
{
	int arraySize = 5;
	int array[arraySize];
	for (int i; i < arraySize; i++)
	{
		std::cout << "No. " << i + 1 << ": ";
		std::cin >> array[i];
	}

	std::sort(array, array + arraySize);
	std::cout << "The mean value is: " << mean(array, arraySize) << std::endl;
	std::cout << "The median value is: " << median(array, arraySize) << std::endl;
}
