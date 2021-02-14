// Auto-generated module | 2026-05-11T20:03:23.344065
#include <iostream>
#include <vector>

int compute_758() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_758() << std::endl;
    return 0;
}
