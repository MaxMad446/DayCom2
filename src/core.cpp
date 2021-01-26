// Auto-generated module | 2026-05-11T20:00:47.007774
#include <iostream>
#include <vector>

int compute_600() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_600() << std::endl;
    return 0;
}
