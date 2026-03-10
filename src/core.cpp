// Auto-generated module | 2026-05-12T04:50:38.883784
#include <iostream>
#include <vector>

int compute_513() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_513() << std::endl;
    return 0;
}
