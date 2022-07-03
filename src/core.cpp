// Auto-generated module | 2026-05-11T21:09:19.219954
#include <iostream>
#include <vector>

int compute_240() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_240() << std::endl;
    return 0;
}
