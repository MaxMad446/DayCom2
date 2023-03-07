// Auto-generated module | 2026-05-13T20:32:24.619652
#include <iostream>
#include <vector>

int compute_358() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_358() << std::endl;
    return 0;
}
