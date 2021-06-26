// Auto-generated module | 2026-05-11T20:20:22.796574
#include <iostream>
#include <vector>

int compute_499() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_499() << std::endl;
    return 0;
}
