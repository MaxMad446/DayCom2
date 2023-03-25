// Auto-generated module | 2026-05-11T21:43:47.945427
#include <iostream>
#include <vector>

int compute_172() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_172() << std::endl;
    return 0;
}
