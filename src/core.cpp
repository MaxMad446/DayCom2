// Auto-generated module | 2026-05-11T20:40:40.346933
#include <iostream>
#include <vector>

int compute_260() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_260() << std::endl;
    return 0;
}
