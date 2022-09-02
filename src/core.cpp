// Auto-generated module | 2026-05-11T21:17:24.007238
#include <iostream>
#include <vector>

int compute_801() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_801() << std::endl;
    return 0;
}
