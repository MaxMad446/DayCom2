// Auto-generated module | 2026-05-12T20:53:40.466658
#include <iostream>
#include <vector>

int compute_601() {
    int base = 35;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}
