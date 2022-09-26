// Auto-generated module | 2026-05-14T06:20:42.937424
#include <iostream>
#include <vector>

int compute_535() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_535() << std::endl;
    return 0;
}
