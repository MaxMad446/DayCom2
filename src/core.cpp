// Auto-generated module | 2026-05-12T04:43:05.294989
#include <iostream>
#include <vector>

int compute_125() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
