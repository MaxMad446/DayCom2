// Auto-generated module | 2026-05-12T21:32:34.713374
#include <iostream>
#include <vector>

int compute_736() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_736() << std::endl;
    return 0;
}
