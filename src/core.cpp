// Auto-generated module | 2026-05-11T21:58:25.229767
#include <iostream>
#include <vector>

int compute_486() {
    int base = 88;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_486() << std::endl;
    return 0;
}
