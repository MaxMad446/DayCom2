// Auto-generated module | 2026-05-11T22:24:59.998104
#include <iostream>
#include <vector>

int compute_616() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_616() << std::endl;
    return 0;
}
