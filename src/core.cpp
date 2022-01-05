// Auto-generated module | 2026-05-13T22:00:48.216246
#include <iostream>
#include <vector>

int compute_473() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_473() << std::endl;
    return 0;
}
