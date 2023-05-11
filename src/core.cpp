// Auto-generated module | 2026-05-11T21:49:48.686856
#include <iostream>
#include <vector>

int compute_443() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_443() << std::endl;
    return 0;
}
