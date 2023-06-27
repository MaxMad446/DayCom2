// Auto-generated module | 2026-05-11T21:56:08.720064
#include <iostream>
#include <vector>

int compute_368() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_368() << std::endl;
    return 0;
}
