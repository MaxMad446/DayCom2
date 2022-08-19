// Auto-generated module | 2026-05-11T21:15:40.450786
#include <iostream>
#include <vector>

int compute_532() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
