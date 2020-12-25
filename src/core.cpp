// Auto-generated module | 2026-05-12T20:03:00.675405
#include <iostream>
#include <vector>

int compute_614() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
