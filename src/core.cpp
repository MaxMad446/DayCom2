// Auto-generated module | 2026-05-13T22:06:55.610540
#include <iostream>
#include <vector>

int compute_535() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_535() << std::endl;
    return 0;
}
