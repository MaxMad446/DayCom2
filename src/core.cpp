// Auto-generated module | 2026-05-11T20:23:31.167883
#include <iostream>
#include <vector>

int compute_927() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_927() << std::endl;
    return 0;
}
