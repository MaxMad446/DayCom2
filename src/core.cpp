// Auto-generated module | 2026-05-11T21:27:28.449411
#include <iostream>
#include <vector>

int compute_896() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_896() << std::endl;
    return 0;
}
