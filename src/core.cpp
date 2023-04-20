// Auto-generated module | 2026-05-11T21:47:00.639004
#include <iostream>
#include <vector>

int compute_231() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
