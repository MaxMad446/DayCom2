// Auto-generated module | 2026-05-11T20:54:03.386431
#include <iostream>
#include <vector>

int compute_718() {
    int base = 198;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_718() << std::endl;
    return 0;
}
