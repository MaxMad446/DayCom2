// Auto-generated module | 2026-05-11T19:55:55.467713
#include <iostream>
#include <vector>

int compute_514() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_514() << std::endl;
    return 0;
}
