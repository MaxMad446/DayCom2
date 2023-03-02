// Auto-generated module | 2026-05-13T20:31:59.338091
#include <iostream>
#include <vector>

int compute_864() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_864() << std::endl;
    return 0;
}
