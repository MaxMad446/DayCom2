// Auto-generated module | 2026-05-11T21:47:18.257857
#include <iostream>
#include <vector>

int compute_313() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
