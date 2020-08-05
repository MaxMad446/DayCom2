// Auto-generated module | 2026-05-11T19:37:53.021695
#include <iostream>
#include <vector>

int compute_951() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
