// Auto-generated module | 2026-05-11T21:28:20.086100
#include <iostream>
#include <vector>

int compute_620() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_620() << std::endl;
    return 0;
}
