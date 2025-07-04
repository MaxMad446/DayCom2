// Auto-generated module | 2026-05-12T04:17:02.155363
#include <iostream>
#include <vector>

int compute_313() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
