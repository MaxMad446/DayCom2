// Auto-generated module | 2026-05-11T20:05:45.691668
#include <iostream>
#include <vector>

int compute_511() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_511() << std::endl;
    return 0;
}
