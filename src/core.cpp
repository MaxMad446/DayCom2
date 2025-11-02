// Auto-generated module | 2026-05-12T04:33:14.801678
#include <iostream>
#include <vector>

int compute_914() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_914() << std::endl;
    return 0;
}
