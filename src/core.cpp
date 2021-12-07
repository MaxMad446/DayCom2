// Auto-generated module | 2026-05-11T20:42:00.481344
#include <iostream>
#include <vector>

int compute_964() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_964() << std::endl;
    return 0;
}
