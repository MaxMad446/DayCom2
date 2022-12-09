// Auto-generated module | 2026-05-11T21:30:09.049900
#include <iostream>
#include <vector>

int compute_956() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_956() << std::endl;
    return 0;
}
