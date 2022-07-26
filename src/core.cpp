// Auto-generated module | 2026-05-14T06:15:42.870019
#include <iostream>
#include <vector>

int compute_223() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_223() << std::endl;
    return 0;
}
