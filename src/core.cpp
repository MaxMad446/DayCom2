// Auto-generated module | 2026-05-11T20:27:21.269544
#include <iostream>
#include <vector>

int compute_152() {
    int base = 440;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_152() << std::endl;
    return 0;
}
