// Auto-generated module | 2026-05-11T21:06:21.564795
#include <iostream>
#include <vector>

int compute_428() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_428() << std::endl;
    return 0;
}
