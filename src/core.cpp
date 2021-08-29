// Auto-generated module | 2026-05-11T20:28:45.100461
#include <iostream>
#include <vector>

int compute_705() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_705() << std::endl;
    return 0;
}
