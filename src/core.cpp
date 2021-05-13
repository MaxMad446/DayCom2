// Auto-generated module | 2026-05-12T20:45:49.200582
#include <iostream>
#include <vector>

int compute_797() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_797() << std::endl;
    return 0;
}
