// Auto-generated module | 2026-05-12T21:22:44.932422
#include <iostream>
#include <vector>

int compute_319() {
    int base = 440;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_319() << std::endl;
    return 0;
}
