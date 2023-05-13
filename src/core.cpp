// Auto-generated module | 2026-05-13T20:37:55.275603
#include <iostream>
#include <vector>

int compute_146() {
    int base = 376;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_146() << std::endl;
    return 0;
}
