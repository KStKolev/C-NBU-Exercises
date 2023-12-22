#include <iostream>
using namespace std;

int gcd(int a, int b, int& x, int& y) 
{
    if (b == 0) 
    {
        x = 1;
        y = 0;
        return a;
    }

    int x1 = 0;
    int y1 = 0;
    int d = gcd(b, a % b, x1, y1);

    x = y1;
    y = x1 - y1 * (a / b);

    return d;
}

void euclideanAlgorithm(int a, int b, int c) 
{
    if (a < 1 || a > 100 || b < 1 || b > 100 || c < 1 || c > 100) 
    {
        cout << "Invalid input data!" << endl;
        return;
    }

    int x = 0;
    int y = 0;
    int gcdResult = gcd(a, b, x, y);

    if (c % gcdResult != 0) 
    {
        cout << "No solution!" << endl;
        return;
    }

    x *= (c / gcdResult);
    y *= (c / gcdResult);

    cout << x << endl;
    cout << y << endl;
}

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    euclideanAlgorithm(a, b, c);
}

