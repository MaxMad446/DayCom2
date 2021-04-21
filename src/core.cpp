// Auto-generated module | 2026-05-11T20:11:39.654829
#include <iostream>
#include <vector>

int compute_421() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_421() << std::endl;
    return 0;
}
