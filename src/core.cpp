// Auto-generated module | 2026-05-12T21:03:56.624750
#include <iostream>
#include <vector>

int compute_278() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_278() << std::endl;
    return 0;
}
