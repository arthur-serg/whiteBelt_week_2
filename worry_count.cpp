#include <vector>
#include <iostream>


using namespace std;


int main() {

	vector<char> queue;
	string cmd = "";
	int k = 0;
	int q = 0;
	cin >> q;

	while (q) {
		cin >> cmd;
		if (cmd == "WORRY_COUNT") {
			cout << count(begin(queue), end(queue), 'W') << endl;
		}

		else {

			cin >> k;
			if (cmd == "COME") {
				queue.resize(queue.size() + k, 'Q');
			}
			else if (cmd == "WORRY") {
				queue[k] = 'W';
			}
			else if (cmd == "QUIET") {
				queue[k] = 'Q';
			}

		}
		q--;
	}
	
}




