// Auto-generated module | 2026-05-11T21:54:32.621552
#include <iostream>
#include <vector>

int compute_666() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_666() << std::endl;
    return 0;
}
