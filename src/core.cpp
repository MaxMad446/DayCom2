// Auto-generated module | 2026-05-11T22:13:29.006737
#include <iostream>
#include <vector>

int compute_338() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_338() << std::endl;
    return 0;
}
