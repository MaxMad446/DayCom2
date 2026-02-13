// Auto-generated module | 2026-05-12T04:47:16.191151
#include <iostream>
#include <vector>

int compute_168() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_168() << std::endl;
    return 0;
}
