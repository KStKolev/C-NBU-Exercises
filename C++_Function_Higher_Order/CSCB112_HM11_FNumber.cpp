#include <iostream>
using namespace std;

typedef double (* BinaryFunction) (double, int);

typedef int (* UnaryFunction) (int);

typedef double (*TernaryFunction) (int, int, int);

int Prod(UnaryFunction func, int a) 
{
	return func(a);
}

double Prod(BinaryFunction func, double a, int b)
{
	return func(a, b);
}

double ExpressionResult(TernaryFunction func, int a, int b, int c) 
{
	return func(a, b, c);
};

double Power(double a, int b) 
{
	return pow(a, b);
}

int Permutation(int a) 
{
	int multiplicationSum = 1;
	for (int i = a; i > 1; i--)
	{
		multiplicationSum *= i;
	}
	return multiplicationSum;
}

double FirstAlgorithmFormula(double x, int n) 
{
	double S = x;
	for (int i = 3; i < n; i += 2)
	{
		if (i % 2 != 0)
		{
			S -= (Power(x, i) / Permutation(i));
		}
		else
		{
			S += (Power(x, i) / Permutation(i));
		}
	}

	if (n % 2 == 0)
	{
		S += (Power(x, 2 * n + 1)) / Permutation(2 * n + 1);
	}
	else
	{
		S -= (Power(x, 2 * n + 1)) / Permutation(2 * n + 1);
	}

	return S;
}

double SecondAlgorithmFormula(double x, int n) 
{
	double S = 1;
	int counter = 1;
	for (int i = 2; i < n; i += 2)
	{
		if (counter % 2 != 0)
		{
			S -= (Power(x, i) / Permutation(i));
		}
		else
		{
			S += (Power(x, i) / Permutation(i));
		}
		counter++;
	}

	if (n % 2 == 0)
	{
		S += (Power(x, 2 * n)) / (2 * Permutation(n));
	}
	else
	{
		S -= (Power(x, 2 * n)) / (2 * Permutation(n));
	}

	return S;
}

double Expression(int n, int m, int a) 
{
	double result = 0;

	for (int i = 1; i <= n; ++i) 
	{
		double currentResult = 1;

		for (int j = 1; j <= m; ++j)
		{
			// cast it to double
			currentResult *= static_cast<double>(a + i) / (i + j);
		}

		result += currentResult;
	}

	return result;
}

const int MATRIXSIZE = 3;

void CreateMatrix(int matrix[MATRIXSIZE][MATRIXSIZE]) 
{
	cout << "Set matrix:" << endl;
	for (int i = 0; i < MATRIXSIZE; ++i)
	{
		for (int j = 0; j < MATRIXSIZE; ++j)
		{
			cout << "matrix[" << i << "][" << j << "]: ";
			cin >> matrix[i][j];
		}
	}
}

void PrintMatrix(int matrix[MATRIXSIZE][MATRIXSIZE]) 
{
	cout << "Printing Matrix: " << endl;
	for (int i = 0; i < MATRIXSIZE; i++)
	{
		for (int j = 0; j < MATRIXSIZE; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

typedef void (* SetEvenElementsOfDiagonals) (int [MATRIXSIZE][MATRIXSIZE]);
typedef void (* SetOddElementsOfDiagonals) (int [MATRIXSIZE][MATRIXSIZE]);

void DiagonalAlgorithm(SetEvenElementsOfDiagonals f, SetOddElementsOfDiagonals g, int matrix[MATRIXSIZE][MATRIXSIZE])
{
	f(matrix);
	g(matrix);
}

void SetEvenElements(int matrix[MATRIXSIZE][MATRIXSIZE])
{
	cout << "Setting even elements:" << endl;
	int setElementsCounter = 1;
	for (int i = MATRIXSIZE - 2; i >= 0; i--)
	{
		for (int j = 0; j < setElementsCounter; j++)
		{
			if (j % 2 == 0)
			{
				cout << "Set value to [" << i << "][" << j << "]: " << endl;
				cin >> matrix[i][j];
			}
		}
		setElementsCounter++;
	}
}

void SetOddElements(int matrix[MATRIXSIZE][MATRIXSIZE]) 
{
	cout << "Setting odd elements:" << endl;
	int setElementsCounter = 1;
	for (int i = MATRIXSIZE - 2; i >= 0; i--)
	{
		for (int j = 0; j < setElementsCounter; j++)
		{
			if (j % 2 != 0)
			{
				cout << "Set value to [" << i << "][" << j << "]: " << endl;
				cin >> matrix[i][j];
			}
		}
		setElementsCounter++;
	}
}

int main()
{
	//Ex. 1 a)
	
	/*
	cout << "Set value to the powered number: ";
	double poweredNumber = 0;
	cin >> poweredNumber;

	cout << "Set value to the power: ";
	int powerNumber = 0;
	cin >> powerNumber;
	cout << Prod(Power, poweredNumber, powerNumber);
	*/
	

	//Ex. 1 b)
	/*
	cout << "Set the value of permutation number: ";
	int permutationNumber = 0;
	cin >> permutationNumber;
	if (permutationNumber <= 0)
	{
		cout << "Permutation cannot be below 1.";
	}
	else
	{
		cout << Prod(Permutation, permutationNumber);
	}
	*/

	//Ex. 2 a)
	/*
	cout << "Set the value of x: ";
	double x = 0;
	cin >> x;

	cout << "Set the value of n: ";
	int n = 0;
	cin >> n;

	cout << Prod(FirstAlgorithmFormula, x, n);
	*/

	// Ex. 2 b)
	/*
	cout << "Set the value of x: ";
	double x = 0;
	cin >> x;

	cout << "Set the value of n: ";
	int n = 0;
	cin >> n;

	cout << Prod(SecondAlgorithmFormula, x, n);
	*/

	//Ex. 3

	/*
	cout << "Set value for n: ";
	int n = 0;
	cin >> n;

	cout << "Set value for m: ";
	int m = 0;
	cin >> m;

	if (n < 0 || m < 0)
	{
		cout << "Invalid inputs:";
	}
	else
	{
		cout << "Set value for a: ";
		int a = 0;
		cin >> a;

		cout << ExpressionResult(Expression, n, m, a);
	}
	*/

	//Ex.4
	int matrix[MATRIXSIZE][MATRIXSIZE];
	CreateMatrix(matrix);
	PrintMatrix(matrix);

	DiagonalAlgorithm(SetEvenElements, SetOddElements, matrix);
	PrintMatrix(matrix);
}
