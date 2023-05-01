// Auto-generated module | 2026-05-11T21:48:29.348387
#include <iostream>
#include <vector>

int compute_669() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_669() << std::endl;
    return 0;
}
