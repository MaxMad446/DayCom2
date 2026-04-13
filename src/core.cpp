// Auto-generated module | 2026-05-12T06:19:00.475317
#include <iostream>
#include <vector>

int compute_783() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_783() << std::endl;
    return 0;
}
