// Auto-generated module | 2026-05-11T20:15:40.807910
#include <iostream>
#include <vector>

int compute_169() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
