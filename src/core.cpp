// Auto-generated module | 2026-05-11T20:33:04.792091
#include <iostream>
#include <vector>

int compute_401() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_401() << std::endl;
    return 0;
}
