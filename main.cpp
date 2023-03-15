#include <iostream>
#include <vector>

std::vector<bool> increasing_rows(std::vector<std::vector<int>> matrix) {
    int n_rows = matrix.size();
    std::vector<bool> result(n_rows, true);
    for (int i = 0; i < n_rows; i++) {
        bool is_increasing = true;
        for (int j = 1; j < matrix[i].size(); j++) {
            if (matrix[i][j] <= matrix[i][j-1]) {
                is_increasing = false;
                break;
            }
        }
        result[i] = is_increasing;
    }
    return result;
}

int main() {
    std::vector<std::vector<int>> matrix = {{1, 2, 3}, {4, 2, 1}, {7, 8, 9}};
    std::vector<bool> result = increasing_rows(matrix);
    for (bool value : result) {
        std::cout << std::boolalpha << value << " ";
    }
    std::cout << std::endl;
    return 0;
}