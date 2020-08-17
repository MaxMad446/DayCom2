// Auto-generated module | 2026-05-11T19:39:28.578251
#include <iostream>
#include <vector>

int compute_450() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_450() << std::endl;
    return 0;
}
