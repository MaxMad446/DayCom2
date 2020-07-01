// Auto-generated module | 2026-05-11T19:33:25.288279
#include <iostream>
#include <vector>

int compute_176() {
    int base = 283;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_176() << std::endl;
    return 0;
}
