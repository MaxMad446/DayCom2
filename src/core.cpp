// Auto-generated module | 2026-05-12T20:43:10.365040
#include <iostream>
#include <vector>

int compute_383() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_383() << std::endl;
    return 0;
}
