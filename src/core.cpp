// Auto-generated module | 2026-05-11T21:28:44.354692
#include <iostream>
#include <vector>

int compute_180() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_180() << std::endl;
    return 0;
}
