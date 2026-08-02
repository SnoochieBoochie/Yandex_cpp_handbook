#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>




int main() {
    int m, n, k;
    std::cin >> m >> n >> k;

    std::vector<int> xs;  
    std::vector<int> ys;  

    for (int i = 0; i < k; ++i) {
        int x, y;
        std::cin >> x >> y;
        xs.push_back(x-1);
        ys.push_back(y-1);
    }

    std::vector<std::vector<std::string>> matrix(m, std::vector<std::string>(n, "0")); // матрица, пока пустая

    for (size_t i = 0; i < xs.size(); ++i) {
        if (xs[i] < m && ys[i] < n) {
            matrix[xs[i]][ys[i]] = "*";
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == "*") {
                continue;  
            }

            int count = 0;


            for (int di = -1; di <= 1; ++di) {
                for (int dj = -1; dj <= 1; ++dj) {
                    if (di == 0 && dj == 0) {
                        continue;  
                    }

                    int ni = i + di;  
                    int nj = j + dj;  

                    
                    if (ni >= 0 && ni < m && nj >= 0 && nj < n) {
                        if (matrix[ni][nj] == "*") {
                            count++;
                        }
                    }
                }
            }

            matrix[i][j] = std::to_string(count);
        }
    }


    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
    
}
