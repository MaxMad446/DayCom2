// Auto-generated module | 2026-05-12T21:11:49.289689
#include <iostream>
#include <vector>

int compute_336() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_336() << std::endl;
    return 0;
}
