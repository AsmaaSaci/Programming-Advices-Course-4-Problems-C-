#include <iostream>
using namespace std;

enum enPassFail { Fail =1 , Pass =2 };

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Please enter your Mark 1: ";
    cin >> Mark1;
    cout << "Please enter your Mark 2: ";
    cin >> Mark2;
    cout << "Please enter your Mark 3: ";
    cin >> Mark3;
}

float SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return (Mark1 + Mark2 + Mark3) / 3.0;
}

enPassFail ChekAverage(float Result) {
    if (Result >= 50)
        return Pass;
    else 
        return Fail;
}

void PrintResults(enPassFail TypeMark)
{
    if (TypeMark == Pass)
        cout << "\nPass\n";
    else 
        cout << "\nFail\n";
}

int main()
{
    int Mark1, Mark2, Mark3;
    ReadMarks(Mark1, Mark2, Mark3);
    PrintResults(ChekAverage(SumOf3Marks(Mark1, Mark2, Mark3)));
    return 0;
}
