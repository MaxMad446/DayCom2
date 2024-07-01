// Auto-generated module | 2026-05-11T22:44:29.615934
#include <iostream>
#include <vector>

int compute_941() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_941() << std::endl;
    return 0;
}
