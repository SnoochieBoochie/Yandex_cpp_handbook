#include <iostream>
#include <string>

int main() {
    std::string phrase;
    std::getline(std::cin, phrase);
    bool has_upper = false;  
    bool has_lower = false;  
    bool has_digit = false;  
    bool has_other = false;  
    int len = phrase.size();
    if (len >= 8 && len <= 14) {
        for (size_t i = 0; i < phrase.length(); i++) {
            char c = phrase[i];

        
            if (c < 33 || c > 126) {
                std::cout << "NO";
                return 0;
            }


            if (c >= 'A' && c <= 'Z') {
                has_upper = true;
            }
            else if (c >= 'a' && c <= 'z') {
                has_lower = true;
            }
            else if (c >= '0' && c <= '9') {
                has_digit = true;
            }
            else {
                has_other = true;
            }
        }
        int class_count = has_upper + has_lower + has_digit + has_other;
        if (class_count >= 3) {
            std::cout << "YES";
        }
        else {
            std::cout << "NO";
        }

    }
    else {
        std::cout << "NO";
    }

    return 0;
}
