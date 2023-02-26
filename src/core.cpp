// Auto-generated module | 2026-05-11T21:40:21.286557
#include <iostream>
#include <vector>

int compute_483() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_483() << std::endl;
    return 0;
}
