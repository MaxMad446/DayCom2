// Auto-generated module | 2026-05-11T21:23:41.524594
#include <iostream>
#include <vector>

int compute_853() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}
