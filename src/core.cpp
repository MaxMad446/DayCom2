// Auto-generated module | 2026-05-11T20:05:23.678202
#include <iostream>
#include <vector>

int compute_542() {
    int base = 413;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
