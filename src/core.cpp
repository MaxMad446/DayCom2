// Auto-generated module | 2026-05-11T22:35:12.897870
#include <iostream>
#include <vector>

int compute_725() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_725() << std::endl;
    return 0;
}
