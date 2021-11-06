// Auto-generated module | 2026-05-12T21:00:58.314004
#include <iostream>
#include <vector>

int compute_938() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_938() << std::endl;
    return 0;
}
