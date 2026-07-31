#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore();
    std::vector<int> line(n);
    std::copy_n(std::istream_iterator<int>(std::cin), n, line.begin());
    std::vector<int> new_line(n);

    for (int i = 0; i < n; i++) {
        int k = line[i] - 1;  
        new_line[k] = i + 1;      
    }

    for (int i = 0; i < n; i++) {
        std::cout << new_line[i] << " ";
    }

    return 0;
}
