// Auto-generated module | 2026-05-12T20:40:44.893349
#include <iostream>
#include <vector>

int compute_786() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_786() << std::endl;
    return 0;
}
