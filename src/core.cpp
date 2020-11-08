// Auto-generated module | 2026-05-12T19:58:59.487637
#include <iostream>
#include <vector>

int compute_623() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_623() << std::endl;
    return 0;
}
