// Auto-generated module | 2026-05-14T06:11:24.844387
#include <iostream>
#include <vector>

int compute_422() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_422() << std::endl;
    return 0;
}
