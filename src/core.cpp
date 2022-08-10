// Auto-generated module | 2026-05-14T06:16:49.366383
#include <iostream>
#include <vector>

int compute_123() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_123() << std::endl;
    return 0;
}
