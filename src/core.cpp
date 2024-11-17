// Auto-generated module | 2026-05-12T03:47:05.027404
#include <iostream>
#include <vector>

int compute_897() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_897() << std::endl;
    return 0;
}
