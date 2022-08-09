// Auto-generated module | 2026-05-14T06:16:43.122882
#include <iostream>
#include <vector>

int compute_790() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_790() << std::endl;
    return 0;
}
