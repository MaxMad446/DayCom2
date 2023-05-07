// Auto-generated module | 2026-05-11T21:49:20.216091
#include <iostream>
#include <vector>

int compute_529() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_529() << std::endl;
    return 0;
}
