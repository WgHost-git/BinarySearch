#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int SIZE = 5;
	int arr[SIZE];
	int temp;

	// Ввод массива
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Введите " << i + 1 << " элемент массива ";
		cin >> arr[i];
	}

	// Сортировка массива
	for (int j = 0; j < SIZE; j++)
	{
		for (int i = 0; i < SIZE - j - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

	// Вывод массива
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " | ";
	}
	cout << endl;

	int midd, right, left, key;
	bool flag;
	left = 0;
	right = SIZE - 1;
	midd = 0;
	flag = true;

	cout << "Введите значение для поиска ";
	cin >> key;

	if (key >= arr[left] && key <= arr[right])
	{
		while (flag)
		{
			midd = (left + right) / 2;
			if (key < arr[midd])
			{
				right = midd - 1;
			}
			else if (key > arr[midd])
			{
				left = midd + 1;
			}
			else
			{
				cout << "Искомый ключ найден, индекс" << midd;
				flag = false;
			}

			if (left > right)
			{
				cout << "Искомый ключ не найден";
				flag = false;
			}
		}
	}
	else
	{
		cout << "Искомый ключ не найден";
	}
}