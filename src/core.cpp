// Auto-generated module | 2026-05-11T21:48:33.479775
#include <iostream>
#include <vector>

int compute_117() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_117() << std::endl;
    return 0;
}
