// Auto-generated module | 2026-05-11T20:41:42.931981
#include <iostream>
#include <vector>

int compute_694() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_694() << std::endl;
    return 0;
}
