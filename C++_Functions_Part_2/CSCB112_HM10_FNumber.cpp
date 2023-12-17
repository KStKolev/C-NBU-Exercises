#include <iostream>
#include <cstring>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

const int MAX_ROWS = 20;
const int MAX_COLS = 20;

//Ex.1
 
int findMax(const int* array, int size) {
    if (size == 0)
    {
        cout << "Empty array." << endl;
    }
    else
    {
        int maxElement = array[0];
        for (int index = 1; index < size; ++index)
        {
            if (array[index] > maxElement)
            {
                maxElement = array[index];
            }
        }
        return maxElement;
    }
}

int findMin(const int* array, int size) 
{
    if (size == 0) 
    {
        cout << "Empty array." << endl;
    }
    else
    {
        int minElement = array[0];
        for (int index = 1; index < size; ++index)
        {
            if (array[index] < minElement)
            {
                minElement = array[index];
            }
        }
        return minElement;
    }
}

void findRowMinMax(int** matrix, int rows, int cols, int rowIndex) 
{
    if (rowIndex >= rows) 
    {
        cout << "Invalid row index." << endl;
        return;
    }

    const int* row = matrix[rowIndex];

    if (rowIndex % 2 == 0) 
    {
        int maxElement = findMax(row, cols);
        cout << "Biggest element of row " << rowIndex << ": " << maxElement << endl;
    }
    else 
    {
        int minElement = findMin(row, cols);
        cout << "Smallest element of row " << rowIndex << ": " << minElement << endl;
    }
}

//Ex.2

int getNumberByFormula(int a, int b, int c) 
{
    return 1 * a +  2 * b + 3 * c;
}

void modifyArray(int* array, int const lengthOfArray) 
{
    for (int i = 0; i < lengthOfArray; i++)
    {
        if (array[i] > 0)
        {
            cout << "Set the numbers from the formula:" << endl;
            int a = 0, b = 0, c = 0;
            cout << "Set number a: ";
            cin >> a;
            cout << "Set number b: ";
            cin >> b;
            cout << "Set number c: ";
            cin >> c;
            array[i] = getNumberByFormula(a, b, c);
        }
    }
}

void fillArray(int* array, int const lengthOfArray) 
{
    cout << "Fill Array:" << endl;
    for (int i = 0; i < lengthOfArray; i++)
    {
        cout << "Set the value of element: ";
        cin >> array[i];
    }
}

void fillArray(char* array, int const lengthOfArray)
{
    cout << "Fill Array:" << endl;
    for (int i = 0; i < lengthOfArray; i++)
    {
        cout << "Set the value of element: ";
        cin >> array[i];
    }
}

void printArray(int* array, int const lengthOfArray) 
{
    cout << "Printing array: " << endl;
    for (int i = 0; i < lengthOfArray; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void printArray(char* array, int const lengthOfArray)
{
    cout << "Printing array: " << endl;
    for (int i = 0; i < lengthOfArray; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

//Ex.3
void orderArray(int* array, int const lengthOfArray, bool isDescending) 
{
    if (isDescending == true)
    {
        for (int index = 0; index < lengthOfArray; index++)
        {
            int biggestNumber = array[index];
            int counter = index;
            for (int l = index + 1; l < lengthOfArray; l++)
            {
                if (array[l] > biggestNumber)
                {
                    biggestNumber = array[l];
                    counter = l;
                }
            }
            array[counter] = array[index];
            array[index] = biggestNumber;
        }
    }
    else
    {
        for (int index = 0; index < lengthOfArray; index++)
        {
            int smallestNumber = array[index];
            int counter = index;
            for (int l = index + 1; l < lengthOfArray; l++)
            {
                if (array[l] < smallestNumber)
                {
                    smallestNumber = array[l];
                    counter = l;
                }
            }
            array[counter] = array[index];
            array[index] = smallestNumber;
        }
    }
}

//Ex.4
char* recursiveStringCopy(const char* original, int index = 0) 
{
    if (original[index] == '\0') 
    {
        char* copy = new char[index + 1];
        strcpy(copy, original);
        return copy;
    }

    return recursiveStringCopy(original, index + 1);
}

//Ex.5

int compareNumbers(string firstNumber, string secondNumber, int index = 0) {
    if (firstNumber[index] == '-' || secondNumber[index] == '-')
    {
        cout << "Invalid input" << endl;
        return 2;
    }

    if (index == firstNumber.size() && index == secondNumber.size()) 
    {
        return 0; 
    }
    else if (index == firstNumber.length()) 
    {
        return -1; 
    }
    else if (index == secondNumber.length()) 
    {
        return 1; 
    }

    if (firstNumber[index] < secondNumber[index]) 
    {
        return -1;
    }
    else if (firstNumber[index] > secondNumber[index]) 
    {
        return 1; 
    }
    else 
    {
        return compareNumbers(firstNumber, secondNumber, index + 1);
    }
}

//Ex.6
unsigned int convertToNumber(const char* textNumberArray) 
{
    if (*textNumberArray == '\0')
    {
        return 0;
    }

    return (*textNumberArray - '0') + 10 * convertToNumber(textNumberArray + 1);
}

//Ex.7
void replaceCharacter(char* array, char oldChar, char newChar)
{
    if (*array == '\0')
    {
        return;
    }

    if (*array == oldChar)
    {
        *array = newChar;
    }

    replaceCharacter(array + 1, oldChar, newChar);
}

//Ex.8

bool hasRegionWithSum(int square[MAX_ROWS][MAX_COLS], int rows, int columns, int searchedSum) {
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            int currentSum = 0;

            for (int di = -1; di <= 1; ++di) 
            {
                for (int dj = -1; dj <= 1; ++dj)
                {
                    int ni = i + di;
                    int nj = j + dj;

                    if (ni >= 0 && ni < rows && nj >= 0 && nj < columns)
                    {
                        currentSum += square[ni][nj];
                    }
                }
            }

            if (currentSum == searchedSum)
            {
                return true;
            }
        }
    }

    return false;
}

//Ex. 9 

bool canReadText(char chessboard[MAX_ROWS][MAX_COLS], int rows, int columns, int startRow, int startCol, const char* array, int index)
{
    if (startRow < 0 || startRow >= rows || startCol < 0 || startCol >= columns || chessboard[startRow][startCol] != array[index])
    {
        return false;
    }

    if (array[index] == '\0')
    {
        return true;
    }

    char originalValue = chessboard[startRow][startCol];

    chessboard[startRow][startCol] = '*';

    int moves[8][2] = 
    { 
        {-2, -1}, {-2, 1}, {-1, -2}, {-1, 2},
        {1, -2}, {1, 2}, {2, -1}, {2, 1} 
    };

    for (int i = 0; i < 8; ++i) 
    {
        int newRow = startRow + moves[i][0];
        int newCol = startCol + moves[i][1];

        if (canReadText(chessboard, rows, columns, newRow, newCol, array, index + 1))
        {
            chessboard[startRow][startCol] = originalValue;
            return true;
        }
    }

    chessboard[startRow][startCol] = originalValue;
    return false;
}

//Ex. 10
char* deleteFirst(char* pch, const char* findWhat) 
{
    char* occurrenceInArray = strstr(pch, findWhat);

    if (occurrenceInArray == nullptr)
    {
        return pch;
    }

    int pchLength = strlen(pch);
    int findWhatLength = strlen(findWhat);
    int newLength = pchLength - findWhatLength;

    char* newArray = new char[newLength + 1];

    strncpy(newArray, pch, occurrenceInArray - pch);
    newArray[occurrenceInArray - pch] = '\0';

    strcat(newArray, occurrenceInArray + findWhatLength);
    return newArray;
}

//Ex.11
char* deleteLast(char* pch, const char* findWhat) 
{
    char* lastOccurrence = strstr(pch, findWhat);

    if (lastOccurrence == nullptr)
    {
        return pch;
    }

    int pchLength = strlen(pch);
    int findWhatLength = strlen(findWhat);
    int newLength = pchLength - findWhatLength;

    char* newText = new char[newLength + 1];

    strncpy(newText, pch, lastOccurrence - pch);
    newText[lastOccurrence - pch] = '\0';

    strcat(newText, lastOccurrence + findWhatLength);

    return newText;
}

//Ex.12
char* deleteAll(char* pch, const char* findWhat)
{
    char* occurrenceInArray = strstr(pch, findWhat);

    while (occurrenceInArray != nullptr)
    {
        int pchLength = strlen(pch);
        int findWhatLength = strlen(findWhat);
        int newLength = pchLength - findWhatLength;

        char* newText = new char[newLength + 1];

        strncpy(newText, pch, occurrenceInArray - pch);
        newText[occurrenceInArray - pch] = '\0';
        strcat(newText, occurrenceInArray + findWhatLength);

        pch = newText;
        occurrenceInArray = strstr(pch, findWhat);
    }
    return pch;
}

//Ex.13
char* commonPrefix(char* s1, char* s2) 
{
    int minLength = min(strlen(s1), strlen(s2));
    int commonLength = 0;

    for (int index = 0; index < minLength; ++index)
    {
        if (s1[index] == s2[index]) 
        {
            commonLength++;
        }
        else 
        {
            break;
        }
    }

    char* commonString = new char[commonLength + 1];
    strncpy(commonString, s1, commonLength);
    commonString[commonLength] = '\0';
    return commonString;
}

//Ex. 14
int countSameChar(char* s1, char* s2) 
{
    int length = min(strlen(s1), strlen(s2));

    int count = 0;
    for (int i = 0; i < length; ++i)
    {
        if (s1[i] == s2[i])
        {
            count++;
        }
    }

    return count;
}

//Ex. 15

int const MAX_ELEMENTS = 20;

int longestNonDecreasingSubsequence(int arr[], int n) 
{
    int longestLength[MAX_ELEMENTS];
    
    for (int i = 0; i < n; ++i)
    {
        longestLength[i] = 1;
    }
    
    int maxLength = 0;
    int currentLength = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i+1])
        {
            currentLength++;
        }
        else
        {
            currentLength = 0;
        }

        if (maxLength < currentLength)
        {
            maxLength = currentLength;
        }
    }
    

    return maxLength;
}

//Ex. 16

const int MAX_CITIES = 20;

void maximalSubset(int graph[MAX_CITIES][MAX_CITIES], int rows)
{
    bool isInSubset[MAX_CITIES];

    for (int i = 0; i < rows; ++i)
    {
        isInSubset[i] = false;
    }

    for (int i = 0; i < rows; ++i)
    {
        if (!isInSubset[i]) 
        {
            isInSubset[i] = true;

            for (int j = 0; j < rows; ++j)
            {
                if (graph[i][j] == 1) 
                {
                    isInSubset[j] = false;
                }
            }

            cout << "City " << i + 1 << " is in the maximal subset." << endl;
        }
    }
}

int main()
{
    //Ex. 1
    /*
    int rows = 0;
    int cols = 0;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int** matrix = new int* [rows];
    for (int index = 0; index < rows; ++index)
    {
        matrix[index] = new int[cols];
    }

    for (int index = 0; index < rows; ++index) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            cout << "Enter element: ";
            cin >> matrix[index][j];
        }
    }

    int rowIndex;
    cout << "Enter the row index: ";
    cin >> rowIndex;

    findRowMinMax(matrix, rows, cols, rowIndex);

    for (int i = 0; i < rows; ++i) 
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    */

    //Ex.2
    /*
    int const MAX_ELEMENTS = 5;
    int* array = new int[MAX_ELEMENTS];
    fillArray(array, MAX_ELEMENTS);
    printArray(array, MAX_ELEMENTS);
    modifyArray(array, MAX_ELEMENTS);
    printArray(array, MAX_ELEMENTS);
      */

    //Ex.3
    /*
    int const MAX_ELEMENTS = 5;
    int* array = new int[MAX_ELEMENTS];
    fillArray(array, MAX_ELEMENTS);
    printArray(array, MAX_ELEMENTS);
    int orderNumber;
    cout << "Press 0 for ascending order or 1 for descending: ";
    cin >> orderNumber;
    bool isDescending = false;
    if (orderNumber == 1)
    {
        orderArray(array, MAX_ELEMENTS, true);
    }
    else if (orderNumber == 0)
    {
        orderArray(array, MAX_ELEMENTS, false);
    }
    else
    {
        cout << "Invalid input! " << endl;
    }
    printArray(array, MAX_ELEMENTS);
    */

    //Ex.4
    /*
        int const MAX_ELEMENTS = 5;
        char* array = new char[MAX_ELEMENTS];

        fillArray(array, MAX_ELEMENTS);
        char * copyArray = recursiveStringCopy(array, MAX_ELEMENTS);
        printArray(copyArray, MAX_ELEMENTS);
    */

    //Ex.5
    /*
        string num1, num2;

        cout << "Enter the first natural number: ";
        cin >> num1;

        cout << "Set the value of second number: ";
        cin >> num2;

        int result = compareNumbers(num1, num2);

        if (result == 0) 
        {
            cout << "Both numbers are equal." << endl;
        }
        else if (result == - 1) 
        {
            cout << "The first number is smaller." << endl;
        }
        else if (result == 1)
        {
            cout << "The second number is smaller." << endl;
        }
    */

    //Ex. 6
    /*
    cout << "Enter the digits: ";
    int const MAX_LENGTH = 20;
    char numbersArray[MAX_LENGTH];
    cin >> numbersArray;

    unsigned int inverseNumber = convertToNumber(numbersArray);
    char copyInverseNumberArray[20];
    sprintf(copyInverseNumberArray, "%d", inverseNumber);
    unsigned int convertedNumber = convertToNumber(copyInverseNumberArray);
    cout << "Printing the number: " << convertedNumber << endl;
    */
    

    //Ex. 7
    /*
    cout << "Set value for char array: ";
    int const MAX_LENGTH = 20;
    char array[MAX_LENGTH];
    cin >> array;

    char oldChar, newChar;
    cout << "Set the character to be replaced: ";
    cin >> oldChar;
    cout << "Set the new character: ";
    cin >> newChar;

    replaceCharacter(array, oldChar, newChar);
    cout << "Modified char array: " << array << endl;
    */

    //Ex.8

    /*
    int rows = 0;
    int columns = 0;

    cout << "Set the number of rows: ";
    cin >> rows;
    cout << "Set the number of columns: ";
    cin >> columns;

    int square[MAX_ROWS][MAX_COLS];
    cout << "Create matrix: " << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << "Enter the value for grid[" << i << "][" << j << "]: ";
            cin >> square[i][j];
        }
    }

    cout << "Enter searched sum: ";
    int searchedSum = 0;
    cin >> searchedSum;

    if (hasRegionWithSum(square, rows, columns, searchedSum))
    {
        cout << "The grid has a region with the target sum." << endl;
    }
    else 
    {
        cout << "The grid does not have a region with the target sum." << endl;
    }
    */


    //Ex.9
    /*
        int rows = 0, columns = 0;
        cout << "Set rows: ";
        cin >> rows;
        cout << "Set columns: ";
        cin >> columns;

        char chessboard[MAX_ROWS][MAX_COLS];

        cout << "Set matrix" << endl;

        for (int i = 0; i < rows; ++i) 
        {
            for (int j = 0; j < columns; ++j) 
            {
                cout << "Set element: ";
                cin >> chessboard[i][j];
            }
        }

        int startRow, startCol;
        cout << "Set starting row: ";
        cin >> startRow;
        cout << "Set starting column: ";
        cin >> startCol;

        char array[MAX_ROWS * MAX_COLS];
        cout << "Enter array: ";
        cin >> array;

        bool result = canReadText(chessboard, rows, columns, startRow, startCol, array, 0);

        if (result) 
        {
            cout << "The text can be read on the chessboard." << endl;
        }
        else 
        {
            cout << "The text cannot be read on the chessboard." << endl;
        }
    */

    //Ex. 10
    /*
        cout << "Set array: ";
        char original[20];
        cin.getline(original, 20);

        cout << "Set substring to find: ";
        char findWhat[20];
        cin.getline(findWhat, 20);

        char* result = deleteFirst(original, findWhat);
        cout << "Modified array: " << result << endl;
        delete[] result;
      */


    //Ex. 11
    /*
        cout << "Set array: ";
        char array[20];
        cin.getline(array, 20);

        cout << "Set substring to find: ";
        char findSubstring[20];
        cin.getline(findSubstring, 20);

        char* modifiedArray = deleteLast(array, findSubstring);

        cout << "Modified string: " << modifiedArray << endl;

        delete[] modifiedArray;
      */

    //Ex. 12
    // Get user input for the original string and the string to find
    /*
        cout << "Set array: ";
        char array[20];
        cin.getline(array, 20);

        cout << "Set substring to find: ";
        char findSubstring[20];
        cin.getline(findSubstring, 20);

        char* modifiedArray = deleteAll(array, findSubstring);

        cout << "Modified string: " << modifiedArray << endl;

        delete[] modifiedArray;
    */

    //Ex. 13
    // Get user input for the two strings
    /*
        cout << "Set first array: ";
        char s1[20];
        cin.getline(s1, 20);

        cout << "Set second array: ";
        char s2[20];
        cin.getline(s2, 20);

        char* prefix = commonPrefix(s1, s2);
        cout << "Common prefix: " << prefix << endl;
        delete[] prefix;
      */

    //Ex. 14
    /*
        cout << "Set first array: ";
        char s1[20];
        cin.getline(s1, 20);

        cout << "Set second array: ";
        char s2[20];
        cin.getline(s2, 20);

        int equalCount = countSameChar(s1, s2);

        cout << "Count of equal characters: " << equalCount << endl;
    */

    //Ex. 15
   /* 
       int n;
        cout << "Set the length the sequence: ";
        cin >> n;

        int sequence[20];
        cout << "Set sequence value:" << endl;
        for (int i = 0; i < n; ++i) 
        {
            cout << "Enter element " << i + 1 << ": ";
            cin >> sequence[i];
        }

        int result = longestNonDecreasingSubsequence(sequence, n);
        cout << "Length of the non-descreacing subsequence: " << result << endl;
    */

    //Ex. 16
    /*
    int rows;
    cout << "Set the number of cities: ";
    cin >> rows;
    int graph[MAX_CITIES][MAX_CITIES];
    cout << "Set cities matrix:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            cout << "Set road connections - 1 for connection or 0 for not connection: ";
            cin >> graph[i][j];
        }
    }

    maximalSubset(graph, rows);
    */
}

