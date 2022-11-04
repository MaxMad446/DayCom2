// Auto-generated module | 2026-05-11T21:25:32.457943
#include <iostream>
#include <vector>

int compute_513() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_513() << std::endl;
    return 0;
}
