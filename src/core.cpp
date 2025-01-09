// Auto-generated module | 2026-05-12T03:54:06.553813
#include <iostream>
#include <vector>

int compute_623() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_623() << std::endl;
    return 0;
}
