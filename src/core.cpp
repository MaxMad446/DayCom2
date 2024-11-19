// Auto-generated module | 2026-05-12T03:47:17.407482
#include <iostream>
#include <vector>

int compute_947() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_947() << std::endl;
    return 0;
}
