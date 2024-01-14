// Auto-generated module | 2026-05-14T18:18:09.490150
#include <iostream>
#include <vector>

int compute_422() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_422() << std::endl;
    return 0;
}
