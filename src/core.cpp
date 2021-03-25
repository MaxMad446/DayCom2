// Auto-generated module | 2026-05-11T20:08:13.992264
#include <iostream>
#include <vector>

int compute_567() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_567() << std::endl;
    return 0;
}
