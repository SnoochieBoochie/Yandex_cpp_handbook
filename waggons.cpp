#include <algorithm>
#include <string>
#include <deque>
#include <iostream>
using namespace std;

void MakeTrain() {
    deque<int> train;
    string command;

    while (cin >> command) {  
        if (command == "+left") {
            int W;
            cin >> W;         //число вагонoB
            train.push_front(W);
        }
        else if (command == "+right") {
            int W;
            cin >> W;
            train.push_back(W);
        }
        else if (command == "-left") {
            int N;
            cin >> N;         //сколько убрать
            if (N >= (int)train.size()) {
                train.clear();
            }
            else {
                train.erase(train.begin(), train.begin() + N);
            }
        }
        else if (command == "-right") {
            int N;
            cin >> N;
            if (N >= (int)train.size()) {
                train.clear();
            }
            else {
                train.erase(train.end() - N, train.end());
            }
        }
    }

    if (!train.empty()) {
        for (size_t i = 0; i < train.size(); ++i) {
            if (i > 0) cout << ' ';  
            cout << train[i];
        }
    }
    cout << '\n';  

}

