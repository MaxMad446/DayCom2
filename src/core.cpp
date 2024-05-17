// Auto-generated module | 2026-05-11T22:38:45.449525
#include <iostream>
#include <vector>

int compute_509() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_509() << std::endl;
    return 0;
}
