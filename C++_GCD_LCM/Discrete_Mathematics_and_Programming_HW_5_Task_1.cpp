#include <iostream>
using namespace std;

int const MULTITUDE_LENGTH = 10;

string SetMultitudeDifference(string A, string B)
{
	string C = "0000000000";

	for (int i = 0; i < MULTITUDE_LENGTH; i++)
	{
		if (A[i] != B[i] && A[i] == '1')
		{
			C[i] = '1';
		}
	}

	return C;
}

int main()
{
	string multitudeA;
	cin >> multitudeA;

	string multitudeB;
	cin >> multitudeB;

	string multitudeC = SetMultitudeDifference(multitudeA, multitudeB);

	cout << multitudeC << endl;
}
