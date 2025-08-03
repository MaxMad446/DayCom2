// Auto-generated module | 2026-05-12T21:26:22.730742
#include <iostream>
#include <vector>

int compute_272() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_272() << std::endl;
    return 0;
}
