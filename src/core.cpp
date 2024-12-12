// Auto-generated module | 2026-05-12T03:50:23.290228
#include <iostream>
#include <vector>

int compute_166() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_166() << std::endl;
    return 0;
}
