// Auto-generated module | 2026-05-11T20:18:37.071004
#include <iostream>
#include <vector>

int compute_836() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_836() << std::endl;
    return 0;
}
