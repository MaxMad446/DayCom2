// Auto-generated module | 2026-05-13T20:48:36.514847
#include <iostream>
#include <vector>

int compute_179() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_179() << std::endl;
    return 0;
}
