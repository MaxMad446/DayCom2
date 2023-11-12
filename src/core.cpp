// Auto-generated module | 2026-05-11T22:14:07.993259
#include <iostream>
#include <vector>

int compute_525() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_525() << std::endl;
    return 0;
}
