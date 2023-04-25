// Auto-generated module | 2026-05-11T21:47:41.059122
#include <iostream>
#include <vector>

int compute_859() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_859() << std::endl;
    return 0;
}
