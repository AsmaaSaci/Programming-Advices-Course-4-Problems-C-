#include <iostream>
#include <string>
using namespace std;


enum enPssFail {Fail=1 , Pass =2};
int ReadMark() {
	int Mark;
	cout << "Please enter your Mark " << endl;
	cin >> Mark;
	return Mark;
};
enPssFail ChekMark(int Mark) {
	if (Mark >= 50)
		return enPssFail::Pass;
	else
		return enPssFail::Fail;

};
void PrintResult(int Mark) {
	if (ChekMark( Mark) == enPssFail::Pass)
		cout << " Pass ";
	else
		cout << " Fail ";
	
};
int main() {
	PrintResult(ReadMark());
};
