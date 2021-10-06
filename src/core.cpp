// Auto-generated module | 2026-05-11T20:33:31.251416
#include <iostream>
#include <vector>

int compute_101() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_101() << std::endl;
    return 0;
}
