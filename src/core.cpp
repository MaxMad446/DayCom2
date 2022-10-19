// Auto-generated module | 2026-05-11T21:23:24.558846
#include <iostream>
#include <vector>

int compute_494() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
