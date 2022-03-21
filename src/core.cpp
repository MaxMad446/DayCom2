// Auto-generated module | 2026-05-13T22:07:09.716820
#include <iostream>
#include <vector>

int compute_358() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_358() << std::endl;
    return 0;
}
