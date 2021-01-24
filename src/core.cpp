// Auto-generated module | 2026-05-11T20:00:31.018240
#include <iostream>
#include <vector>

int compute_834() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_834() << std::endl;
    return 0;
}
