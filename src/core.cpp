// Auto-generated module | 2026-05-11T19:43:28.230441
#include <iostream>
#include <vector>

int compute_490() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_490() << std::endl;
    return 0;
}
