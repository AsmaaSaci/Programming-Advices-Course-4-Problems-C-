#include <iostream>
#include <string>
using namespace std;

struct strTaskDuration
{
    int NumberOfDays;
    int NumberOfHours;
    int NumberOfMinutes;
    int NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
    strTaskDuration TaskDuration;

    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondsPerHour = 60 * 60;
    const int SecondsPerMinute = 60;

    int Remainder = TotalSeconds;

    TaskDuration.NumberOfDays = Remainder / SecondsPerDay;
    Remainder %= SecondsPerDay;

    TaskDuration.NumberOfHours = Remainder / SecondsPerHour;
    Remainder %= SecondsPerHour;

    TaskDuration.NumberOfMinutes = Remainder / SecondsPerMinute;
    Remainder %= SecondsPerMinute;

    TaskDuration.NumberOfSeconds = Remainder;

    return TaskDuration;
}

void PrintTaskDurationDetails(strTaskDuration TaskDuration)
{
    cout << endl;
    cout << TaskDuration.NumberOfDays << ":"
         << TaskDuration.NumberOfHours << ":"
         << TaskDuration.NumberOfMinutes << ":"
         << TaskDuration.NumberOfSeconds << endl;
}

int main()
{
    int TotalSeconds = ReadPositiveNumber("Please Enter Total Seconds:");
    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));
    return 0;
}
