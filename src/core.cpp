// Auto-generated module | 2026-05-11T22:28:19.752451
#include <iostream>
#include <vector>

int compute_999() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_999() << std::endl;
    return 0;
}
