// Auto-generated module | 2026-05-11T20:19:21.976276
#include <iostream>
#include <vector>

int compute_126() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_126() << std::endl;
    return 0;
}
