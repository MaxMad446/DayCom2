// Auto-generated module | 2026-05-11T21:54:59.441325
#include <iostream>
#include <vector>

int compute_731() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_731() << std::endl;
    return 0;
}
