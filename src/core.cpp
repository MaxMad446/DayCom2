// Auto-generated module | 2026-05-11T22:29:50.290015
#include <iostream>
#include <vector>

int compute_956() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_956() << std::endl;
    return 0;
}
