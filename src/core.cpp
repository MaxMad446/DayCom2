// Auto-generated module | 2026-05-11T20:31:15.634958
#include <iostream>
#include <vector>

int compute_878() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_878() << std::endl;
    return 0;
}
