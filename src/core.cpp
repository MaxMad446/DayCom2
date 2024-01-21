// Auto-generated module | 2026-05-14T18:18:49.384573
#include <iostream>
#include <vector>

int compute_277() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_277() << std::endl;
    return 0;
}
