// Auto-generated module | 2026-05-13T20:47:05.801331
#include <iostream>
#include <vector>

int compute_845() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
