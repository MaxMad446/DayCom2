// Auto-generated module | 2026-05-12T20:00:47.634469
#include <iostream>
#include <vector>

int compute_236() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_236() << std::endl;
    return 0;
}
