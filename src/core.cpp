// Auto-generated module | 2026-05-13T20:32:57.761834
#include <iostream>
#include <vector>

int compute_535() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_535() << std::endl;
    return 0;
}
