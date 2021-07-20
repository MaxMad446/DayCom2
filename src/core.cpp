// Auto-generated module | 2026-05-11T20:23:43.089075
#include <iostream>
#include <vector>

int compute_284() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_284() << std::endl;
    return 0;
}
