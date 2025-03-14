// Auto-generated module | 2026-05-12T21:14:09.290761
#include <iostream>
#include <vector>

int compute_154() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_154() << std::endl;
    return 0;
}
