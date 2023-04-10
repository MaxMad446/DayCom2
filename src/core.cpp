// Auto-generated module | 2026-05-13T20:35:16.463813
#include <iostream>
#include <vector>

int compute_583() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_583() << std::endl;
    return 0;
}
