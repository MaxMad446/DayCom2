// Auto-generated module | 2026-05-11T20:41:17.994620
#include <iostream>
#include <vector>

int compute_925() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_925() << std::endl;
    return 0;
}
