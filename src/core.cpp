// Auto-generated module | 2026-05-11T21:31:22.245987
#include <iostream>
#include <vector>

int compute_425() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_425() << std::endl;
    return 0;
}
