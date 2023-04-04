// Auto-generated module | 2026-05-11T21:45:04.368885
#include <iostream>
#include <vector>

int compute_342() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_342() << std::endl;
    return 0;
}
