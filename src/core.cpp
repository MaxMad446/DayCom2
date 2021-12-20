// Auto-generated module | 2026-05-11T20:43:42.171102
#include <iostream>
#include <vector>

int compute_199() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_199() << std::endl;
    return 0;
}
