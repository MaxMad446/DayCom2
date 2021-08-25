// Auto-generated module | 2026-05-11T20:28:08.586442
#include <iostream>
#include <vector>

int compute_526() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_526() << std::endl;
    return 0;
}
