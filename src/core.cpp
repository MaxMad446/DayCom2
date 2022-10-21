// Auto-generated module | 2026-05-14T06:22:43.480592
#include <iostream>
#include <vector>

int compute_243() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_243() << std::endl;
    return 0;
}
