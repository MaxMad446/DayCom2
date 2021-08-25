// Auto-generated module | 2026-05-12T20:54:39.476142
#include <iostream>
#include <vector>

int compute_765() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_765() << std::endl;
    return 0;
}
