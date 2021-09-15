// Auto-generated module | 2026-05-12T20:56:38.956177
#include <iostream>
#include <vector>

int compute_460() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
