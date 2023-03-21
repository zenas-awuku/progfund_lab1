#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

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
	return (array[(size - 1) / 2] + array[size / 2]) / 2.0;
}

std::vector<int> mode(int array[], int size)
{
	std::unordered_map<int, int> frequencyMap;

	for (int i = 0; i < size; i++)
	{
		if (frequencyMap.find(array[i]) != 0)
		{
			frequencyMap[array[i]]++;
		}
		else
		{
			frequencyMap.insert({array[i], 1});
		}
	}

	std::vector<int> modeList;
	modeList.push_back(array[0]);

	for (auto i : frequencyMap)
	{
		if (i.second < frequencyMap[modeList.back()])
		{
			continue;
		}
		else if (i.second == frequencyMap[modeList.back()])
		{
			
			modeList.push_back(i.first);
		}
		else if (i.second > frequencyMap[modeList.back()]) {
			modeList.clear();
			modeList.push_back(i.first);
		}
	}

	return modeList;
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
	std::cout << "The list of the mode values is: ";
	std::vector<int> modeList = mode(array, arraySize);
	for(int i; i < modeList.size(); i++) {
		std::cout << modeList[i] << " ";
	}
	std::cout << std::endl;
}
