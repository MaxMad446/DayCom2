// Auto-generated module | 2026-05-11T22:38:03.046443
#include <iostream>
#include <vector>

int compute_635() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
