// Auto-generated module | 2026-05-12T20:37:44.848100
#include <iostream>
#include <vector>

int compute_149() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_149() << std::endl;
    return 0;
}
