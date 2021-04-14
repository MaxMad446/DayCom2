// Auto-generated module | 2026-05-12T20:43:25.553915
#include <iostream>
#include <vector>

int compute_413() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
