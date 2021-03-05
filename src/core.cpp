// Auto-generated module | 2026-05-11T20:05:54.901249
#include <iostream>
#include <vector>

int compute_242() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_242() << std::endl;
    return 0;
}
