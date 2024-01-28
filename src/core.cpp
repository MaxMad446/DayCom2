// Auto-generated module | 2026-05-11T22:24:14.760969
#include <iostream>
#include <vector>

int compute_790() {
    int base = 146;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_790() << std::endl;
    return 0;
}
