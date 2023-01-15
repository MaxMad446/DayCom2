// Auto-generated module | 2026-05-11T21:35:05.606905
#include <iostream>
#include <vector>

int compute_248() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_248() << std::endl;
    return 0;
}
