// Auto-generated module | 2026-05-11T22:13:27.700899
#include <iostream>
#include <vector>

int compute_571() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
