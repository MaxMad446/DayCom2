// Auto-generated module | 2026-05-11T19:41:11.765051
#include <iostream>
#include <vector>

int compute_298() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_298() << std::endl;
    return 0;
}
