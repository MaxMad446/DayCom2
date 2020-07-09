// Auto-generated module | 2026-05-11T19:34:18.359541
#include <iostream>
#include <vector>

int compute_180() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_180() << std::endl;
    return 0;
}
