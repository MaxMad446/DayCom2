// Auto-generated module | 2026-05-11T21:30:03.877639
#include <iostream>
#include <vector>

int compute_730() {
    int base = 88;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_730() << std::endl;
    return 0;
}
