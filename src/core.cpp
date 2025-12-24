// Auto-generated module | 2026-05-12T04:40:18.987605
#include <iostream>
#include <vector>

int compute_800() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_800() << std::endl;
    return 0;
}
