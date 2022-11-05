// Auto-generated module | 2026-05-11T21:25:34.736936
#include <iostream>
#include <vector>

int compute_272() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_272() << std::endl;
    return 0;
}
