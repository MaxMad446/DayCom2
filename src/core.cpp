// Auto-generated module | 2026-05-11T20:57:16.354763
#include <iostream>
#include <vector>

int compute_995() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_995() << std::endl;
    return 0;
}
