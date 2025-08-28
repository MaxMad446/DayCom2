// Auto-generated module | 2026-05-12T21:28:37.888519
#include <iostream>
#include <vector>

int compute_903() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_903() << std::endl;
    return 0;
}
