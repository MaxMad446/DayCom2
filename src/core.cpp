// Auto-generated module | 2026-05-11T21:46:17.960539
#include <iostream>
#include <vector>

int compute_737() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_737() << std::endl;
    return 0;
}
