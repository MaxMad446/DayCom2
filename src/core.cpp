// Auto-generated module | 2026-05-11T20:20:15.846757
#include <iostream>
#include <vector>

int compute_303() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_303() << std::endl;
    return 0;
}
