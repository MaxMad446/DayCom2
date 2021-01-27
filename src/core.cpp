// Auto-generated module | 2026-05-12T21:32:49.699259
#include <iostream>
#include <vector>

int compute_218() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_218() << std::endl;
    return 0;
}
