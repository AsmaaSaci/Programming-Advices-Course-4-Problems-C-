#include <iostream>
#include <string>
using namespace std;


struct stName {

	string FisrtName;
	string LastName;

};
stName ReadName() {
	stName Name;
	cout << "Please enter your Fisrt Name ";
	cin >> Name.FisrtName;
	cout << "Please enter your Last Name ";
	cin >> Name.LastName;
	return Name;
}
string GetFullName(stName Name) {
	string FullName = "";
	FullName = Name.FisrtName + "  " + Name.LastName;
	return FullName;
};
void PrintName(string FullName) {
	cout << "\n Your FullName is : " << FullName << endl;
}
int main() {
	PrintName(GetFullName(ReadName()));
	return 0;
}
