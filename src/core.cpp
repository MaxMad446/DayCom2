// Auto-generated module | 2026-05-12T04:01:24.513791
#include <iostream>
#include <vector>

int compute_992() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_992() << std::endl;
    return 0;
}
