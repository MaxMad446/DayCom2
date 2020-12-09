// Auto-generated module | 2026-05-12T20:01:31.487679
#include <iostream>
#include <vector>

int compute_248() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_248() << std::endl;
    return 0;
}
