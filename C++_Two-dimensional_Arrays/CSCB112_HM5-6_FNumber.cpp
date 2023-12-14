#include <iostream>
#include <cmath>
#include <algorithm>
#include <random>
using namespace std;

void mixArray(int array[], int count)
{
	for (int i = 0; i < count; i++)
	{
		int randomNumber = rand() % count;
		swap(array[i], array[randomNumber]);
	}
}

int main()
{
	//Ex.1
	/*
		int matrixRows;
		cout << "Set the number of rows: ";
		cin >> matrixRows;
		int matrixColumns;
		cout << "Set the number of columns: ";
		cin >> matrixColumns;
		int** matrix = new int* [matrixRows];
		for (int row = 0; row < matrixRows; row++)
		{
			matrix[row] = new int[matrixColumns];
		}

		srand(time(0));
		for (int row = 0; row < matrixRows; row++)
		{
			for (int col = 0; col < matrixColumns; col++)
			{
				int randomNumber = rand();
				while (randomNumber < -12 || randomNumber > 122)
				{
					randomNumber = rand();
				}
				matrix[row][col] = randomNumber;
			}
		}


		for (int row = 0; row < matrixRows; row++)
		{
			for (int col = 0; col < matrixColumns; col++)
			{
				cout << matrix[row][col];
				cout << " ";
			}
			cout << endl;
		}
	*/

	//Ex.2
	/*int counter = 0;
	for (int row = matrixRows - 1; row >= 0; row--)
	{
		for (int col = 0; col < matrixColumns; col++)
		{
			if (col == counter)
			{
				break;
			}
			matrix[row][col] = 0;
		}
		counter++;
	}

	for (int row = 0; row < matrixRows; row++)
	{
		for (int col = 0; col < matrixColumns; col++)
		{
			cout << matrix[row][col];
			cout << " ";
		}
		cout << endl;
	}*/

	//Ex.3
	/*
	for (int row = 0; row < matrixRows; row++)
	{
		for (int col = 0; col < matrixColumns; col++)
		{
			cout << matrix[row][col];
			cout << " ";
		}
		cout << endl;
	}

	cout << endl;

	int counter = 0;
	for (int row = 0; row < matrixRows; row++)
	{
		for (int col = 0; col < matrixColumns; col++)
		{
			// ñúáèðàì row ñ 1, çàùîòî çàïî÷âàìå äà áðîèì îò 1 íàãîðå -> 1-âè ðåä, 2-ðè ðåä... Òîâà å íåùî, ðàçëè÷àâàùî ñå îò ñèíòàêñèñà íà C++.
			matrix[row][col] = pow(col, row+1);
			if (col == counter)
			{
				break;
			}
		}
		counter++;
	}

	for (int row = 0; row < matrixRows; row++)
	{
		for (int col = 0; col < matrixColumns; col++)
		{
			cout << matrix[row][col];
			cout << " ";
		}
		cout << endl;
	}
	*/

	//Ex.4
	/*
	for (int row = 0; row < matrixRows; row++)
	{
		for (int col = 0; col < matrixColumns; col++)
		{
			cout << matrix[row][col];
			cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	int index = 0;
	int dir[4][2] = 
	{ 
		{0, 1}, 
		{1, 0}, 
		{0, -1}, 
		{-1, 0} 
	};

	int row = 0;
	int col = -1;

	while (matrixRows > 0 && matrixColumns > 0) 
	{
		int numCells = (index % 2) ? matrixRows : matrixColumns;
		for (int i = 0; i < numCells; i++) 
		{
			col += dir[index][1];
			row += dir[index][0], col;
			cout << matrix[row][col];
			cout << " ";
		}
		cout << endl;
		if (index % 2)
		{
			matrixColumns--;
		}
		else 
		{ 
			matrixRows--; 
		}
		index = (index + 1) % 4;
	}

	// Delete the matrix after is no longer of use.
	for (int row = 0; row < matrixRows; ++row) {
		delete[] matrix[row];
		matrix[row] = nullptr;
	}

	delete[] matrix;
	matrix = nullptr;
	*/

	//Ex. 5
	/*
		srand(time(0));
		int arrayLength = rand();
		while (arrayLength <= 1 || arrayLength >= 100)
		{
			arrayLength = rand();
		}
		cout << "array length: ";
		cout << arrayLength << endl;

		cout << "Set p value: ";
		int p;
		cin >> p;

		cout << "Set q value, which is bigger than p: ";
		int q;
		cin >> q;

		int* arrayOfNumbers = new int[arrayLength];
		for (int i = 0; i < arrayLength; i++)
		{
			int number = rand();
			while (number < p || number > q)
			{
				number = rand();
			}
			arrayOfNumbers[i] = number;
		}

		int oddNumbersToSelect;
		cout << "Set numbers to rotate in the array -  the value has to be less than or equal to arrayLength and it has to be odd: ";
		cin >> oddNumbersToSelect;

		if (oddNumbersToSelect <= arrayLength && oddNumbersToSelect % 2 != 0)
		{
			int countOfEvenNumbers = 0;
			for (int i = 0; i < oddNumbersToSelect; i++)
			{
				if (arrayOfNumbers[i] % 2 == 0)
				{
					cout << arrayOfNumbers[i];
					cout << " ";
					countOfEvenNumbers++;
				}
			}
			cout << endl;
			cout << "Count of even numbers: ";
			cout << countOfEvenNumbers;
		}
	*/

	//Ex.6
	/*
		int arrayLength = 0;
		while (arrayLength < 1 || arrayLength > 100)
		{
			cout << "Set the length of the array - it has to be between 1 and 100 exclusive: ";
			cin >> arrayLength;
		}

		int* arrayOfNumbers = new int[arrayLength];
		for (int i = 0; i < arrayLength; i++)
		{
			cout << "Set value of the number: ";
			int number;
			cin >> number;
			arrayOfNumbers[i] = number;
		}

		bool isPositive = false;

		for (int i = 0; i < arrayLength; i++)
		{
			if (arrayOfNumbers[i] > 0)
			{
				cout << "Index of the fhe first positive number is: ";
				cout << i << endl;
				isPositive = true;
				break;
			}
		}
		if (!isPositive)
		{
			cout << -1 << endl;
		}

		isPositive = false;

		for (int i = arrayLength - 1; i >= 0; i--)
		{
			if (arrayOfNumbers[i] > 0)
			{
				cout << "Index of the fhe last positive number is: ";
				cout << i << endl;
				isPositive = true;
				break;
			}
		}
		if (!isPositive)
		{
			cout << -1 << endl;
		}

		cout << "Indexes of every positive number in the array:" << endl;
		for (int i = 0; i < arrayLength; i++)
		{
			if (arrayOfNumbers[i] > 0)
			{
				cout << arrayOfNumbers[i];
				cout << " ";
			}
		}
	*/

	//Ex.7
	/*
		cout << "Set length of the array: ";
		int lengthOfArray;
		cin >> lengthOfArray;
		int* arrayNumbers = new int[lengthOfArray];
		srand(time(0));
		for (int i = 0; i < lengthOfArray; i++)
		{
			int number = rand();
			arrayNumbers[i] = number;
		}
		// We can't divide with 0, and that's why the for loop starts with index 1.
		for (int i = 1; i < lengthOfArray; i++)
		{
			if (arrayNumbers[i] % i == 0)
			{
				cout << arrayNumbers[i];
				cout << " ";
			}
		}
	*/
	
	//Ex.8
	// - àêî Ai < i, òî Ài äà ñå ïîâäèãà íà êâàäðàò;
	// - àêî Ài = i, ïðîìåíÿ ñå çíàêúò íà Ài;
	// - àêî Ài > i, îò Ài ñå èçâàæäà 1.
	/*
		int numbersToGet;
		cout << "Set the amount to rotations, which has to be more than 1 and less than 100: ";
		cin >> numbersToGet;

		if (numbersToGet > 1 && numbersToGet < 100)
		{
			int* arrayOfNumbers = new int[numbersToGet];
			for (int i = 0; i < numbersToGet; i++)
			{
				cout << "Set value of the number: ";
				int number;
				cin >> number;
				arrayOfNumbers[i] = number;
			}

			cout << "Printing every selected number from the array: " << endl;
			for (int i = 0; i < numbersToGet; i++)
			{
				cout << arrayOfNumbers[i];
				cout << " ";
			}
			cout << endl;

			for (int i = 0; i < numbersToGet; i++)
			{
				if (arrayOfNumbers[i] < i)
				{
					arrayOfNumbers[i] = pow(arrayOfNumbers[i], 2);
				}
				else if (arrayOfNumbers[i] == i)
				{
					if (arrayOfNumbers[i] > 0)
					{
						arrayOfNumbers[i] -= 2 * arrayOfNumbers[i];
					}
					else
					{
						arrayOfNumbers[i] = abs(arrayOfNumbers[i]);
					}
				}
				else
				{
					arrayOfNumbers[i] -= 1;
				}
			}

			cout << "Printing every number from the array after modification: " << endl;
			for (int i = 0; i < numbersToGet; i++)
			{
				cout << arrayOfNumbers[i];
				cout << " ";
			}
		}
	*/

	//Ex.9
	/*
		int numbersToGet;
		cout << "Set the amount to rotations, which has to be more than 1 and less than 100: ";
		cin >> numbersToGet;

		if (numbersToGet > 1 && numbersToGet < 100)
		{
			int* arrayOfNumbers = new int[numbersToGet];
			for (int i = 0; i < numbersToGet; i++)
			{
				cout << "Set value of the number: ";
				int number;
				cin >> number;
				arrayOfNumbers[i] = number;
			}

			cout << "Printing numbers in reverse: ";
			for (int i = numbersToGet - 1; i >= 0; i--)
			{
				cout << arrayOfNumbers[i];
				cout << " ";
			}
		
			cout << endl;

			cout << "Printing even and odd numbers from array: ";
			for (int i = 0; i < numbersToGet; i++)
			{
				if (arrayOfNumbers[i] % 2 == 0)
				{
					cout << arrayOfNumbers[i];
					cout << " ";
				}
			}
			for (int i = 0; i < numbersToGet; i++)
			{
				if (arrayOfNumbers[i] % 2 != 0)
				{
					cout << arrayOfNumbers[i];
					cout << " ";
				}
			}
			cout << endl;

			cout << "Print random numbers from array: ";
			srand(time(0));
			mixArray(arrayOfNumbers, numbersToGet);
			for (int i = 0; i < numbersToGet; i++)
			{
				cout << arrayOfNumbers[i] << " ";
			}
			cout << endl;
		}
	*/
	
	//Ex.10
	int numbersToGet;
	cout << "Set the amount to rotations, which has to be more than 1 and less than 100: ";
	cin >> numbersToGet;

	if (numbersToGet > 1 && numbersToGet < 100)
	{
		int* arrayOfNumbers = new int[numbersToGet];
		for (int i = 0; i < numbersToGet; i++)
		{
			cout << "Set value of the number: ";
			cin >> arrayOfNumbers[i];
		}

		for (int i = 0; i < numbersToGet; i++)
		{
			for (int j = i+1; j < numbersToGet; j++)
			{
				if (arrayOfNumbers[i] == arrayOfNumbers[j])
				{
					for (int k = j; k < numbersToGet; k++)
					{
						arrayOfNumbers[k] = arrayOfNumbers[k + 1];
					}
					j--;
					numbersToGet--;
				}
			}
		}
		cout << "Array with unique elements: ";
		for (int i = 0; i < numbersToGet; i++)
		{
			cout << arrayOfNumbers[i] << " ";
		}
		cout << endl;
	}
}
