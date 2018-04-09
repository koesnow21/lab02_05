#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() {
	int num;
	std:: vector<int> NumberList;

	while (cin >> num) {
		NumberList.push_back(num);
	}

	
	cout << endl << endl;

	cout << "ordered array" << endl;

	std::sort(NumberList.rbegin(), NumberList.rend());
	
	for (auto i : NumberList) {
		cout << i << " ";
	}

	cout << endl;
}