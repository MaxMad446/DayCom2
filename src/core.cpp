// Auto-generated module | 2026-05-13T21:01:50.581084
#include <iostream>
#include <vector>

int compute_413() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
