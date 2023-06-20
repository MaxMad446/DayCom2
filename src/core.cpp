// Auto-generated module | 2026-05-13T20:47:54.181744
#include <iostream>
#include <vector>

int compute_428() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_428() << std::endl;
    return 0;
}
