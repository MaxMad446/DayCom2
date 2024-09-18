// Auto-generated module | 2026-05-12T03:39:20.600495
#include <iostream>
#include <vector>

int compute_153() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_153() << std::endl;
    return 0;
}
