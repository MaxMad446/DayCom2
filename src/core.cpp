// Auto-generated module | 2026-05-13T20:47:28.063160
#include <iostream>
#include <vector>

int compute_165() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_165() << std::endl;
    return 0;
}
