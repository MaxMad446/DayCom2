// Auto-generated module | 2026-05-11T20:37:10.305338
#include <iostream>
#include <vector>

int compute_243() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_243() << std::endl;
    return 0;
}
