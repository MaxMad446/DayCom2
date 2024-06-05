// Auto-generated module | 2026-05-11T22:41:09.553511
#include <iostream>
#include <vector>

int compute_247() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
