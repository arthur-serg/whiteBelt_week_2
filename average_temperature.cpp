#include <vector>
#include <iostream>


using namespace std;

void AverageTemperature() {
	int n;
	cout << "enter n: " << endl;
	cin >> n;

	vector<int> values(n);
	cout << "enter your vector" << endl;
	for (int i = 0; i < values.size(); i++) {
		cin >> values[i];
	}

	int sum = 0;
	for (int i = 0; i < values.size(); i++) {
		sum += values[i];
	}
	int meanValue = sum / values.size();
	int counter = 0;
	vector<int> resultVec;
	for (int i = 0; i < values.size(); i++) {
		if (values[i] > meanValue) {
			counter++;
			resultVec.push_back(i);
		}
	}
	cout << counter << endl;
	for (int i = 0; i < resultVec.size(); i++) {
		cout << resultVec[i] << " ";
	}
}


int main() {

	AverageTemperature();

}




