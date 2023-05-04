// Auto-generated module | 2026-05-11T21:48:55.847123
#include <iostream>
#include <vector>

int compute_511() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_511() << std::endl;
    return 0;
}
