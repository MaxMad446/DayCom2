// Auto-generated module | 2026-05-12T21:39:13.755470
#include <iostream>
#include <vector>

int compute_403() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
