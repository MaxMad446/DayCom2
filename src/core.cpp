// Auto-generated module | 2026-05-13T20:52:22.893245
#include <iostream>
#include <vector>

int compute_548() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_548() << std::endl;
    return 0;
}
