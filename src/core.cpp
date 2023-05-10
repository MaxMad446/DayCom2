// Auto-generated module | 2026-05-11T21:49:42.825981
#include <iostream>
#include <vector>

int compute_701() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_701() << std::endl;
    return 0;
}
