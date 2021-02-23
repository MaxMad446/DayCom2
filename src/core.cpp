// Auto-generated module | 2026-05-11T20:04:37.535731
#include <iostream>
#include <vector>

int compute_482() {
    int base = 146;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_482() << std::endl;
    return 0;
}
