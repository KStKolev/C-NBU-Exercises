#include <iostream>

using namespace std;

void printNumbers(int number, int counter) 
{
	if (counter == 0)
	{
		for (int i = 0; i < number; i++)
		{
			cout << 0;
		}
	}
	else if (counter < number)
	{
		for (int i = 1; i <= counter; i++)
		{
			cout << i;
		}
		for (int i = 0; i < number - counter; i++)
		{
			cout << 0;
		}
	}
	else
	{
		for (int i = 1; i <= counter; i++)
		{
			cout << i;
		}
	}
}

void printBackwardsNumber(int number, int counter)
{
	if (counter == 0)
	{
		for (int i = 0; i < number; i++)
		{
			cout << 0;
		}
	}
	else if (counter == number)
	{
		for (int i = counter; i > 0; i--)
		{
			cout << i;
		}
	}
	else
	{
		for (int i = 0; i < number - counter; i++)
		{
			cout << 0;
		}
		for (int i = counter; i > 0; i--)
		{
			cout << i;
		}
	}
	cout << endl;
}

void printModifiedNumbers(int number, int counter)
{
	if (counter == 0)
	{
		for (int i = 0; i < number - 1; i++)
		{
			cout << 0;
		}
	}
	else if (counter < number)
	{
		for (int i = 1; i <= counter; i++)
		{
			cout << i;
		}
		for (int i = 0; i < (number - counter) - 1; i++)
		{
			cout << 0;
		}
	}
	else
	{
		for (int i = 1; i <= counter - 1; i++)
		{
			cout << i;
		}
	}
}

void printHistogram(string number, int sumOfDigits)
{
	cout << number;
	cout << "/";
	cout << sumOfDigits;
	if (number != "9")
	{
		cout << ", ";
	}
}

int main()
{
	//Ex.1 Съставете С++ конзолна програма, чрез която да намерите броя на цифрите на произволно въведено от потребителя цяло число.
	/*
		int number;
		cin >> number;
		int counter = 0;
		while (number != 0)
		{
			number /= 10;
			counter++;
		}
		cout << counter;
	*/

	//Ex.2 Съставете С++ конзолна програма
	//Kоято да изведете на екрана, сбора на цифрите на произволно въведено от потребителя цяло число.
	/*
		int number;
		cin >> number;
		int sumOfDigits = 0;
		while (number != 0)
		{
			sumOfDigits += number % 10;
			number /= 10;
		}
		if (sumOfDigits < 0)
		{
			sumOfDigits /= -1;
		}
		cout << sumOfDigits;
	*/

	//Ex.3 Съставете С++ конзолна програма, чрез която да изведете на екрана ново цяло число
	//съдържащо цифрите в обратен ред на произволно въведено от потребителя цяло число.
	/*
		int number;
		cin >> number;
		if (number < 0)
		{
			cout << '-';
			number /= -1;
		}
		while (number != 0)
		{
			cout << number % 10;
			number /= 10;
		}
	*/

	//Ex.4 Съставете С++ конзолна програма 
	//чрез която да изведете на екрана хистограма на срещанията на цифри от 0 до 9 в произволно въведено от потребителя цяло число. 
	/*
		int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
		int number;
		cin >> number;
		if (number < 0)
		{
			number /= -1;
		}
		while (number != 0)
		{
			int currentNumber = number % 10;
			switch (currentNumber)
			{
			case 0:
				zero += 1;
				break;
			case 1:
				one += 1;
				break;
			case 2:
				two += 1;
				break;
			case 3:
				three += 1;
				break;
			case 4:
				four += 1;
				break;
			case 5:
				five += 1;
				break;
			case 6:
				six += 1;
				break;
			case 7:
				seven += 1;
				break;
			case 8:
				eight += 1;
				break;
			case 9:
				nine += 1;
				break;
			}
			number /= 10;
		}
		printHistogram("0", zero);
		printHistogram("1", one);
		printHistogram("2", two);
		printHistogram("3", three);
		printHistogram("4", four);
		printHistogram("5", five);
		printHistogram("6", six);
		printHistogram("7", seven);
		printHistogram("8", eight);
		printHistogram("9", nine);
	*/

	//Ex.5 Съставете С++ конзолна програма, чрез която да извеждате на екрана равностранен триъгълник от символи. 
	//Броят на редовете и символът за печатане да се въвежда от потребителя.
	/*
		cout << "Input length of the triangle:" << endl;
		int number;
		cin >> number;
		cout << "Input symbol for the triangle:" << endl;
		char symbol;
		cin >> symbol;
		if (number >= 1)
		{
			cout << symbol << endl;
		}
		int increaser = 1;
		for (int i = 2; i <= number; i++)
		{
			for (int k = 1; k <= i + increaser; k++)
			{
				cout << symbol;
			}
			cout << endl;
			increaser++;
		}
	*/

	// Ex.6 Съставете С++ конзолна програма, чрез която да изведете на екрана, правоъгълник от цифри. 
	// Потребителят да въвежда цифра, като се направи проверка, дали се въвежда валидна цифра. 
	// Да се определи най-подходящият тип за съхранение на въведената цифра.
	/*
		int number;
		cin >> number;
		int counter = 0;
		for (int i = 0; i <= number; i++)
		{
			printNumbers(number, counter);
			printBackwardsNumber(number, counter);
			counter++;
		}
	*/

	//Ex. 7* Да се реши горната задача, но без повторение на средната цифра.
	/*
		int number;
		cin >> number;
		int counter = 0;
		for (int i = 0; i <= number; i++)
		{
			printModifiedNumbers(number, counter);
			printBackwardsNumber(number, counter);
			counter++;
		}
	*/

	//Ex. 7 Да се напише програма, която по зададени положителни цели числа a, m и n намира стойността на у
	/*cout << "Set number a: ";
	int numberA;
	cin >> numberA;
	cout << "Set number m: ";
	int numberM;
	cin >> numberM;
	cout << "Set number n: ";
	int numberN;
	cin >> numberN;

	int numberY = 0;

	if (numberA > 0 && numberM > 0 && numberN > 0)
	{
		for (int i = 1; i <= numberN; i++)
		{
			for (int j = 1; j <= numberM; j++)
			{
				numberY += (numberA + j) / (i + j);
				break;
			}
		}
		cout << numberY;
	}*/

	//Ex.8 Да се напише програма, която намира най-големия общ делител на п положителни цели числа.
	/*
		cout << "Insert how many numbers are iterated over:";
		int count;
		cin >> count;
		int greatestCommonDivisor = 1;
		int firstNumber;
		cout << "Input the first number (it must be the biggest one) and afterwards input smaller numbers: " << endl;
		cin >> firstNumber;
		greatestCommonDivisor *= firstNumber;
		for (int i = 1; i < count; i++)
		{
			int number;
			cout << "Input a number: " << endl;
			cin >> number;
			if (greatestCommonDivisor > number && greatestCommonDivisor % number != 0)
			{
				greatestCommonDivisor *= number;
			}
		}
		cout << greatestCommonDivisor;
	*/
	

	//Ex.9 Да се напише програма, която намира всички цели числа от интервала [m, n], 
	//Цифрите на които са различни (m и n са дадени цели числа, 0 < m < n).
	/*
		int const M_NUMBER = 5;
		int const N_NUMBER = 20;
		for (int i = M_NUMBER + 1; i < N_NUMBER; ++i)
		{
			cout << i << endl;
		}
	*/

	//Ex.10 Да се напише програма, която намира първите n (n > 1) прости числа, които започват с 3.
	/*
		cout << "Input the count of prime numbers, starting with 3: ";
		int count;
		cin >> count;
		if (count > 1)
		{
			int number = 3;
			cout << number << endl;
			int counter = 1;
			int currentNumber = number;
			while (counter < count)
			{
				number = currentNumber;
				if (number % 2 != 0 && number % 3 != 0 && number % 5 != 0 && number % 7 != 0)
				{
					int firstDigit = 0;
					while (number != 0)
					{
						firstDigit = number % 10;
						number /= 10;
					}
					if (firstDigit == 3)
					{
						counter++;
						cout << currentNumber << endl;
					}
				}
				currentNumber++;
			}
		}
	*/
}

