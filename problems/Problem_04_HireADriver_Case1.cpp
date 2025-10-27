#include <iostream>
using namespace std;


struct stInfo {
	int Age;
	bool HasDriveLicense;
};
stInfo ReadInfo() {
	stInfo Info;
	cout << " please enter your age " << endl;
	cin >> Info.Age;
	cout << "Do you have a Driver license " << endl;
	cin >> Info.HasDriveLicense;

	return Info;
};
bool IsAccsepted(stInfo Info) {
	return (Info.Age >= 21 && Info.HasDriveLicense);
};
void PrintResult(stInfo Info) {
	if (IsAccsepted(Info))
		cout << "\n Hired \n";
	else
		cout << "\n Rejected \n";
};
int main() {
	PrintResult(ReadInfo());
	return 0;
};
