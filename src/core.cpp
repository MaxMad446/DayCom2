// Auto-generated module | 2026-05-11T21:17:41.092888
#include <iostream>
#include <vector>

int compute_113() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_113() << std::endl;
    return 0;
}
