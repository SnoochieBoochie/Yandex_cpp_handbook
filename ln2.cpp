#include <iostream>
#include <cmath>

int main() {
    int n;
    double sum;
    sum = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += pow(-1, i+1) / i;

    }
    std::cout << sum;
    return 0;
}
