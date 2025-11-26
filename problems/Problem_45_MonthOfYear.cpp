#include <iostream>
#include <string>
using namespace std;

enum enMonthOfYears {
    Jan = 1, Feb, Mar, Apr, May, Jun,
    Jul, Aug, Sep, Oct, Nov, Dec
};

int ReadNumberInRange(string Message, int From, int To)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < From || Number > To);
    return Number;
}

enMonthOfYears ReadMonthOfYears()
{
    return (enMonthOfYears)ReadNumberInRange(
        "Please enter Month number [1 to 12]?", 1, 12
    );
}

string GetMonthOfYears(enMonthOfYears Month)
{
    switch (Month)
    {
        case enMonthOfYears::Jan: return "January";
        case enMonthOfYears::Feb: return "February";
        case enMonthOfYears::Mar: return "March";
        case enMonthOfYears::Apr: return "April";
        case enMonthOfYears::May: return "May";
        case enMonthOfYears::Jun: return "June";
        case enMonthOfYears::Jul: return "July";
        case enMonthOfYears::Aug: return "August";
        case enMonthOfYears::Sep: return "September";
        case enMonthOfYears::Oct: return "October";
        case enMonthOfYears::Nov: return "November";
        case enMonthOfYears::Dec: return "December";
        default: return "Not a valid Month";
    }
}

int main()
{
    cout << GetMonthOfYears(ReadMonthOfYears()) << endl;
}
