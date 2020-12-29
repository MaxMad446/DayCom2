// Auto-generated module | 2026-05-12T20:03:21.158514
#include <iostream>
#include <vector>

int compute_788() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_788() << std::endl;
    return 0;
}
