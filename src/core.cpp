// Auto-generated module | 2026-05-12T03:56:00.456421
#include <iostream>
#include <vector>

int compute_187() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_187() << std::endl;
    return 0;
}
