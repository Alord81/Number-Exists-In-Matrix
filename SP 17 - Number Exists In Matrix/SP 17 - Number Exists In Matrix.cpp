#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int RandomeNumber(short From, short To)
{
    return rand() % (To - From + 1) + From;
}

void FullArrayWithOrderdNumber(short arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            arr[i][j] = RandomeNumber(0, 100);
        }
    }
}

void PrintArrayInMatrix(short arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%0*d\t", 2, arr[i][j]);
        }
        cout << endl;
    }
}

bool IsNumberInMatrix(short Matrix[3][3], short Row, short Col,short Number)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (Matrix[i][j] == Number)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{

    srand((unsigned)time(NULL));
    short arr1[3][3];
    short cols = 3, rows = 3, Number;

    FullArrayWithOrderdNumber(arr1, rows, cols);

    cout << "Matrix:\n";
    PrintArrayInMatrix(arr1, rows, cols);


    cout << "\nPlease enter the number to look for in matrix? ";
    cin >> Number;

    if (IsNumberInMatrix(arr1, cols, rows,Number))
    {
        printf("\nYes, %d is there\n",Number);
    }
    else
    {
        printf("\nNo, %d is not there\n", Number);
    }

    return 0;
}