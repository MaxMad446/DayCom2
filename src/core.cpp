// Auto-generated module | 2026-05-12T03:47:55.052603
#include <iostream>
#include <vector>

int compute_368() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_368() << std::endl;
    return 0;
}
