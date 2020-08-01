// Auto-generated module | 2026-05-11T19:37:23.607621
#include <iostream>
#include <vector>

int compute_736() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_736() << std::endl;
    return 0;
}
