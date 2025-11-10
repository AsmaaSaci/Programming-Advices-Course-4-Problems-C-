اكتب برنامج لحساب مساحة محيط الدائرة ثم اطبع الناتج
#include <iostream>
#include <string>
using namespace std;
float ReadCircumference()
{
	float L;
	cout << "Pleas enter Circumference L ? \n";
	cin >> L;
	return L;
}
float CircleAreaByCircumference(float L)
{
	const float PI = 3.141592653589793238;
	float Area = pow(L, 2) / (PI * 4);
	return Area;
}
void PrintResults(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}
int main()
{
	PrintResults(CircleAreaByCircumference(ReadCircumference()));
}
