// Auto-generated module | 2026-05-11T22:35:23.335720
#include <iostream>
#include <vector>

int compute_521() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
