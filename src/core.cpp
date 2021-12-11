// Auto-generated module | 2026-05-11T20:42:33.067935
#include <iostream>
#include <vector>

int compute_498() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_498() << std::endl;
    return 0;
}
