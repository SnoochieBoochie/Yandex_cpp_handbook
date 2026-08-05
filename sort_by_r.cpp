#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> xs;
    std::vector<int> ys;
    std::vector<double> r(n);
    for (int i = 0; i < n; ++i) {
        int x, y;
        std::cin >> x >> y;
        xs.push_back(x);
        ys.push_back(y);
    }

    for (size_t i = 0; i < xs.size(); i++) {
        r[i] = sqrt(pow(xs[i], 2) + pow(ys[i], 2));
    }

    //std::sort(r.begin(), r.end());
    std::vector<int> indices(n);
    for (int i = 0; i < n; i++) {
        indices[i] = i;
    }
    std::sort(indices.begin(), indices.end(), [&](int a, int b) {
        return r[a] < r[b];  
        });

    std::vector<int> sorted_xs, sorted_ys;
    for (int idx : indices) {
        sorted_xs.push_back(xs[idx]);
        sorted_ys.push_back(ys[idx]);
    }

    for (int i = 0; i < n; i++) {
        std::cout << sorted_xs[i] << " " << sorted_ys[i] << std::endl;
    }

    return 0;
}
