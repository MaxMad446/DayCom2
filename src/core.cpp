// Auto-generated module | 2026-05-11T19:38:24.868832
#include <iostream>
#include <vector>

int compute_201() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_201() << std::endl;
    return 0;
}
