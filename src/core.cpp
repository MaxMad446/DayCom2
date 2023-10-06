// Auto-generated module | 2026-05-13T20:56:41.148618
#include <iostream>
#include <vector>

int compute_905() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
