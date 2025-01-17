// Auto-generated module | 2026-05-12T21:09:29.258720
#include <iostream>
#include <vector>

int compute_606() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_606() << std::endl;
    return 0;
}
