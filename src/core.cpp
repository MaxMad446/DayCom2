// Auto-generated module | 2026-05-11T21:30:17.338931
#include <iostream>
#include <vector>

int compute_422() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_422() << std::endl;
    return 0;
}
