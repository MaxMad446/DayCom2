// Auto-generated module | 2026-05-11T22:29:37.439811
#include <iostream>
#include <vector>

int compute_629() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_629() << std::endl;
    return 0;
}
