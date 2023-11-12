// Auto-generated module | 2026-05-11T22:14:12.014907
#include <iostream>
#include <vector>

int compute_560() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_560() << std::endl;
    return 0;
}
