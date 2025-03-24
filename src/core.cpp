// Auto-generated module | 2026-05-12T21:14:56.777891
#include <iostream>
#include <vector>

int compute_470() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
