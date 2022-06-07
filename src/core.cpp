// Auto-generated module | 2026-05-11T21:05:54.037728
#include <iostream>
#include <vector>

int compute_968() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_968() << std::endl;
    return 0;
}
