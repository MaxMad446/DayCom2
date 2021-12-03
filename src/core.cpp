// Auto-generated module | 2026-05-12T21:03:22.421651
#include <iostream>
#include <vector>

int compute_760() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_760() << std::endl;
    return 0;
}
