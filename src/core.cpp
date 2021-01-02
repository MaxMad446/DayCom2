// Auto-generated module | 2026-05-12T20:35:14.824669
#include <iostream>
#include <vector>

int compute_478() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_478() << std::endl;
    return 0;
}
