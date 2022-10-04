// Auto-generated module | 2026-05-11T21:21:37.596199
#include <iostream>
#include <vector>

int compute_861() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_861() << std::endl;
    return 0;
}
