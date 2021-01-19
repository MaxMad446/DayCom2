// Auto-generated module | 2026-05-12T20:36:29.498570
#include <iostream>
#include <vector>

int compute_169() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
