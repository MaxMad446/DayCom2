// Auto-generated module | 2026-05-11T21:30:02.130310
#include <iostream>
#include <vector>

int compute_645() {
    int base = 456;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_645() << std::endl;
    return 0;
}
