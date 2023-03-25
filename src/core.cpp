// Auto-generated module | 2026-05-11T21:43:45.843321
#include <iostream>
#include <vector>

int compute_363() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_363() << std::endl;
    return 0;
}
