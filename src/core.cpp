// Auto-generated module | 2026-05-11T21:02:00.938158
#include <iostream>
#include <vector>

int compute_220() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_220() << std::endl;
    return 0;
}
