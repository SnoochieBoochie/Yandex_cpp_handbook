#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

bool palindrome(std::string& str) {
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
    int begin = 0;
    int end = str.size() - 1;
    while (begin < end) {
        if (str[begin] != str[end]) {
            return false;
        }
        begin++;
        end--;
    }
    return true;
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    if (palindrome(str)) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
