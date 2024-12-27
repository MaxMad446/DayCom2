// Auto-generated module | 2026-05-12T03:52:25.725954
#include <iostream>
#include <vector>

int compute_606() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_606() << std::endl;
    return 0;
}
