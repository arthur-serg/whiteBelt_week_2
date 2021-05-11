#include <iostream>
#include <string>
#include <vector>

using namespace std;



int Factorial(int x) {
	if (x <= 0) {
		return 1;
	}
	else return x * Factorial(x - 1);
}

bool isPalindrom(string str) {
	for (int i = 0; i < 0.5 * str.length(); i++)
	{
		if (str[i] != str[str.length() - i - 1]) {
			return false;
		}
	}
	return true;
}

void UpdateIfGreater(int& first, int& second) {
	if (first > second) {
		second = first;
	}
}

void MoveStrings(vector<string>& source, vector<string>& destination) {
	for (auto elem : source) {
		destination.push_back(elem);
	}
	source.clear();
}

void Reverse(vector<int>& v) {
	vector<int> tmp;
	for (int i = v.size() - 1; i >= 0; i--) {
		tmp.push_back(v[i]);
	}
	for (auto elem : tmp) {
		cout << elem << " ";
	}
}

void Reverse(const vector<int>& v) {
	vector<int> tmp;
	for (int i = v.size() - 1; i >= 0; i--) {
		tmp.push_back(v[i]);
	}
	for (auto elem : tmp) {
		cout << elem << " ";
	}
}

int main() {
	cout << Factorial(1) << endl;
	cout << Factorial(-2) << endl;
	cout << Factorial(4) << endl;

	cout << isPalindrom("madam") << endl;
	cout << isPalindrom("gentleman") << endl;
	cout << isPalindrom("X") << endl;

	int a = 4;
	int b = 2;
	UpdateIfGreater(a, b);
	cout << b << endl;

	vector<string> source = { "a","b","c" };
	vector<string> destination = { "z" };
	MoveStrings(source, destination);
	for (int i = 0; i < destination.size(); i++)
	{
		cout << destination[i] << " ";
	}
	cout << source.size();

	vector<int> numbers = { 1,2,3,6,4 };
	Reverse(numbers);

	Reverse(numbers);


}
