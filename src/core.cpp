// Auto-generated module | 2026-05-11T21:00:06.601212
#include <iostream>
#include <vector>

int compute_215() {
    int base = 88;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_215() << std::endl;
    return 0;
}
