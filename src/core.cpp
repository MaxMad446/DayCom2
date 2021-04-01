// Auto-generated module | 2026-05-11T20:09:11.224234
#include <iostream>
#include <vector>

int compute_361() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_361() << std::endl;
    return 0;
}
