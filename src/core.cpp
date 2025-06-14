// Auto-generated module | 2026-05-12T04:14:22.467169
#include <iostream>
#include <vector>

int compute_136() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_136() << std::endl;
    return 0;
}
