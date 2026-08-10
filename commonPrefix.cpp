#include <string>
#include <vector>

std::string CommonPrefix(const std::vector<std::string>& words) {
    //если пустой вектор
    if (words.empty()) {
        return "";
    }

    //если один элемент
    if (words.size() == 1) {
        return words[0];
    }

    std::string s1 = words[0];
    std::string s2 = words[1];
    size_t pos = 0;

    while (pos < s1.size() && pos < s2.size() && s1[pos] == s2[pos]) {
        ++pos;
    }

    std::string common = s1.substr(0, pos); //субстр - подстрока с нулевого до пос

    for (size_t i = 2; i < words.size(); ++i) {
        const std::string& current_word = words[i];

        pos = 0;
        while (pos < common.size() && pos < current_word.size() &&
            common[pos] == current_word[pos]) {
            ++pos;
        }

        common = common.substr(0, pos);

        if (common.empty()) {
            break;
        }
    }

    return common;
}
