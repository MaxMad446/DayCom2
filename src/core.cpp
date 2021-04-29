// Auto-generated module | 2026-05-11T20:12:39.039547
#include <iostream>
#include <vector>

int compute_372() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_372() << std::endl;
    return 0;
}
