// Auto-generated module | 2026-05-13T20:33:29.475185
#include <iostream>
#include <vector>

int compute_795() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_795() << std::endl;
    return 0;
}
