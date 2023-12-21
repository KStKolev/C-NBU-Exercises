#include <iostream>
using namespace std;

// Custom created function for Ex. 3
int findGreatestCommonFactor(int a, int b) 
{
	int remainder = 0;
	while ((remainder = a % b) != 0)
	{
		a = b;
		b = remainder;
	}
	return b;
}

int main()
{
	//Ex. 1
	/*int numeralSystem = 0;
	cin >> numeralSystem;

	int	numberToConvert = 0;
	cin >> numberToConvert;

	if (numeralSystem < 2 || numeralSystem > 16)
	{
		cout << "Invalid input data!";
	}
	else if (numberToConvert < 1 || numberToConvert > 100)
	{
		cout << "Invalid input data!";
	}
	else
	{
		int copyOfConvertedNumber = numberToConvert;
		int counter = 0;
		if (numeralSystem == 2)
		{
			while (copyOfConvertedNumber != 0)
			{
				copyOfConvertedNumber /= 2;
				counter++;
			}
			int* result = new int[counter];
			for (int index = 0; index < counter; index++)
			{
				result[index] = numberToConvert % 2;
				numberToConvert /= 2;
			}
			for (int index = counter - 1; index >= 0; index--)
			{
				cout << result[index];
			}
		}
		else if (numeralSystem == 8)
		{
			while (copyOfConvertedNumber != 0)
			{
				copyOfConvertedNumber /= 8;
				counter++;
			}
			
			int* result = new int[counter];
			for (int index = counter - 1; index >= 0; index--)
			{
				result[index] = numberToConvert % 8;
				numberToConvert /= 8;
			}
			for (int index = 0; index < counter; index++)
			{
				cout << result[index];
			}
		}
		else if (numeralSystem == 16)
		{
			while (copyOfConvertedNumber != 0)
			{
				copyOfConvertedNumber /= 16;
				counter++;
			}

			string* result = new string[counter];

			for (int index = 0; index < counter; index++)
			{
				int remainder = numberToConvert % 16;
				switch (remainder)
				{
					case 1:
						result[index] = "1";
						break;
					case 2:
						result[index] = "2";
						break;
					case 3:
						result[index] = "3";
						break;
					case 4:
						result[index] = "4";
						break;
					case 5:
						result[index] = "5";
						break;
					case 6:
						result[index] = "6";
						break;
					case 7:
						result[index] = "7";
						break;
					case 8:
						result[index] = "8";
						break;
					case 9:
						result[index] = "9";
						break;
					case 10:
						result[index] = "A";
						break;
					case 11:
						result[index] = "B";
						break;
					case 12:
						result[index] = "C";
						break;
					case 13:
						result[index] = "D";
						break;
					case 14:
						result[index] = "E";
						break;
					case 15:
						result[index] = "F";
						break;
				}
				numberToConvert /= 16;
			}

			for (int index = counter - 1; index >= 0; index--)
			{
				cout << result[index];
			}

		}
	}*/

	//Ex.2
	/*int firstNumber = 0;
	cin >> firstNumber;
	int secondNumber = 0;
	cin >> secondNumber;
	int thirdNumber = 0;
	cin >> thirdNumber;
	if (
		(firstNumber < 20 || firstNumber > 300)
		||
		(secondNumber < 20 || secondNumber > 300)
		||
		(thirdNumber < 20 || thirdNumber > 300)
	   )
	{
		cout << "Invalid input data!";
	}
	else
	{
			int result = 301;
			if (result  > firstNumber)
			{
				result = firstNumber;
			}
			if (result > secondNumber)
			{
				result = secondNumber;
			}
			if (result > thirdNumber)
			{
				result = thirdNumber;
			}
			while (result > 0)
			{
				if (firstNumber % result == 0 && secondNumber % result == 0 && thirdNumber % result == 0)
				{
					break;
				}
					result--;
			}
			cout << result;
	}*/

	//Ex.3
	int firstNumber = 0;
	cin >> firstNumber;
	int secondNumber = 0;
	cin >> secondNumber;
	int thirdNumber = 0;
	cin >> thirdNumber;
	if (
		(firstNumber < 10 || firstNumber > 100)
		||
		(secondNumber < 10 || secondNumber > 100)
		||
		(thirdNumber < 10 || thirdNumber > 100)
		)
	{
		cout << "Invalid input data!";
	}
	else
	{
		int innerLeastCommonMultiple = 0;
		if (firstNumber < secondNumber)
		{
			innerLeastCommonMultiple = (firstNumber * secondNumber) / findGreatestCommonFactor(secondNumber, firstNumber);
		}
		else
		{
			innerLeastCommonMultiple = (firstNumber * secondNumber) / findGreatestCommonFactor(firstNumber, secondNumber);
		}

		int result = 0;
		if (innerLeastCommonMultiple < thirdNumber)
		{
			result = (innerLeastCommonMultiple * thirdNumber) / findGreatestCommonFactor(thirdNumber, innerLeastCommonMultiple);
		}
		else
		{
			result = (innerLeastCommonMultiple * thirdNumber) / findGreatestCommonFactor(innerLeastCommonMultiple, thirdNumber);
		}

		cout << result;
	}
}