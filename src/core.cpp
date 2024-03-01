// Auto-generated module | 2026-05-11T22:28:41.255347
#include <iostream>
#include <vector>

int compute_222() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_222() << std::endl;
    return 0;
}
