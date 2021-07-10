// Auto-generated module | 2026-05-11T20:22:16.291827
#include <iostream>
#include <vector>

int compute_460() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
