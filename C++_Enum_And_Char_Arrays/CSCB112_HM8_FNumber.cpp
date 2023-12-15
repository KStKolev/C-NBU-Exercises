#include <iostream>
//define lengthOfMatrix < 10 for Ex.3
#define lengthOfMatrix 3
using namespace std;

bool isSymmetric(int matrix[][lengthOfMatrix])
{
    for (int i = 0; i < lengthOfMatrix; i++)
    {
        for (int j = 0; j < lengthOfMatrix; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return false;
            }
        }
    }
    return true;
}

const int MAX_SIZE = 20;

bool checkWord(const char matrix[MAX_SIZE][MAX_SIZE][7], const char* word, int length) {
    for (int index = 0; index < length; ++index)
    {
        for (int j = index; j < length; ++j)
        {
            if (strcmp(matrix[index][j], word) == 0)
            {
                return true;
            }
        }
    }
    return false;
}

void concatenateMainDiagonal(const char matrix[MAX_SIZE][MAX_SIZE][7], char* result, int currentColumnsLength) {
    result[0] = '\0';
    for (int i = currentColumnsLength - 1; i >= 0; --i)
    {
        strcat(result, matrix[i][i]);
    }
}

void concatenateSecondaryDiagonal(const char matrix[MAX_SIZE][MAX_SIZE][7], char* result, int currentColumnsLength) {
    result[0] = '\0';
    int copyOfLength = currentColumnsLength;
    for (int i = 0; i < copyOfLength; ++i)
    {
        strcat(result, matrix[i][--currentColumnsLength]);
    }
}

bool check_element(const char* element) {
    const int string_len = strlen(element);
    for (int i = 0; i < string_len; ++i) 
    {
        if (!isdigit(element[i]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    //Ex.1 
    /*char arrayOfCharacter[20];
    cin >> arrayOfCharacter;
    int countOfElements = strlen(arrayOfCharacter);
    bool isPalindrome = true;
    int copyCount = countOfElements -1;
    for (int i = 0; i < countOfElements; i++)
    {
        char currentChar = arrayOfCharacter[i];
        char backwardsChar = arrayOfCharacter[copyCount--];
        if (currentChar != backwardsChar)
        {
            isPalindrome = false;
        }
    }
    if (isPalindrome)
    {
        std::cout << "it is palindrome";
    }
    else
    {
        std::cout << "it is not palindrome";
    }*/

    //Ex.2 
    //Задавам константа на колоните в редовете. Стойността е повече от 1.
    /*int const numberOfRows = 10;
    char rows[numberOfRows][10] = { "Cd", "Bc", "Ab"};
    bool result = true;
    if (check_element(rows[0]))
    {
        for (int index = 1; index < numberOfRows; ++index)
        {
            int firstNumber = atoi(rows[index - 1]);
            if (firstNumber == 0)
            {
                break;
            }
            int secondNumber = atoi(rows[index]);
            if (firstNumber <= secondNumber)
            {
                result = false;
                break;
            }
        }
    }
    else
    {
        for (int index = 1; index < numberOfRows; ++index)
        {
            int charsIndex = strlen(rows[index - 1]);
            if (charsIndex == 0)
            {
                break;
            }
            if (strcmp(rows[index - 1], rows[index]) <= 0)
            {
                result = false;
                break;
            }
        }
    }
    if (result == true)
    {
        cout << "Row is monotonically decreasing." << endl;
    }
    else
    {
        cout << "Row is not monotonically decreasing." << endl;
    }*/

    //Ex. 3 
    //елементите от номера на редицата трябва да са равни от елементите от номера на колоната.
    // lengthOfMatrix < 10
      /*  int matrix[lengthOfMatrix][lengthOfMatrix] =
        { 
           { 1, 3, 0 },
           { 3, 2, 6 },
           { 0, 6, 6 } 
        };
        if (isSymmetric(matrix) == true)
        {
            cout << "its a symmetric matrix";
        }
        else
        {
            cout << "its not a symmetric matrix";
        }*/

    //Ex.4
    /*
        int const numberOfStrings = 5;
        // Since there is not a specific length of the row, i'll set it to four elements, because it has to be constant.
        int const numberOfElements = 4;
        char numberRow[numberOfElements][numberOfStrings] =
        {
            {"1234"}, {"5678"}, {"9101"}, {"3456"} 
        };
        double averageResult = 0;
        for (int index = 0; index < numberOfElements; index++)
        {
            averageResult += atof(numberRow[index]);
        }
        averageResult /= numberOfElements;
        cout << averageResult;
    */

    //Ex.5
    /*
        char matrix[MAX_SIZE][MAX_SIZE][7] = {
            {"person", "lover", "disney"},
            {"you", "me", "ant"},
            {"no", "yes", "live"}
        };

        const char* wordToCheck = "live";

        bool result = checkWord(matrix, wordToCheck, 3);

        if (result) 
        {
            // Използване на placeholder %s при метода printf за по-лесно принтиране
            printf("%s is present above or on the secondary diagonal.", wordToCheck);
        }
        else 
        {
            // Използване на placeholder %s при метода printf за по-лесно принтиране
            printf("%s is not present above or on the secondary diagonal.", wordToCheck);
        }
    */

    //Ex.6
    char matrix[MAX_SIZE][MAX_SIZE][7] =
    {
        {"person", "lover", "live"},
        {"you", "me", "ant"},
        {"person", "yes", "live"},
    };

    // Maximum length of concatenated string
    char mainDiagonalResult[MAX_SIZE * 7 + 1];
    char secondaryDiagonalResult[MAX_SIZE * 7 + 1];

    concatenateMainDiagonal(matrix, mainDiagonalResult, 3);
    concatenateSecondaryDiagonal(matrix, secondaryDiagonalResult, 3);

    cout << mainDiagonalResult << endl;
    cout << secondaryDiagonalResult << endl;

    if (strcmp(mainDiagonalResult, secondaryDiagonalResult) == 0)
    {
        cout << "The sentences match.";
    }
    else 
    {
        cout << "The sentences do not match.";
    }
}


