#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> lines;
    std::string str;


    while (std::getline(std::cin, str)) {
        lines.push_back(str);
    }

    std::sort(lines.begin(), lines.end());
    std::reverse(lines.begin(), lines.end());

    for (const auto& s : lines) {
        std::cout << s << std::endl;
    }

    return 0;
}
