// Auto-generated module | 2026-05-12T20:42:23.218946
#include <iostream>
#include <vector>

int compute_986() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
