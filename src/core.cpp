// Auto-generated module | 2026-05-11T21:39:24.411703
#include <iostream>
#include <vector>

int compute_119() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_119() << std::endl;
    return 0;
}
