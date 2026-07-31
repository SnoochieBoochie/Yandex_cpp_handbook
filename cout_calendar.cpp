#include <iostream>
#include <iomanip>

int main() {
    int n, k;
    std::cin >> n >> k;

    for (int i = 1; i < n; i++) {
        std::cout << "   "; 
    }

    for (int d = 1; d <= k; d++) {
        std::cout << std::setw(2) << d;

        if ((d + n - 1) % 7 == 0) {
            std::cout << std::endl;
        }
        else if (d < k) {
            std::cout << " ";  
        }
    }

    if ((k + n - 1) % 7 != 0) {
        std::cout << std::endl;
    }

    return 0;
}
