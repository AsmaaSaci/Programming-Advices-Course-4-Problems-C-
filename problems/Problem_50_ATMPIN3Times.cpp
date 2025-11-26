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
    int AttemptsLeft = 3;

    do
    {
        PinCode = ReadPinCode();
        if (PinCode == CorrectPin)
        {
            return true;
        }
        else
        {
            AttemptsLeft--;
            if (AttemptsLeft > 0)
                cout << "\nWrong PIN, you have " << AttemptsLeft << " more tries.\n";
        }
    } while (AttemptsLeft > 0);

    return false;
}

int main()
{
    if (Login())
    {
        cout << "\nYour account balance is " << 7500 << "\n";
    }
    else
    {
        cout << "\nYour card is blocked. Call the bank for help.\n";
    }
}
