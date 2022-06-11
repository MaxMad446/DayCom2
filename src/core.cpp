// Auto-generated module | 2026-05-11T21:06:25.278011
#include <iostream>
#include <vector>

int compute_440() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
