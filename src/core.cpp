// Auto-generated module | 2026-05-11T21:19:59.124886
#include <iostream>
#include <vector>

int compute_462() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
