// Auto-generated module | 2026-05-13T20:58:11.159282
#include <iostream>
#include <vector>

int compute_601() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}
