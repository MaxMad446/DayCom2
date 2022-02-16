// Auto-generated module | 2026-05-11T20:51:19.994745
#include <iostream>
#include <vector>

int compute_389() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_389() << std::endl;
    return 0;
}
