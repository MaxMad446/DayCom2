// Auto-generated module | 2026-05-11T22:42:16.317534
#include <iostream>
#include <vector>

int compute_913() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_913() << std::endl;
    return 0;
}
