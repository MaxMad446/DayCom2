// Auto-generated module | 2026-05-12T20:36:08.660789
#include <iostream>
#include <vector>

int compute_819() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_819() << std::endl;
    return 0;
}
