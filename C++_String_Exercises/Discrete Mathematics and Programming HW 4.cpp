#include <iostream>
#include <string>
using namespace std;

//Ex.1
string DecodeMessage(string encodedMessage, int numberOfPositions) 
{
	// 65-90 -> [A-Z]
	// 97 - 122 -> [a - z]
	int messageLength = encodedMessage.length();
	for (int i = 0; i < messageLength; i++)
	{
		bool isCapitalLetter = (encodedMessage[i] >= 65) && (encodedMessage[i] <= 90);
		bool isLowerLetter = (encodedMessage[i] >= 97) && (encodedMessage[i] <= 122);
		if (isCapitalLetter == true)
		{
			encodedMessage[i] += numberOfPositions;
			if (encodedMessage[i] > 90)
			{
				encodedMessage[i] -= 26;
			}
		}
		else if (isLowerLetter == true)
		{
			int asciiCharValue = encodedMessage[i];
			if (asciiCharValue + numberOfPositions > 122)
			{
				encodedMessage[i] = asciiCharValue - (26 - numberOfPositions);
			}
			else
			{
				encodedMessage[i] = asciiCharValue + numberOfPositions;
			}
		}
	}
	return encodedMessage;
}

//Ex.2
bool isValidTIN(const string tin) {
	int x1 = tin[0] - '0';
	int x2 = tin[1] - '0';
	int x3 = tin[2] - '0';
	int x4 = tin[3] - '0';
	int x5 = tin[4] - '0';
	int x6 = tin[5] - '0';
	int x7 = tin[6] - '0';
	int x8 = tin[7] - '0';
	int x9 = tin[8] - '0';
	int x10 = tin[9] - '0';

	int dayspermonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int year = atoi(tin.substr(0, 2).c_str());
	int month = atoi(tin.substr(2, 2).c_str());
	int day = atoi(tin.substr(4, 2).c_str());

	if (day < 1 || day > 31 || month < 1 || (month >= 13 && month <= 20) || (month >= 33 && month <= 40) || month > 52 || year < 0)
	{
		return false;
	}

	if (month >= 21 && month <= 32)
	{
		month -= 20;
	}
	else if (month >= 41 && month <= 52)
	{
		month -= 40;
	}

	if (month == 2)
	{
		if ((year % 4) == 0) 
		{
			dayspermonth[1] = 29;
		}
	}

	if (day > dayspermonth[month - 1])
	{
		return false;
	}

	int result = (2 * x1 + 4 * x2 + 8 * x3 + 5 * x4 + 10 * x5 + 9 * x6 + 7 * x7 + 3 * x8 + 6 * x9) % 11;

	if (result == 10)
	{
		result = 0;
	}

	return result == x10;
}

int main()
{
	//Ex. 1
	/*
	string encodedMessage;
	getline(cin, encodedMessage);

	int numberOfPositions;
	cin >> numberOfPositions;

	if (numberOfPositions >= 0 && numberOfPositions <= 25)
	{
		string decodedMessage = DecodeMessage(encodedMessage, numberOfPositions);
		cout << decodedMessage;
	}
	else
	{
		cout << "Invalid input data!" << endl;
	}
	*/

	//Ex.2
	string uniqueCitizenshipNumber;
	getline(cin, uniqueCitizenshipNumber);

	int citizenshipNumber = uniqueCitizenshipNumber.length();
	if (citizenshipNumber == 10)
	{
		if (isValidTIN(uniqueCitizenshipNumber) == true)
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
	}
	else
	{
		cout << "Invalid input data!";
	}
}
