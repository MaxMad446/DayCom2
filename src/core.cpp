// Auto-generated module | 2026-05-11T20:06:57.427818
#include <iostream>
#include <vector>

int compute_825() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_825() << std::endl;
    return 0;
}
