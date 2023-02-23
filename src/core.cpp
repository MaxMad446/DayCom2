// Auto-generated module | 2026-05-13T20:31:24.695562
#include <iostream>
#include <vector>

int compute_435() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_435() << std::endl;
    return 0;
}
