// Auto-generated module | 2026-05-12T03:55:23.270905
#include <iostream>
#include <vector>

int compute_651() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
