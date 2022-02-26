// Auto-generated module | 2026-05-11T20:52:35.790681
#include <iostream>
#include <vector>

int compute_213() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_213() << std::endl;
    return 0;
}
