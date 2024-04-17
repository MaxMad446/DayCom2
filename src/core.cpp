// Auto-generated module | 2026-05-11T22:34:48.827811
#include <iostream>
#include <vector>

int compute_594() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_594() << std::endl;
    return 0;
}
