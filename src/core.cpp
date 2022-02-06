// Auto-generated module | 2026-05-11T20:50:01.101281
#include <iostream>
#include <vector>

int compute_783() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_783() << std::endl;
    return 0;
}
