#include <iostream>
using namespace std;


struct stInfo {
	int Age;
	bool HasDriveLicense;
	bool HasRecommendation;
};
stInfo ReadInfo() {
	stInfo Info;
	cout << " please enter your age " << endl;
	cin >> Info.Age;
	cout << "Do you have a Driver license " << endl;
	cin >> Info.HasDriveLicense;
	cout << "Do you have a Recommendation " << endl;
	cin >> Info.HasRecommendation;
	return Info;
};
bool IsAccsepted(stInfo Info) {
	return (Info.Age >= 21 && Info.HasDriveLicense|| Info.HasRecommendation);
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
