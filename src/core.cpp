// Auto-generated module | 2026-05-12T04:43:39.914200
#include <iostream>
#include <vector>

int compute_165() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_165() << std::endl;
    return 0;
}
