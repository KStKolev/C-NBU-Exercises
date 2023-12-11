#include <iostream>

using namespace std;

int main()
{
    //Ex. 1 Съставете С++ конзолна програма 
    //Kоято да се изисква от потребителя да въведе стойности за променливи от всички вградени в езика примитивни типове данни.

    /*
            cout << "Please input a value for every primitive data type in C++:" << endl;

            cout << "character: ";
            char symbol;
            cin >> symbol;

            cout << "short number: ";
            short shortNumber;
            cin >> shortNumber;

            cout << "integer number: ";
            int integerNumber;
            cin >> integerNumber;

            cout << "long number: ";
            long longNumber;
            cin >> longNumber;

            cout << "longlong number: ";
            long long longLongNumber;
            cin >> longLongNumber;

            cout << "float number: ";
            float floatNumber;
            cin >> floatNumber;

            cout << "double number: ";
            double doubleNumber;
            cin >> doubleNumber;

            cout << "long double number: ";
            long double longDoubleNumber;
            cin >> longDoubleNumber;

            cout << "bool: ";
            bool isTrue;
            cin >> isTrue;
    */

    /*
            Ex. 2 Съставете С++ конзолна програма
            При която да се извършат и отпечатат на екрана всички стойности на математически израз
            Чрез стойности на две целочислени променливи, въведени от потребителя.
            Използвайте +, -, *, /, %.
      
            cout << "Please set a value to the variables firstNumber and secondNumber." << endl;

            cout << "firstNumber: ";
            int firstNumber;
            cin >> firstNumber;

            cout << "secondNumber: ";
            int secondNumber;
            cin >> secondNumber;

            cout << "Sum of the two integers: ";
            int sum = firstNumber + secondNumber;
            cout << sum << endl;

            cout << "Subtraction of the two integers: ";
            int subtract = firstNumber - secondNumber;
            cout << subtract << endl;

            cout << "Multiplication of the two integers: ";
            int multiplication = firstNumber * secondNumber;
            cout << multiplication << endl;

            cout << "Division of the two integers: ";
            int division = firstNumber / secondNumber;
            cout << division << endl;

            cout << "Modulo of the two integers: ";
            int modulo = firstNumber % secondNumber;
            cout << modulo << endl;
    */

    /*
            Ex. 3 Съставете С++ конзолна програма, 
            чрез която да напишете изрази, 
            използващи съкратените математически операции,
            върху променливи със стойности въведени от потребителя. 
            След всяка промяна да се отпечатва стойността на променливите.
      

            cout << "Please set a value to the variable number." << endl;

            cout << "number: ";
            int number;
            cin >> number;

            cout << "Set the addValue to the variable number: ";
            int addValue;
            cin >> addValue;
            number += addValue;
            cout << "The variable number after adding operation: ";
            cout << number << endl;

            cout << "Set the subtractValue to the variable number: ";
            int subtractValue;
            cin >> subtractValue;
            number -= subtractValue;
            cout << "The variable number after subtract operation: ";
            cout << number << endl;

            cout << "Set the multiplyValue to the variable number: ";
            int multiplyValue;
            cin >> multiplyValue;
            number *= multiplyValue;
            cout << "The variable number after multiply operation: ";
            cout << number << endl;

            cout << "Set the divideValue to the variable number: ";
            int divideValue;
            cin >> divideValue;
            number /= divideValue;
            cout << "The variable number after divide operation: ";
            cout << number << endl;

            cout << "Set the moduloValue to the variable number: ";
            int moduloValue;
            cin >> moduloValue;
            number %= moduloValue;
            cout << "The variable number after modulo operation: ";
            cout << number << endl;
    */

    /*
            Ex.4 Съставете С++ конзолна програма, чрез която да се разменят стойности на две променливи, чрез побитови операции.
      */

    int firstNumber = 12;
    int secondNumber = 25;
   
    // Bitwise AND
    firstNumber &= secondNumber;

    // Bitwise OR
    secondNumber |= firstNumber;

    // Bitwise XOR
    firstNumber ^= secondNumber;

    // Bitwise NOT
    cout << (~firstNumber);

    // Bitwise SHL
    secondNumber <<= 2;

    // Bitwise SHR
    secondNumber >>= 4;
}