// Auto-generated module | 2026-05-12T03:41:35.417570
#include <iostream>
#include <vector>

int compute_292() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_292() << std::endl;
    return 0;
}
