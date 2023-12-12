#include <iostream>
#include <math.h>
#include <string>
#define MIN 51.0
#define MAX 82.0

using namespace std;

int romanNumeralValue(char symbol)
{
	switch (symbol)
	{
	case 'M':
		return 1000;
	case 'D':
		return 500;
	case 'C':
		return 100;
	case 'L':
		return 50;
	case 'X':
		return 10;
	case 'V':
		return 5;
	case 'I':
		return 1;
	}
	return -1;
}

void numberInInterval(int minNumber, int maxNumber) 
{
	srand(time(0));
	int randomNumber = rand();
	while (randomNumber < minNumber || randomNumber > maxNumber)
	{
		randomNumber = rand();
	}
	string textNumber = to_string(randomNumber);
	if (textNumber.length() >= 3)
	{
		for (int i = 0; i < textNumber.length(); i++)
		{
			cout << textNumber[i] << endl;
		}
	}
	else
	{
		cout << "The number is not composed of three digits.";
	}
}

int main()
{
	// Ex.1
	/*int numArray[] = { 1,4,5,9,10,40,50,90,100,400,500,900,1000 };
	string romanSymbols[] = { "I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M" };
	int number;
	cin >> number;
	if (number >= 1 && number <= 3999)
	{
		int i = 12;
		while (number > 0)
		{
			int dividedNumber = number / numArray[i];
			number = number % numArray[i];
			while (dividedNumber--)
			{
				cout << romanSymbols[i];
			}
			i--;
		}
	}*/

	//Ex.2

	/*string inputRomanSymbols;
	cin >> inputRomanSymbols;
	int sumOfRomanNumberalsValue = 0;
	for (int i = 0; i < inputRomanSymbols.length(); i++)
	{
		char evenRomanSymbol = inputRomanSymbols[i];
		if (i + 1 < inputRomanSymbols.length())
		{
			char oddRomanSymbol = inputRomanSymbols[i + 1];
			if (romanNumeralValue(evenRomanSymbol) >= romanNumeralValue(oddRomanSymbol))
			{
				sumOfRomanNumberalsValue += romanNumeralValue(evenRomanSymbol);
			}
			else
			{
				sumOfRomanNumberalsValue += (romanNumeralValue(oddRomanSymbol) - romanNumeralValue(evenRomanSymbol));
				i++;
			}
		}
		else
		{
			sumOfRomanNumberalsValue += romanNumeralValue(evenRomanSymbol);
		}
	}
	if (sumOfRomanNumberalsValue >= 1 && sumOfRomanNumberalsValue <= 3999)
	{
		cout << sumOfRomanNumberalsValue;
	}*/

	//Ex. 3
	//cout << "Input a number and see if it's in the interval: ";
	//double number;
	//cin >> number;
	//if (MIN <= number && number <= MAX)
	//{
	//	cout << "The number is in interval [51.0, 82.0]";
	//}
	//else
	//{
	//	cout << "It is not in the interval [51.0, 82.0]";
	//}

	// Ex.4
	/*while (true)
	{
		cout << "Input a desired number: ";
		int number;
		cin >> number;
		cout << "Your number is: ";
		cout << number << endl;
	}*/

	//Ex.5
	/*
		int minNumber;
		int maxNumber;
		cout << "Input the MIN number of the interval: ";
		cin >> minNumber;
		cout << "Input the MAX number of the interval: ";
		cin >> maxNumber;
		numberInInterval(minNumber, maxNumber);
	*/

	// Ex. 6
	srand(time(0));
	double randomNumber = rand();

	cout << "Set the value to the minNumber: ";
	int minNumber;
	cin >> minNumber;

	cout << "Set the value to the maxNumber: ";
	int maxNumber;
	cin >> maxNumber;

	while (randomNumber < minNumber || randomNumber > maxNumber)
	{
		randomNumber = rand();
	}
	cout << randomNumber;
}


