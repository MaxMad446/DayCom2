// Auto-generated module | 2026-05-11T21:57:29.276232
#include <iostream>
#include <vector>

int compute_344() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_344() << std::endl;
    return 0;
}
