// Auto-generated module | 2026-05-12T21:24:05.654610
#include <iostream>
#include <vector>

int compute_256() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
