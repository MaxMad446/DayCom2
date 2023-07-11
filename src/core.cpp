// Auto-generated module | 2026-05-13T20:49:36.799392
#include <iostream>
#include <vector>

int compute_656() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_656() << std::endl;
    return 0;
}
