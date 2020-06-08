// Auto-generated module | 2026-05-11T19:30:13.375641
#include <iostream>
#include <vector>

int compute_905() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
