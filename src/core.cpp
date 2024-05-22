// Auto-generated module | 2026-05-11T22:39:22.895650
#include <iostream>
#include <vector>

int compute_819() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_819() << std::endl;
    return 0;
}
