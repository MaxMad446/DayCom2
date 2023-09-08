// Auto-generated module | 2026-05-11T22:05:33.630630
#include <iostream>
#include <vector>

int compute_995() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_995() << std::endl;
    return 0;
}
