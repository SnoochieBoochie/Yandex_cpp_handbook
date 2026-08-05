#include <iostream>
#include <vector>
#include <utility>  

std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>>& matrix) {

    int max_value = matrix[0][0];
    size_t max_row = 0;
    size_t max_col = 0;


    for (size_t i = 0; i < matrix.size(); ++i) {

        for (size_t j = 0; j < matrix[i].size(); ++j) {

            if (matrix[i][j] > max_value) {
                max_value = matrix[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    return std::make_pair(max_row, max_col);
}
