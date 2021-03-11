// Auto-generated module | 2026-05-12T20:40:38.766106
#include <iostream>
#include <vector>

int compute_187() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_187() << std::endl;
    return 0;
}
