#include <iostream>
#include <vector>
#include <cmath>

int count_price_changes(const std::vector<double>& a, const std::vector<double>& b) {
    int count = 0;
    for (size_t i = 0; i < a.size() - 1; ++i) {
        if (std::abs(a[i + 1] - a[i]) >= b[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    int size;
    std::cout << "Enter the size of the arrays: ";
    std::cin >> size;

    std::vector<double> a(size);
    std::vector<double> b(size);

    for (int i = 0; i < size; ++i) {
        std::cout << "Enter the price: ";
        std::cin >> a[i];
        std::cout << "Enter the threshold: ";
        std::cin >> b[i];
    }

    int result = count_price_changes(a, b);
    std::cout << "Number of instances where price difference meets or exceeds threshold: " << result +1<< std::endl;

    return 0;
}