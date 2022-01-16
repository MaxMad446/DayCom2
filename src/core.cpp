// Auto-generated module | 2026-05-11T20:47:06.049849
#include <iostream>
#include <vector>

int compute_951() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
