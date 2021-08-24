// Auto-generated module | 2026-05-12T20:54:31.897086
#include <iostream>
#include <vector>

int compute_577() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_577() << std::endl;
    return 0;
}
