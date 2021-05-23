// Auto-generated module | 2026-05-11T20:15:44.662308
#include <iostream>
#include <vector>

int compute_914() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_914() << std::endl;
    return 0;
}
