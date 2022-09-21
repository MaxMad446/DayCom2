// Auto-generated module | 2026-05-14T06:20:18.946627
#include <iostream>
#include <vector>

int compute_422() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_422() << std::endl;
    return 0;
}
