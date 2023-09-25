// Auto-generated module | 2026-05-13T20:55:48.608926
#include <iostream>
#include <vector>

int compute_556() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_556() << std::endl;
    return 0;
}
