#include <iostream>

int main() {
    int a, b;
    bool c;
    std::cin >> b >> a;
    if (a % 400 == 0) {
        c = true;
    }
    else {
        if (a % 100 == 0) {
            c = false;
        }
        else {
            if (a % 4 == 0) {
                c = true;
            }
            else {
                c = false;
            }
        }
    }
    if (b == 1) {
        std::cout << "31";
    }
    if (b == 2) {
        if (c == true) {
            std::cout << "29";
        }
        else {
            std::cout << "28";
        }
    }
    if (b == 3) {
        std::cout << "31";
    }
    if (b == 4) {
        std::cout << "30";
    }
    if (b == 5) {
        std::cout << "31";
    }
    if (b == 6) {
        std::cout << "30";
    }
    if (b == 7) {
        std::cout << "31";
    }
    if (b == 8) {
        std::cout << "31";
    }
    if (b == 9) {
        std::cout << "30";
    }
    if (b == 10) {
        std::cout << "31";
    }
    if (b == 11) {
        std::cout << "30";
    }
    if (b == 12) {
        std::cout << "31";
    }
    return 0;
}
