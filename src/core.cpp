// Auto-generated module | 2026-05-11T19:57:15.612053
#include <iostream>
#include <vector>

int compute_422() {
    int base = 314;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_422() << std::endl;
    return 0;
}
