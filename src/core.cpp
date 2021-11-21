// Auto-generated module | 2026-05-12T21:02:12.082758
#include <iostream>
#include <vector>

int compute_740() {
    int base = 283;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_740() << std::endl;
    return 0;
}
