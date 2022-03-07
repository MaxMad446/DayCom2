// Auto-generated module | 2026-05-11T20:53:42.548650
#include <iostream>
#include <vector>

int compute_497() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_497() << std::endl;
    return 0;
}
