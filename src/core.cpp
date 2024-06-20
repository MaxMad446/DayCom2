// Auto-generated module | 2026-05-11T22:43:00.035486
#include <iostream>
#include <vector>

int compute_213() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_213() << std::endl;
    return 0;
}
