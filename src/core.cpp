// Auto-generated module | 2026-05-11T20:21:07.316248
#include <iostream>
#include <vector>

int compute_166() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_166() << std::endl;
    return 0;
}
