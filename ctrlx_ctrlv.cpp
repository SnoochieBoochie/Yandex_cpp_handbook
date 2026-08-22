#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {

    list<string> file; //неправленный текст
    string buffer; //буфер для копирования
    list<string> commands; //сюда пишутся команды
    string line;
    string line1;

    while (std::getline(std::cin, line) && !line.empty()) { //записал лист текста
        file.push_back(line);
    }

    while (std::getline(std::cin, line1) && !line1.empty()) { //записал лист команд
        commands.push_back(line1);
    }

    auto iter = file.begin();

    for (const auto& line1 : commands) {

        if (line1 == "Down") {
            if (iter != file.end()) {
                ++iter;
            }
        }
        if (line1 == "Up") {
            if (iter != file.begin()) {
                --iter;
            }
        }
        if (line1 == "Ctrl+X") {
            if (iter != file.end()) {    
                buffer = *iter;
                iter = file.erase(iter);
            }
        }
        if (line1 == "Ctrl+V") {
            if (!buffer.empty()) {
                iter = file.insert(iter, buffer);
                ++iter;
            }
        }
    }

    for (const auto& line : file) {
        cout << line << endl;
    }

    return 0;
}
