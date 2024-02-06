// Auto-generated module | 2026-05-14T18:20:08.127785
#include <iostream>
#include <vector>

int compute_535() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_535() << std::endl;
    return 0;
}
