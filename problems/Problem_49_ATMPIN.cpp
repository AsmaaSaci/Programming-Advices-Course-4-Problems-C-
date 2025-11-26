#include <iostream>
#include <string>
using namespace std;

string ReadPinCode()
{
    string Pincode;
    cout << "Please Enter PIN Code: ";
    cin >> Pincode;
    return Pincode;
}

bool Login()
{
    string PinCode;
    const string CorrectPin = "1234";

    do
    {
        PinCode = ReadPinCode();
        if (PinCode == CorrectPin)
        {
            return true;
        }
        else
        {
            cout << "\nWrong PIN. Try again.\n";
        }
    } while (true);
}

int main()
{
    if (Login())
    {
        cout << "\nYour account balance is " << 7500 << "\n";
    }
}
