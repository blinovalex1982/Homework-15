#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
	setlocale(LC_ALL, "RU");

	// Задача 1.
	std::cout << "Задача 1. \nОдномерный массив размером в 10 элементов: \n\n";
	const int size1 = 10;
	int arr[size1]{};
	int sum = 0;
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr[i] = rand() % 10 + 1;
		std::cout << arr[i] << ' ';
		sum += arr[i];
	}
	std::cout << "\n\nСред.ариф. массива = " << sum / double(size1) << '\n';
	int k = 0;
	for (int i = 0; i < size1; i++)
		if (arr[i] < sum / double(size1)) {
			k++;
		}
	std::cout << "\nКол-во элементов, значение которых меньше средн.ариф.= " << k << std::endl;
	
	
	//Задача 2.
	std::cout << "Задача 2. \n\nМассив №1\n";
	const int rows1 = 5;
	const int cols1 = 5;
	int arr1[rows1][cols1]{};
	srand(time(NULL));
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			arr1[i][j] = rand() % 10 + 1;
			std::cout << arr1[i][j] << '\t';
		}
		std::cout << std::endl;
	}
	int sum_arr1 = 0;
	for (int i = 0; i < rows1; i++)
		for (int j = 0; j < cols1; j++) {
			arr1[i][j] = rand() % 10 + 1;
			sum_arr1 += arr1[i][j];
		}
	std::cout << " \nСумма массива №1 = " << sum_arr1;
	std::cout << "\n\nМассив №2\n";
	const int rows2 = 5;
	const int cols2 = 5;
	int arr2[rows2][cols2]{};
	for (int i = 0; i < rows2; i++) {
		for (int j = 0; j < cols2; j++) {
			arr2[i][j] = rand() % 10 + 1;
			std::cout << arr2[i][j] << '\t';
		}
		std::cout << std::endl;
	}
	int sum_arr2 = 0;
	for (int i = 0; i < rows2; i++)
		for (int j = 0; j < cols2; j++) {
			arr1[i][j] = rand() % 10 + 1;
			sum_arr2 += arr1[i][j];
		}
	std::cout << "\nСумма массива №2 = " << sum_arr2 << "\n\n";
	std::cout << "Сумма массивов №1 и №2 = " << sum_arr1 + sum_arr2 << std::endl;


	// Задача 3. 
	std::cout << "Задача 3. \n Ведите шестизначное число -> ";
	int i;
	std::cin >> i;
	const int size = 6;
	int arr3[size]{};
	
	if (i < 100000 || i > 999999) {
		std::cout << "Программа завершена!";
	}
	else
	for (int i = 0; i < size; i++) {
		//std::cout << i;
		std::cin >> arr3[i];
	}
	for(int i = 0; i < size; i++){
			std::cout << arr3[i] << '\t';
		}

	
		

	return 0;
}