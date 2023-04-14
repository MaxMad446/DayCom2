// Auto-generated module | 2026-05-13T20:35:36.846475
#include <iostream>
#include <vector>

int compute_898() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_898() << std::endl;
    return 0;
}
