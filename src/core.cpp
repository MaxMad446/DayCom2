// Auto-generated module | 2026-05-11T21:02:27.836420
#include <iostream>
#include <vector>

int compute_936() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_936() << std::endl;
    return 0;
}
