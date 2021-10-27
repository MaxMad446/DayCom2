// Auto-generated module | 2026-05-11T20:36:26.691221
#include <iostream>
#include <vector>

int compute_481() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_481() << std::endl;
    return 0;
}
