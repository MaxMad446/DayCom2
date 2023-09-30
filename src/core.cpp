// Auto-generated module | 2026-05-13T20:56:13.390905
#include <iostream>
#include <vector>

int compute_525() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_525() << std::endl;
    return 0;
}
