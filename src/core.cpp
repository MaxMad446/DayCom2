// Auto-generated module | 2026-05-11T22:37:40.915500
#include <iostream>
#include <vector>

int compute_440() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
