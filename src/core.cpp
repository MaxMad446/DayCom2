// Auto-generated module | 2026-05-12T04:29:39.834423
#include <iostream>
#include <vector>

int compute_705() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_705() << std::endl;
    return 0;
}
