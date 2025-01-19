// Auto-generated module | 2026-05-12T21:09:36.076260
#include <iostream>
#include <vector>

int compute_317() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
