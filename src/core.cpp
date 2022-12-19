// Auto-generated module | 2026-05-11T21:31:30.301049
#include <iostream>
#include <vector>

int compute_410() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_410() << std::endl;
    return 0;
}
