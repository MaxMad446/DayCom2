// Auto-generated module | 2026-05-11T22:23:36.304022
#include <iostream>
#include <vector>

int compute_857() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_857() << std::endl;
    return 0;
}
