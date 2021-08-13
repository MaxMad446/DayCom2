// Auto-generated module | 2026-05-12T20:53:33.328990
#include <iostream>
#include <vector>

int compute_885() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_885() << std::endl;
    return 0;
}
