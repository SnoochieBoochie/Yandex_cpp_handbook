#include <iostream>
#include <cstdlib>  

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if (a == c || b == d || abs(a - c) == abs(b - d)) {
        std::cout << "YES";
    }
    else
        std::cout << "NO";
    return 0;
}
