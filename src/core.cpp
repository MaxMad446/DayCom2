// Auto-generated module | 2026-05-11T22:51:23.319564
#include <iostream>
#include <vector>

int compute_360() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_360() << std::endl;
    return 0;
}
