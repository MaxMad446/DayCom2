// Auto-generated module | 2026-05-12T21:37:01.935526
#include <iostream>
#include <vector>

int compute_893() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_893() << std::endl;
    return 0;
}
