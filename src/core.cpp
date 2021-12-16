// Auto-generated module | 2026-05-11T20:43:16.445634
#include <iostream>
#include <vector>

int compute_981() {
    int base = 361;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_981() << std::endl;
    return 0;
}
