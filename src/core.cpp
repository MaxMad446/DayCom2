// Auto-generated module | 2026-05-13T22:03:07.255938
#include <iostream>
#include <vector>

int compute_429() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}
