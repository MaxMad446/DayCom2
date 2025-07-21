// Auto-generated module | 2026-05-12T21:25:14.174386
#include <iostream>
#include <vector>

int compute_221() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
