// Auto-generated module | 2026-05-12T20:38:14.813623
#include <iostream>
#include <vector>

int compute_736() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_736() << std::endl;
    return 0;
}
