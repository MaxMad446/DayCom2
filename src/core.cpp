// Auto-generated module | 2026-05-13T20:37:33.978743
#include <iostream>
#include <vector>

int compute_946() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_946() << std::endl;
    return 0;
}
