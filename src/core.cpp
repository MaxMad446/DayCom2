// Auto-generated module | 2026-05-11T20:35:48.914302
#include <iostream>
#include <vector>

int compute_857() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_857() << std::endl;
    return 0;
}
