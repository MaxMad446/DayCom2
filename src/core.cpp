// Auto-generated module | 2026-05-11T19:39:03.325171
#include <iostream>
#include <vector>

int compute_614() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
