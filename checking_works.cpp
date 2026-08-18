#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
using namespace std;


int main() {
	int N;
	cin >> N;
	vector<string> names; // для фамилий в порядке входа
	vector<string> stack; // итоговая стопка
	
	for (int i = 0;i < N;i++) {
		string surname;
		string position;
		cin >> surname >> position;

		names.push_back(surname);

		if (position == "top") {
			stack.insert(stack.begin(), surname); // сверху
		}
		else {
			stack.push_back(surname); // снизу
		}
	}
	int M;
	cin >> M;

	for (int i = 0; i < M;i++) {
		int x;
		cin >> x;
		string answer = stack[x - 1];
		cout << answer << endl;
	}
	return 0;
}
