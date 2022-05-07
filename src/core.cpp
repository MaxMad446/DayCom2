// Auto-generated module | 2026-05-11T21:01:41.244126
#include <iostream>
#include <vector>

int compute_313() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
