// Auto-generated module | 2026-05-12T19:59:45.731630
#include <iostream>
#include <vector>

int compute_954() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_954() << std::endl;
    return 0;
}
