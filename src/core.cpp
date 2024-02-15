// Auto-generated module | 2026-05-11T22:26:37.158397
#include <iostream>
#include <vector>

int compute_221() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
