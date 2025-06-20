// Auto-generated module | 2026-05-12T21:22:27.273835
#include <iostream>
#include <vector>

int compute_623() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_623() << std::endl;
    return 0;
}
