// Auto-generated module | 2026-05-11T21:20:50.797327
#include <iostream>
#include <vector>

int compute_744() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
