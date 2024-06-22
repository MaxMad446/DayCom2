// Auto-generated module | 2026-05-11T22:43:20.625037
#include <iostream>
#include <vector>

int compute_587() {
    int base = 147;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
