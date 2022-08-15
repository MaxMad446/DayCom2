// Auto-generated module | 2026-05-14T06:17:15.391340
#include <iostream>
#include <vector>

int compute_540() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_540() << std::endl;
    return 0;
}
