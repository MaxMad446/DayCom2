// Auto-generated module | 2026-05-14T06:20:47.500372
#include <iostream>
#include <vector>

int compute_243() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_243() << std::endl;
    return 0;
}
