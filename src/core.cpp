// Auto-generated module | 2026-05-12T20:38:59.838852
#include <iostream>
#include <vector>

int compute_120() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_120() << std::endl;
    return 0;
}
