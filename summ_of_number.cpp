#include <iostream>

int main() {
    unsigned int n, k;
    k = 0;
    std::cin >> n;
    while (n > 0) {
        k =k + n % 10;
        n /= 10;
    }
    std::cout << k;
    return 0;
}
