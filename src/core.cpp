// Auto-generated module | 2026-05-13T20:27:54.286871
#include <iostream>
#include <vector>

int compute_889() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
