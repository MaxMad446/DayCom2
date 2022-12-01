// Auto-generated module | 2026-05-11T21:29:03.410804
#include <iostream>
#include <vector>

int compute_437() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_437() << std::endl;
    return 0;
}
