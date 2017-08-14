#include "task.h"
#include <iostream>

void task::swap() {
	int size = 0;
	std::cin >> size;
	int *array = new int[size];
	for (int i = 0; i < size; ++i) {
		std::cin >> array[i];
	}
	std::cout << std::endl;
	for (int i = size - 1; i >= 0; --i) {
		std::cout << array[i] << ' ';
	}
	std::cout << std::endl;

	system("pause");
	system("cls");
	delete[] array;
}

void task::per() {
	int array[4];
	int sum = 0;
	for (int i = 0; i < 4; ++i) {
		std::cin >> array[i];
		sum += array[i];
	}

	std::cout << sum << std::endl;
	system("pause");
	system("cls");
}

void task::prib() {
	int size = 0;
	int sum = 0;
	std::cin >> size;
	int *array = new int[size];
	for (int i = 0; i < size; ++i) {
		std::cin >> array[i];
		sum += array[i];
	}

	std::cout << std::endl << "sum: " << sum 
		<< std::endl << "sr: " << (float)sum / (float)size
		<< std::endl;

	system("pause");
	system("cls");
	delete[] array;
}

void task::maxMin() {
	int array[12];
	int sum = 0;
	int max = 0;
	int min = 0;
	for (int i = 0; i < 12; ++i) {
		std::cin >> array[i];
		if (i == 0) {
			min = array[i];
		}
		if (array[i] > max) {
			max = array[i];
		}
		else if (array[i] < min) {
			min = array[i];
		}
	}

	std::cout << "max: " << max << std::endl << "min: " << min << std::endl;
	system("pause");
	system("cls");
}

void task::del() {
	int size = 0;
	std::cin >> size;
	int *array = new int[size];
	int *array2 = new int[size];
	for (int i = 0; i < size; ++i) {
		std::cin >> array[i];
	}

	int j = 0;
	for (int i = 0; i < size; ++i) {
		if (array[i] != 0) {
			array2[j] = array[i];
			j++;
		}
	}

	for (int i = j; i < size; ++i) {
		array2[i] = -1;
	}

	for (int i = 0; i < size; ++i) {
		std::cout << array2[i] << ' ';
	}
	std::cout << std::endl;

	system("pause");
	system("cls");
	delete[] array;
}

void task::sloj() {
	int size = 0;
	std::cin >> size;
	int *array = new int[size];
	for (int i = 0; i < size; ++i) {
		std::cin >> array[i];
	}

	int size2 = 0;
	std::cin >> size2;
	int *array2 = new int[size2];
	for (int i = 0; i < size2; ++i) {
		std::cin >> array2[i];
	}

	int *arrayP = new int[100];

	int count = 0;
	int g = 0;
	for (int i = 0; i < size; ++i) {
		bool flag = true;
		if (array[i] == array2[0]) {
			for (int j = i + 1, h = 1; h < size2; ++j, ++h) {
				if (array[j] != array2[h]) {
					flag = false;
					break;
				}

				if (flag == true) {
					arrayP[g] = i;
					count++;
					g++;
				}
			}
		}
	}

	if (count != 0) {
		std::cout << count << std::endl;
		for (int i = 0; i < count; ++i) {
			std::cout << arrayP[i] << ' ';
		}
	}
	else {
		std::cout << -1;
	}

	std::cout << std::endl;
	system("pause");
	system("cls");
	delete[] array;
	delete[] array2;
	delete[] arrayP;
}

task::task()
{
}


task::~task()
{
}
