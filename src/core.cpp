// Auto-generated module | 2026-05-13T20:47:59.569999
#include <iostream>
#include <vector>

int compute_216() {
    int base = 100;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_216() << std::endl;
    return 0;
}
