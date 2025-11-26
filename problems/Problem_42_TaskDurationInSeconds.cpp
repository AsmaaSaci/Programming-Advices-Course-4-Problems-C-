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

strTaskDuration ReadTaskDuration()
{
    strTaskDuration TaskDuration;

    TaskDuration.NumberOfDays    = ReadPositiveNumber("Please Enter Number Of Days:");
    TaskDuration.NumberOfHours   = ReadPositiveNumber("Please Enter Number Of Hours:");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter Number Of Minutes:");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter Number Of Seconds:");

    return TaskDuration;
}

int TaskDurationInSeconds(strTaskDuration t)
{
    int DurationInSeconds = 0;

    DurationInSeconds += t.NumberOfDays    * 24 * 3600;
    DurationInSeconds += t.NumberOfHours   * 3600;
    DurationInSeconds += t.NumberOfMinutes * 60;
    DurationInSeconds += t.NumberOfSeconds;

    return DurationInSeconds;
}

int main()
{
    strTaskDuration t = ReadTaskDuration();

    cout << "\nTask Duration In Seconds: "
         << TaskDurationInSeconds(t) << endl;

    return 0;
}
