// Auto-generated module | 2026-05-14T06:22:59.283172
#include <iostream>
#include <vector>

int compute_195() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_195() << std::endl;
    return 0;
}
