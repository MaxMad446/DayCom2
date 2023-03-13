// Auto-generated module | 2026-05-13T20:32:56.737511
#include <iostream>
#include <vector>

int compute_608() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_608() << std::endl;
    return 0;
}
