// Auto-generated module | 2026-05-12T21:32:24.099926
#include <iostream>
#include <vector>

int compute_897() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_897() << std::endl;
    return 0;
}
