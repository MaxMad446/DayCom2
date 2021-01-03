// Auto-generated module | 2026-05-12T21:30:55.479449
#include <iostream>
#include <vector>

int compute_963() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_963() << std::endl;
    return 0;
}
