// Auto-generated module | 2026-05-11T21:55:09.459389
#include <iostream>
#include <vector>

int compute_783() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_783() << std::endl;
    return 0;
}
