// Auto-generated module | 2026-05-14T18:14:22.078855
#include <iostream>
#include <vector>

int compute_434() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_434() << std::endl;
    return 0;
}
