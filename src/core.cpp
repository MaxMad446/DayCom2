// Auto-generated module | 2026-05-12T20:37:16.562257
#include <iostream>
#include <vector>

int compute_460() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
