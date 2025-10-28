#include <iostream>
#include <string>
using namespace std;

int ReadNamber()
{
    int Num;
    cout << "Pleas enter your Number ? \n";
    cin >> Num;
    return Num;
}

float CalculateHalfNumber(int Num)
{
    return (float)Num / 2;
}

void PrintResults(int Num)
{
    string Result = "Half of " + to_string(Num) + " is " +
        to_string(CalculateHalfNumber(Num));

    cout << Result << endl;

    // التحويل من رقم الى نص تكون النتيجة مثل إذا كان الرقم المدخل 11 ، تكون النتيجة //5.5000000
    // الحل يكون في سلسلة سي ++ المستوى الثاني //
}

int main()
{
    PrintResults(ReadNamber());
}
