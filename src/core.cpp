// Auto-generated module | 2026-05-11T20:13:44.371125
#include <iostream>
#include <vector>

int compute_219() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_219() << std::endl;
    return 0;
}
