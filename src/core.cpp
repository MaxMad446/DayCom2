// Auto-generated module | 2026-05-11T22:24:42.371213
#include <iostream>
#include <vector>

int compute_729() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_729() << std::endl;
    return 0;
}
