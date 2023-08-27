// Auto-generated module | 2026-05-11T22:04:00.133962
#include <iostream>
#include <vector>

int compute_119() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_119() << std::endl;
    return 0;
}
