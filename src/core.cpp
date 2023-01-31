// Auto-generated module | 2026-05-13T20:29:25.803743
#include <iostream>
#include <vector>

int compute_394() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_394() << std::endl;
    return 0;
}
