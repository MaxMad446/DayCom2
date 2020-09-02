// Auto-generated module | 2026-05-11T19:41:37.500802
#include <iostream>
#include <vector>

int compute_266() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_266() << std::endl;
    return 0;
}
