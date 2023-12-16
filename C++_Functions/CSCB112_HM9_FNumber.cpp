#include <iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

//Ex.1

void PrintElementsInArray(string array[], int lengthOfArray) 
{
	for (int i = 0; i < lengthOfArray; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void DeleteArrayElement(string array[], int lengthOfArray, int indexOfLastElement)
{
	PrintElementsInArray(array, lengthOfArray);
	cout << "Set index: ";
	int index = 0;
	cin >> index;
	if (index < 0 || index >= lengthOfArray || indexOfLastElement == 0)
	{
		cout << "Index is outside of array boundaries." << endl;
	}
	else
	{
		array[index] = "";
		string valueOfNextElement = array[index + 1];
		for (int i = index + 1; i < lengthOfArray; i++)
		{
			if (i + 1 == lengthOfArray)
			{ 
				array[i - 1] = "";
				break;
			}
			array[i - 1] = valueOfNextElement;
			valueOfNextElement = array[i + 1];
		}
		indexOfLastElement--;
		PrintElementsInArray(array, lengthOfArray);
	}
}

void AddElementToEndOfArray(string array[], int indexOfLastElement, int lengthOfArray)
{
	PrintElementsInArray(array, lengthOfArray);

	if (indexOfLastElement >= lengthOfArray - 1)
	{
		cout << "array is full" << endl;
		cout << "element cannot be set to index of the array's length." << endl;
	}
	else
	{
		cout << "Set value to element in array: " << endl;
		string element;
		cin >> element;
		array[indexOfLastElement + 1] = element;

		PrintElementsInArray(array, lengthOfArray);
	}
}

bool IsOverTheBoundary(string array[], int lengthOfArray) 
{
	for (int i = 0; i < lengthOfArray; i++)
	{
		if (array[i] == "")
		{
			return false;
		}
	}
	return true;
}

void AddArrayElementInSpecificIndex(string array[], int lengthOfArray, int lastElementIndex)
{
	PrintElementsInArray(array, lengthOfArray);

	if (IsOverTheBoundary(array, lengthOfArray))
	{
		cout << "The array is full." << endl;
	}
	else
	{
		cout << "Set index: ";
		int index = 0;
		cin >> index;

		if (index < 0 || index >= lengthOfArray || index > lastElementIndex + 1)
		{
			cout << "Index is outside of array boundaries." << endl;
		}
		else
		{
			string previousElementValue = array[index];
			cout << "Set value to the element: ";
			string element;
			cin >> element;

			if (element.length() == 7)
			{
				array[index] = element;
				for (int i = index; i < lengthOfArray - 1; i++)
				{
					string nextElementValue = array[i + 1];
					array[i + 1] = previousElementValue;
					previousElementValue = nextElementValue;
				}

				PrintElementsInArray(array, lengthOfArray);
				lastElementIndex++;
			}
			else
			{
				cout << "It's not a faculty number." << endl;
			}
		}
	}
}

void ChangeArrayElement(string array[],  int lengthOfArray)
{
	PrintElementsInArray(array, lengthOfArray);
	int index = 0;
	cout << "Index musn't be bigger or equal than the length of array: " << lengthOfArray << endl;
	cin >> index;
	if (index < 0 || index >= lengthOfArray)
	{
		cout << "Index is outside of array boundaries." << endl;
	}
	else
	{
		cout << "Set value to the element in array: ";
		string element;
		cin >> element;
		if (element.length() != 7)
		{
			cout << "It's not a faculty number." << endl;
		}
		else
		{
			cin >> array[index];
			PrintElementsInArray(array, lengthOfArray);
		}
	}
}

//Ex.2
int FindIndexThroughFacultyNumber(string array[], int lengthOfArray, string facultyNumber) 
{
	for (int i = 0; i < lengthOfArray; i++)
	{
		if (array[i] == facultyNumber)
		{
			return i;
		}
	}
	cout << "The element was not found: ";
	return -1;
}

//Ex.3
void WagonsToCross(int n, int m) {
	string locomotive = "LBOPKRKSKPMRKKPP";

	if (n >= m || m > locomotive.length()) {
		cout << "Invalid input." << endl;
		return;
	}

	cout << "From wagon " << n << " to wagon " << m << ", cross through: ";

	for (int index = n; index < m; ++index) {
		char currentWagon = locomotive[index];
		if (currentWagon == 'O' || currentWagon == 'P' || currentWagon == 'K') {
			cout << currentWagon << " ";
		}
	}

	cout << endl;
}

//Ex.4
void CreateMatrix(int** arr, int rows, int cols) {
	int counter = 1;
	int element;

	for (int i = 0; i < rows; ++i) 
	{
		if (i % 2 == 0) 
		{
			for (int j = 0; j < cols; ++j) 
			{
				cout << "Set value to element: ";
				cin >> element;
				arr[i][j] = element;
			}
		}
		else 
		{
			for (int j = cols - 1; j >= 0; --j)
			{
				cout << "Set value to element: ";
				cin >> element;
				arr[i][j] = element;
			}
		}
	}
}

void PrintMatrix(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j) 
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void DeleteMatrix(int** arr, int rows) 
{
	for (int i = 0; i < rows; ++i) 
	{
		delete[] arr[i];
	}
	delete[] arr;
}

//Ex.5
void RemoveDigitsFromArray(char* array) {
	int lengthOfArray = strlen(array);
	int indexElement = 0;

	for (int index = 0; index < lengthOfArray; ++index) 
	{
		if (!isdigit(array[index])) 
		{
			array[indexElement++] = array[index];
		}
	}
	array[indexElement] = '\0';
}

//Ex.6
void ReplaceSubstring(char* array, char* oldSubstring, char* newSubstring) 
{
	char* found = strstr(array, oldSubstring);

	while (found != nullptr) 
	{
		int prefixLength = found - array;
		int suffixLength = strlen(found + strlen(oldSubstring));
		char textLength[40];

		strncpy(textLength, array, prefixLength);
		strcpy(textLength + prefixLength, newSubstring);
		strcpy(textLength + prefixLength + strlen(newSubstring), found + strlen(oldSubstring));
		strcpy(array, textLength);

		found = strstr(array, oldSubstring);
	}
}

//Ex.7
int CountEqualCharacters(char* firstArray, char* secondArray) 
{
	int count = 0;


	for (int i = 0; i < strlen(firstArray); i++)
	{
		for (int l = 0; l < strlen(secondArray); l++)
		{
			if (firstArray[i] == secondArray[l])
			{
				count++;
			}
		}
	}

	return count;
}

//Ex. 8
int CountDifferentCharacters(char* firstArray, char* secondArray)
{
	int count = 0;

	for (int i = 0; i < strlen(firstArray); i++)
	{
		bool isDifferent = true;
		for (int l = 0; l < strlen(secondArray); l++)
		{
			if (firstArray[i] == secondArray[l])
			{
				isDifferent = false;
			}
		}
		if (isDifferent == true)
		{
			count++;
		}
	}

	for (int i = 0; i < strlen(secondArray); i++)
	{
		bool isDifferent = true;
		for (int l = 0; l < strlen(firstArray); l++)
		{
			if (secondArray[i] == firstArray[l])
			{
				isDifferent = false;
			}
		}
		if (isDifferent == true)
		{
			count++;
		}
	}

	return count;
}

//Ex.9
int MinWeightDifference(int weightArray[], int numberOfWeights, int firstArraySum, int secondArraySum)
{
	if (numberOfWeights == 0)
	{
		return abs(firstArraySum - secondArraySum);
	}

	//Използване на рекурсия
	int firstDifference = MinWeightDifference(weightArray, numberOfWeights - 1, firstArraySum + weightArray[numberOfWeights - 1], secondArraySum);
	int secondDifference = MinWeightDifference(weightArray, numberOfWeights - 1, firstArraySum, secondArraySum + weightArray[numberOfWeights - 1]);

	return min(firstDifference, secondDifference);
}

void SeparateWeights(int weightArray[], int numberOfWeights) {
	int firstArraySum = 0;
	int secondArraySum = 0;

	int minimalDifference = MinWeightDifference(weightArray, numberOfWeights, firstArraySum, secondArraySum);

	cout << "Minimum weight difference between two groups: " << minimalDifference << endl;
}

//Ex. 10

const int MAX_ROWS = 5;
const int MAX_COLUMNS = 5;

void CreateMatrix(float array[MAX_ROWS][MAX_COLUMNS], int rows, int columns) 
{
	cout << "Create matrix: " << endl;
	for (int i = 0; i < rows; ++i) 
	{
		for (int j = 0; j < columns; ++j)
		{
			cout << "set the value of array element: ";
			double element;
			cin >> element;

			if (element < 3.33 || element > 333.33)
			{
				cout << "Invalid element!";
				return;
			}

			array[i][j] = element;
		}
	}
}

void FindBiggestColumnSumAndEvenRowElements(float array[MAX_ROWS][MAX_COLUMNS], int rows, int columns) 
{
	float biggestColumnSum = 1;

	for (int j = 0; j < columns; ++j) 
	{
		float columnSum = 1;
		for (int i = 0; i < rows; ++i) 
		{
			columnSum *= array[i][j];
		}

		if (j % 2 == 0 && columnSum > biggestColumnSum)
		{
			biggestColumnSum = columnSum;
		}
	}

	cout << "Print elements on even row which are equal to biggestColumnSum variable: ";
	for (int i = 0; i < rows; ++i) 
	{
		for (int j = 0; j < columns; j++) 
		{
			if (i % 2 == 0 && array[i][j] == biggestColumnSum)
			{
				cout << array[i][j] << " ";
			}
		}
	}
	cout << endl;
}

void FormDifferenceMatrix(float firstMatrix[MAX_ROWS][MAX_COLUMNS], float secondMatrix[MAX_ROWS][MAX_COLUMNS], int rows, int columns)
{
	float differenceMatrix[MAX_ROWS][MAX_COLUMNS];

	for (int i = 0; i < rows; ++i) 
	{
		for (int j = 0; j < columns; ++j) 
		{
			differenceMatrix[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
		}
	}

	cout << "New matrix:" << endl;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j) 
		{
			cout << differenceMatrix[i][j] << " ";
		}
		cout << endl;
	}
}

void ReplaceBelowSecondaryDiagonalWithZero(float matrix[MAX_ROWS][MAX_COLUMNS], int rows, int columns) {
	int counter = 0;
	for (int row = 1; row < rows; row++)
	{
		for (int col = 0; col < columns; col++)
		{
			matrix[row][col] = 0;
			if (col == counter)
			{
				break;
			}
		}
		counter++;
	}
	cout << "Printing the modified array:" << endl;
	for (int i = 0; i < rows; ++i) 
	{
		for (int j = 0; j < columns; ++j) 
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void PopulateUnitMatrix(float matrix[MAX_ROWS][MAX_COLUMNS], int rows, int columns) {
	for (int i = 0; i < rows; ++i) 
	{
		for (int j = 0; j < columns; ++j) 
		{
			matrix[i][j] = (i == j) ? 1.0 : 0.0;
		}
	}

	cout << "matrix:" << endl;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j) 
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void MultiplyMatrices(float firstMatrix[MAX_ROWS][MAX_COLUMNS], float secondMatrix[MAX_ROWS][MAX_COLUMNS], int rows, int columns) 
{
	for (int i = 0; i < rows; ++i) 
	{
		for (int j = 0; j < columns; ++j) 
		{
			firstMatrix[i][j] *= secondMatrix[i][j];
		}
	}

	cout << "Result of summed Matrix from requirement E:" << endl;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j) 
		{
			cout  << firstMatrix[i][j] << " ";
		}
		cout << endl;
	}
}


int main()
{
	/*
	string array[] = { "text", "mix", "apple", "smoothie", "ball" };
	ChangeArrayElement(array, 5);
	*/

	/*
	string array[10] = { "text", "mix", "apple", "smoothie", "ball", "one"};
	AddArrayElementInSpecificIndex(array, 10, 5);
	*/
	

	/*
	string array[7] = { "text", "mix", "apple", "smoothie", "ball", "one" };
	AddElementToEndOfArray(array, 5, 7);
	*/
	
	/*
	string array[7] = { "text", "mix", "apple", "smoothie", "ball", "one" };
	DeleteArrayElement(array, 7, 5);
	*/

	//Ex.2
	/*string facultyNumberArray[7] = { "F113002", "F213456", "F563756", "F163957", "F288456", "F443416" };
	int arrayLength = 7;
	int indexOfLastElement = 5;
	PrintElementsInArray(facultyNumberArray, arrayLength);
	string command;
	while (command != "End")
	{
		cout << "Add, Update, Delete or Find faculty number or End: ";
		cin >> command;

		if (command == "Add")
		{
			AddArrayElementInSpecificIndex(facultyNumberArray, arrayLength, indexOfLastElement);
		}
		else if (command == "Update")
		{
			ChangeArrayElement(facultyNumberArray, arrayLength);
		}
		else if (command == "Delete")
		{
			DeleteArrayElement(facultyNumberArray, arrayLength, indexOfLastElement);
			indexOfLastElement--;
		}
		else if (command == "Find")
		{
			cout << "Set value of faculty number: ";
			string facultyNumber;
			cin >> facultyNumber;
			cout << FindIndexThroughFacultyNumber(facultyNumberArray, arrayLength, facultyNumber) << endl;
		}
	}*/

	//Ex.3
	/*
	int startWagon = 2;
	int endWagon = 9;
	WagonsToCross(startWagon, endWagon);
	*/

	//Ex.4
	/*
	int rows = 3;
	int cols = 3;

	int** dynamicArray = new int* [rows];
	for (int i = 0; i < rows; ++i) {
		dynamicArray[i] = new int[cols];
	}

	CreateMatrix(dynamicArray, rows, cols);

	cout << "Printed matrix: " << endl;
	PrintMatrix(dynamicArray, rows, cols);

	DeleteMatrix(dynamicArray, rows);
	*/

	//Ex.5
	/*
	const int sizeOfArray = 20;
	char charArray[sizeOfArray];

	cout << "Set the value of char array: ";
	cin.getline(charArray, sizeOfArray);
	RemoveDigitsFromArray(charArray);

	cout << "Array without digits: " << charArray << endl;
	*/

	//Ex.6
	/*
	const int arrayLength = 40;
	char inputArray[arrayLength];
	char oldSubstring[arrayLength];
	char newSubstring[arrayLength];

	cout << "Set the elements of array: ";
	cin.getline(inputArray, arrayLength);

	cout << "Set the old substring: ";
	cin.getline(oldSubstring, arrayLength);

	cout << "Set the new substring: ";
	cin.getline(newSubstring, arrayLength);

	cout << "Old array: " << inputArray << endl;

	ReplaceSubstring(inputArray, oldSubstring, newSubstring);

	cout << "New array: " << inputArray << endl;
	*/

	//Ex.7
	/*
	const int arrayLength = 40;
	char firstArray[arrayLength];
	char secondArray[arrayLength];

	cout << "Set the first array: ";
	cin.getline(firstArray, arrayLength);

	cout << "Set the second array: ";
	cin.getline(secondArray, arrayLength);

	int equalCount = CountEqualCharacters(firstArray, secondArray);
	cout << "Number of equal characters: " << equalCount << endl;
	*/
	
	//Ex. 8
	/*
	const int arrayLength = 40;
	char firstArray[arrayLength];
	char secondArray[arrayLength];

	cout << "Set the first array: ";
	cin.getline(firstArray, arrayLength);

	cout << "Set the second array: ";
	cin.getline(secondArray, arrayLength);

	int differentCount = CountDifferentCharacters(firstArray, secondArray);
	cout << "Number of different characters: " << differentCount << endl;
	*/

	//Ex. 9
	/*
	const int MAX_WEIGHTS = 10;
	int numberOfWeights;
	cout << "Set the number of weights: ";
	cin >> numberOfWeights;

	if (numberOfWeights <= 0 || numberOfWeights > MAX_WEIGHTS)
	{
		cout << "Invalid number of weights." << endl;
	}
	else
	{
		int weightArray[MAX_WEIGHTS];
		cout << "Set elements to the array of weights: " << endl;
		for (int i = 0; i < numberOfWeights; ++i)
		{
			cin >> weightArray[i];
		}

		SeparateWeights(weightArray, numberOfWeights);
	}
	*/

	//Ex. 10
	int rows, columns;

	cout << "Set the number of rows in the matrix: ";
	cin >> rows;

	cout << "Set the number of columns in the matrix: ";
	cin >> columns;

	if (rows <= 0 || columns <= 0 || rows > MAX_ROWS || columns > MAX_COLUMNS)
	{
		cout<< "Invalid input!" << endl;
		return 0;
	}

	float matrix[MAX_ROWS][MAX_COLUMNS];

	//A.
	CreateMatrix(matrix, rows, columns);

	//B.
	//FindBiggestColumnSumAndEvenRowElements(matrix, rows, columns);

	//C.
	/*
	float secondArray[MAX_ROWS][MAX_COLUMNS];
	CreateMatrix(secondArray, rows, columns);
	FormDifferenceMatrix(matrix, secondArray, rows, columns);
	*/

	//D.
	//ReplaceBelowSecondaryDiagonalWithZero(matrix, rows, columns);

	//E.
	float unitMatrix[MAX_ROWS][MAX_COLUMNS];
	//PopulateUnitMatrix(unitMatrix, rows, columns);

	//F.
	MultiplyMatrices(matrix, unitMatrix, rows, columns);
}
