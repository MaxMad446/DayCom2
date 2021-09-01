// Auto-generated module | 2026-05-11T20:29:12.499263
#include <iostream>
#include <vector>

int compute_125() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
