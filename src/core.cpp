// Auto-generated module | 2026-05-11T21:57:51.807917
#include <iostream>
#include <vector>

int compute_909() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_909() << std::endl;
    return 0;
}
