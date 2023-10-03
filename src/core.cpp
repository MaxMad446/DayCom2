// Auto-generated module | 2026-05-11T22:09:00.682647
#include <iostream>
#include <vector>

int compute_783() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_783() << std::endl;
    return 0;
}
