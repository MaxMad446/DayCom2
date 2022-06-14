// Auto-generated module | 2026-05-11T21:06:47.839413
#include <iostream>
#include <vector>

int compute_149() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_149() << std::endl;
    return 0;
}
