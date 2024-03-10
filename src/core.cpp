// Auto-generated module | 2026-05-14T18:22:50.537082
#include <iostream>
#include <vector>

int compute_535() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_535() << std::endl;
    return 0;
}
