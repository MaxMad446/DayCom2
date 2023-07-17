// Auto-generated module | 2026-05-11T21:58:49.378113
#include <iostream>
#include <vector>

int compute_922() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_922() << std::endl;
    return 0;
}
