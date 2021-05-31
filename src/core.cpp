// Auto-generated module | 2026-05-12T20:47:26.578466
#include <iostream>
#include <vector>

int compute_637() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_637() << std::endl;
    return 0;
}
