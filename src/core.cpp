// Auto-generated module | 2026-05-11T21:11:20.236141
#include <iostream>
#include <vector>

int compute_319() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_319() << std::endl;
    return 0;
}
