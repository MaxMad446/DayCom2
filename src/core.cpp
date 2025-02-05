// Auto-generated module | 2026-05-12T21:11:05.781614
#include <iostream>
#include <vector>

int compute_920() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_920() << std::endl;
    return 0;
}
