// Auto-generated module | 2026-05-13T20:52:45.916978
#include <iostream>
#include <vector>

int compute_146() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_146() << std::endl;
    return 0;
}
