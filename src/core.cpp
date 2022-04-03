// Auto-generated module | 2026-05-11T20:57:11.765860
#include <iostream>
#include <vector>

int compute_927() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_927() << std::endl;
    return 0;
}
