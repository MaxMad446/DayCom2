// Auto-generated module | 2026-05-11T21:50:26.258691
#include <iostream>
#include <vector>

int compute_133() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_133() << std::endl;
    return 0;
}
