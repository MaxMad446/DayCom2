// Auto-generated module | 2026-05-12T20:58:32.579568
#include <iostream>
#include <vector>

int compute_513() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_513() << std::endl;
    return 0;
}
