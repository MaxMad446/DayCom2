// Auto-generated module | 2026-05-11T22:37:55.500068
#include <iostream>
#include <vector>

int compute_188() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_188() << std::endl;
    return 0;
}
