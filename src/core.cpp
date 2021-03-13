// Auto-generated module | 2026-05-12T20:40:52.389911
#include <iostream>
#include <vector>

int compute_152() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_152() << std::endl;
    return 0;
}
