#include <iostream>
#include <string>
using namespace std;


enum enDayOfWeek { Sun = 1 , Mon = 2 , Tue = 3 , Wed = 4 , Thu = 5 , Fri = 6 , Sat = 7 };

int ReadNumberInRange(string Message , int From , int To)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < From || Number > To);
    return Number;
}

enDayOfWeek ReadDayOfWeek()
{
    return (enDayOfWeek)ReadNumberInRange(
        "Enter day number [1=Sun , 2=Mon , 3=Tue , 4=Wed , 5=Thu , 6=Fri , 7=Sat] :",
        1, 7
    );
}

string GetDayOfWeek(enDayOfWeek Day)
{
    switch (Day)
    {
        case enDayOfWeek::Sun: return "Sunday";
        case enDayOfWeek::Mon: return "Monday";
        case enDayOfWeek::Tue: return "Tuesday";
        case enDayOfWeek::Wed: return "Wednesday";
        case enDayOfWeek::Thu: return "Thursday";
        case enDayOfWeek::Fri: return "Friday";
        case enDayOfWeek::Sat: return "Saturday";
        default: return "Invalid Day";
    }
}

int main()
{
    cout << GetDayOfWeek(ReadDayOfWeek()) << endl;
}
