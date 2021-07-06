// Auto-generated module | 2026-05-11T20:21:38.171766
#include <iostream>
#include <vector>

int compute_455() {
    int base = 308;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_455() << std::endl;
    return 0;
}
