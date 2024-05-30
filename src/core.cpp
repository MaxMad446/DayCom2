// Auto-generated module | 2026-05-11T22:40:21.980567
#include <iostream>
#include <vector>

int compute_631() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_631() << std::endl;
    return 0;
}
