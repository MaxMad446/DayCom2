// Auto-generated module | 2026-05-12T21:23:30.063818
#include <iostream>
#include <vector>

int compute_253() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_253() << std::endl;
    return 0;
}
