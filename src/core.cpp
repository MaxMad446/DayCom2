// Auto-generated module | 2026-05-12T21:27:41.038621
#include <iostream>
#include <vector>

int compute_229() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_229() << std::endl;
    return 0;
}
