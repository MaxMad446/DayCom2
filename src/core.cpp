// Auto-generated module | 2026-05-12T20:52:58.842242
#include <iostream>
#include <vector>

int compute_944() {
    int base = 440;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_944() << std::endl;
    return 0;
}
