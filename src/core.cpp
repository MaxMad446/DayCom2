// Auto-generated module | 2026-05-11T21:08:57.243578
#include <iostream>
#include <vector>

int compute_394() {
    int base = 102;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_394() << std::endl;
    return 0;
}
