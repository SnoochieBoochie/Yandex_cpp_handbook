#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <cctype>

int main() {
    std::string phrase;
    std::string result;

    std::getline(std::cin, phrase);


    std::string lower_phrase = phrase;
    std::transform(lower_phrase.begin(), lower_phrase.end(),
        lower_phrase.begin(), ::tolower);


    std::string soundex = std::string(1, phrase[0]);


    std::unordered_map<char, char> dict = {
        {'b', '1'}, {'f', '1'}, {'p', '1'}, {'v', '1'},
        {'c', '2'}, {'g', '2'}, {'j', '2'}, {'k', '2'},
        {'q', '2'}, {'s', '2'}, {'x', '2'}, {'z', '2'},
        {'d', '3'}, {'t', '3'},
        {'l', '4'},
        {'m', '5'}, {'n', '5'},
        {'r', '6'}
    };


    std::string ignored = "aehiouwy";


    char prev_code = '0';  

    for (size_t i = 1; i < lower_phrase.length() && soundex.length() < 4; ++i) {
        char c = lower_phrase[i];


        auto it = dict.find(c);

        if (it == dict.end()) {
            continue;
        }

        char code = it->second;

 
        if (code != '0' && code != prev_code) {
            soundex += code;
            prev_code = code;
        }
    }


    while (soundex.length() < 4) {
        soundex += '0';
    }

    std::cout << soundex << std::endl;

    return 0;
}
