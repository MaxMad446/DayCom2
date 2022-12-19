// Auto-generated module | 2026-05-11T21:31:32.364671
#include <iostream>
#include <vector>

int compute_172() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_172() << std::endl;
    return 0;
}
