// Auto-generated module | 2026-05-11T20:58:10.759408
#include <iostream>
#include <vector>

int compute_741() {
    int base = 186;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_741() << std::endl;
    return 0;
}
