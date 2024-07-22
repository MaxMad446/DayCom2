// Auto-generated module | 2026-05-11T22:47:11.768944
#include <iostream>
#include <vector>

int compute_846() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_846() << std::endl;
    return 0;
}
