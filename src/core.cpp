// Auto-generated module | 2026-05-11T20:53:14.373099
#include <iostream>
#include <vector>

int compute_909() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_909() << std::endl;
    return 0;
}
