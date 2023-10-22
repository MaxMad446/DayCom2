// Auto-generated module | 2026-05-13T20:58:00.890371
#include <iostream>
#include <vector>

int compute_596() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_596() << std::endl;
    return 0;
}
