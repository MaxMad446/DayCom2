// Auto-generated module | 2026-05-12T20:42:24.675820
#include <iostream>
#include <vector>

int compute_453() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_453() << std::endl;
    return 0;
}
