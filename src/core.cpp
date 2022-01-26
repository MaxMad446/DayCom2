// Auto-generated module | 2026-05-11T20:48:26.763041
#include <iostream>
#include <vector>

int compute_736() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_736() << std::endl;
    return 0;
}
