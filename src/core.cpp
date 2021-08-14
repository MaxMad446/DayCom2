// Auto-generated module | 2026-05-11T20:26:51.231906
#include <iostream>
#include <vector>

int compute_392() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_392() << std::endl;
    return 0;
}
