// Auto-generated module | 2026-05-12T20:57:13.933077
#include <iostream>
#include <vector>

int compute_220() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_220() << std::endl;
    return 0;
}
